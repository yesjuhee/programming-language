// B2CMain.cpp
#include "antlr4-cpp/BBaseVisitor.h"
#include "antlr4-cpp/BLexer.h"
#include "antlr4-cpp/BParser.h"
#include "antlr4-runtime.h"
#include <iostream>
#include <map>
#include <stack>

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

enum Types { tyAUTO,
             tyINT,
             tyDOUBLE,
             tySTRING,
             tyBOOL,
             tyCHAR,
             tyFUNCTION,
             tyVOID };
string mnemonicTypes[] = { "auto", "int", "double", "string", "bool", "char", "function", "void" };

struct SymbolAttributes {
    Types type; // int, double, bool, char, string, function --- auto if unknown yet

    // if type == "function"
    vector<Types> retArgTypes; // first element is a return_type
};

class SymbolTable {
private:
    map<string, SymbolAttributes> table; // symbol-name: string, symbol-typeInfo: SymbolAttributes

public:
    // Add a new symbol
    void addSymbol(const string &name, const SymbolAttributes &attributes) {
        table[name] = attributes;
    }

    // Check if a symbol exists
    bool symbolExists(const string &name) const {
        return table.find(name) != table.end();
    }

    // Get attributes of a symbol
    SymbolAttributes getSymbolAttributes(const string &name) const {
        if (symbolExists(name)) {
            return table.at(name);
        } else {
            cout << "Error: Symbol " << name << " not found" << endl;
            exit(1);
        }
    }

    // Remove a symbol from the table
    void removeSymbol(const string &name) {
        table.erase(name);
    }

    // Print all symbols in the table (for debugging purposes)
    void printSymbols() const {
        for (const auto &pair : table) {
            cout << "(name) " << pair.first << ", (type) " << mnemonicTypes[pair.second.type];
            if (pair.second.type == tyFUNCTION) {
                cout << "| ";
                int n = pair.second.retArgTypes.size();
                if (n > 0) {
                    cout << mnemonicTypes[pair.second.retArgTypes[0]] << "("; // return type
                }
                for (int i = 1; i < n - 1; i++)
                    cout << mnemonicTypes[pair.second.retArgTypes[i]] << ", ";
                if (n > 1) {
                    cout << mnemonicTypes[pair.second.retArgTypes[n - 1]]; // last arg type
                }
                cout << ")";
            }
            cout << endl;
        }
    }
};

/*
 * STEP 1. build symbol table
 */
const string _GlobalFuncName_ = "$_global_$";

// collection of per-function symbol tables accessed by function name
// symbol table in global scope can be accessed with special name defined in _GlobalFuncName_
map<string, SymbolTable *> symTabs;

class SymbolTableVisitor : public BBaseVisitor {
private:
    int scopeLevel;
    string curFuncName;
    int blockIndex = 0;

public:
    // Building symbol tables by visiting tree

    any visitProgram(BParser::ProgramContext *ctx) override {
        scopeLevel = 0; // global scope

        // prepare symbol table for global scope
        SymbolTable *globalSymTab = new SymbolTable();
        curFuncName = _GlobalFuncName_;
        symTabs[curFuncName] = globalSymTab;

        // visit children
        for (int i = 0; i < ctx->children.size(); i++) {
            curFuncName = _GlobalFuncName_;
            scopeLevel = 0;
            visit(ctx->children[i]);
        }

        // print all symbol tables
        for (auto &pair : symTabs) {
            cout << "--- Symbol Table --- " << pair.first << endl; // function name
            pair.second->printSymbols();                           // per-function symbol table
            cout << endl;
        }

        return nullptr;
    }

    any visitDefinition(BParser::DefinitionContext *ctx) override {
        visit(ctx->children[0]);
        return nullptr;
    }

    any visitAutostmt(BParser::AutostmtContext *ctx) override {
        // get current symbol table
        SymbolTable *stab = symTabs[curFuncName];

        // You can retrieve the variable names and constants using ctx->name(i) and ctx->constant(i)
        for (int i = 0, j = 0; i < ctx->name().size(); i++) {

            string varName = ctx->name(i)->getText();
            enum Types varType = tyAUTO; // default type

            // if initialized, get constant type
            int idx_assn = 1 + i * 2 + j * 2 + 1; // auto name (= const)?, name (= const)?, ...
            if (ctx->children[idx_assn]->getText().compare("=") == 0) {
                if (ctx->constant(j)) {
                    varType = any_cast<Types>(visit(ctx->constant(j))); // returns init constant type
                    j++;
                }
            }

            // duplicate error check
            if (stab->symbolExists(varName)) {
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] duplicateSymbols: duplicated symbol in Line " << lineNum << " -- " << varName << endl;
                exit(-1); // error
            }
            stab->addSymbol(varName, { varType });
        }
        return nullptr;
    }

    any visitDeclstmt(BParser::DeclstmtContext *ctx) override {
        // get current symbol table
        SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];

        string funcName = ctx->name()->getText();
        enum Types funcType = tyFUNCTION;
        vector<Types> funcRetArgTypes;
        for (int i = 0; i < ctx->AUTO().size(); i++) {
            funcRetArgTypes.push_back(tyAUTO);
        }

        // check errors
        if (globalSymTab->symbolExists(funcName)) {
            SymbolAttributes oldAttributes = globalSymTab->getSymbolAttributes(funcName);
            if (oldAttributes.type != tyFUNCTION) {
                // duplicate error
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] duplicateSymbols: duplicated symbol in Line " << lineNum << " -- " << funcName << endl;
                exit(-1); // error
            } else if (oldAttributes.retArgTypes.size() != funcRetArgTypes.size()) {
                // parameter count error
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] wrongParameterNumbers: the number of parameters incorrect in Line " << lineNum << " -- " << funcName << endl;
                exit(-1); // error
            }
        }

        // addSymbol
        globalSymTab->addSymbol(funcName, { funcType, funcRetArgTypes });

        return nullptr;
    }

    any visitFuncdef(BParser::FuncdefContext *ctx) override {
        blockIndex = 0;
        // global symbol table에 넣기
        SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];

        string funcName = ctx->name(0)->getText();
        enum Types funcType = tyFUNCTION;
        vector<Types> funcRetArgTypes;
        for (int i = 0; i < ctx->AUTO().size(); i++) {
            funcRetArgTypes.push_back(tyAUTO);
        }

        // addSymbol 하기 전에 심볼 중복 체크
        // 심볼 중복 체크 할 때 파라미터도 같이 체크
        if (globalSymTab->symbolExists(funcName)) {
            SymbolAttributes oldAttributes = globalSymTab->getSymbolAttributes(funcName);
            if (oldAttributes.type != tyFUNCTION) {
                // 일반 변수와 중복된 선언이라면 에러
                // duplicate error
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] duplicateSymbols: duplicated symbol in Line " << lineNum << " -- " << funcName << endl;
                exit(-1); // error
            } else if (oldAttributes.retArgTypes.size() != funcRetArgTypes.size()) {
                // 파라미터 개수 확인
                // parameter count error
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] wrongParameterNumbers: the number of parameters incorrect in Line " << lineNum << " -- " << funcName << endl;
                exit(-1); // error
            }
        }
        globalSymTab->addSymbol(funcName, { funcType, funcRetArgTypes });

        SymbolTable *funcSymTab = new SymbolTable();
        curFuncName = funcName;
        symTabs[curFuncName] = funcSymTab;
        // 심볼 테이블에 파라미터 추가하기
        for (int i = 1; i < ctx->name().size(); i++) {
            string paramName = ctx->name(i)->getText();
            funcSymTab->addSymbol(paramName, { tyAUTO });
        }

        // 자식 노드 모두 방문 - 펑션 이름 유지하면서
        // visit children
        for (int i = 0; i < ctx->children.size(); i++) {
            curFuncName = funcName;
            scopeLevel = 0;
            visit(ctx->children[i]);
        }

        return nullptr;
    }

    any visitStatement(BParser::StatementContext *ctx) override {
        visit(ctx->children[0]);
        return nullptr;
    }

    any visitBlockstmt(BParser::BlockstmtContext *ctx) override {
        string funcName = curFuncName;
        scopeLevel++;
        int blockScope = scopeLevel; // 이 블록의 스코프 기록

        if (blockScope == 1) {
            // 함수 이름 있음 그러니까 함수의 blockstmt에 해당하는 부분임.
            // cur func name 그대로
            for (int i = 0; i < ctx->statement().size(); i++) {
                curFuncName = funcName;
                scopeLevel = blockScope;
                visit(ctx->statement(i));
            }
        } else if (blockScope > 1) {
            blockIndex++;
            string curBlockName = funcName + "_$" + to_string(blockIndex); // 하위블록 의미 (스코프 구분 불가)
            // Symbol Table 새로 만들기
            SymbolTable *blockSymTab = new SymbolTable();
            symTabs[curBlockName] = blockSymTab;
            for (int i = 0; i < ctx->statement().size(); i++) {
                curFuncName = curBlockName;
                scopeLevel = blockScope;
                visit(ctx->statement(i));
            }
        }

        return nullptr;
    }

    any visitIfstmt(BParser::IfstmtContext *ctx) override {
        string funcName = curFuncName;
        int blockScope = scopeLevel;

        for (int i = 0; i < ctx->statement().size(); i++) {
            curFuncName = funcName;
            scopeLevel = blockScope;
            visit(ctx->statement(i));
        }
        return nullptr;
    }

    any visitWhilestmt(BParser::WhilestmtContext *ctx) override {
        for (auto child : ctx->children) {
            visit(child);
        }
        return nullptr;
    }

    any visitConstant(BParser::ConstantContext *ctx) override {

        if (ctx->INT())
            return tyINT;
        else if (ctx->REAL())
            return tyDOUBLE;
        else if (ctx->STRING())
            return tySTRING;
        else if (ctx->BOOL())
            return tyBOOL;
        else if (ctx->CHAR())
            return tyCHAR;

        cout << "[ERROR] unrecognizable constant is used for initialization: " << ctx->children[0]->getText() << endl;
        exit(-1);
        return nullptr;
    }
};

/*
 * STEP 2. infer type
 */
class TypeAnalysisVisitor : public BBaseVisitor {
private:
    int scopeLevel;
    string curFuncName;
    int blockIndex = 0;
    int visitCount = 0;

public:
    // infer types for 'auto' variables and functions

    any visitProgram(BParser::ProgramContext *ctx) override {
        // cout << "visitProgram\n";
        scopeLevel = 0; // global scope

        // visit children
        visitCount++;
        for (int i = 0; i < ctx->children.size(); i++) {
            curFuncName = _GlobalFuncName_;
            scopeLevel = 0;
            visit(ctx->children[i]);
        }

        // twice
        visitCount++;
        for (int i = 0; i < ctx->children.size(); i++) {
            curFuncName = _GlobalFuncName_;
            scopeLevel = 0;
            visit(ctx->children[i]);
        }

        // last - for undefined varibles/functions
        visitCount++;
        for (int i = 0; i < ctx->children.size(); i++) {
            curFuncName = _GlobalFuncName_;
            scopeLevel = 0;
            visit(ctx->children[i]);
        }

        // print all symbol tables
        for (auto &pair : symTabs) {
            cout << "--- Symbol Table --- " << pair.first << endl; // function name
            pair.second->printSymbols();                           // per-function symbol table
            cout << endl;
        }

        return nullptr;
    }

    any visitDeclstmt(BParser::DeclstmtContext *ctx) override {
        // cout << "visitDeclstmst\n";
        if (visitCount == 3) {
            SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];
            string funcName = ctx->name()->getText();
            SymbolAttributes funcSymbolAttributes = globalSymTab->getSymbolAttributes(funcName);
            if (funcSymbolAttributes.retArgTypes[0] == tyAUTO) {
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] undefinedTypeError: undefined function in Line " << lineNum << " -- " << funcName << endl;
                exit(-1); // error
            }
            for (int i = 1; i < funcSymbolAttributes.retArgTypes.size(); i++) {
                if (funcSymbolAttributes.retArgTypes[i] == tyAUTO) {
                    int lineNum = ctx->getStart()->getLine();
                    cerr << endl
                         << "[ERROR] undefinedTypeError: no callsite of the function in Line " << lineNum << " -- " << funcName << endl;
                    exit(-1); // error
                }
            }
        }
        return nullptr;
    }

    any visitAutostmt(BParser::AutostmtContext *ctx) override {
        // cout << "visitAutostmt\n";
        if (visitCount == 3) {
            SymbolTable *curSymTab = symTabs[curFuncName];
            for (auto name : ctx->name()) {
                string varName = name->getText();
                SymbolAttributes curSymbolAttributes = curSymTab->getSymbolAttributes(varName);
                if (curSymbolAttributes.type == tyAUTO) {
                    int lineNum = ctx->getStart()->getLine();
                    cerr << endl
                         << "[ERROR] undefinedTypeError: undefined variable in Line " << lineNum << " -- " << varName << endl;
                    exit(-1); // error
                }
            }
        }
        return nullptr;
    }

    any visitFuncdef(BParser::FuncdefContext *ctx) override {
        // cout << "visitFuncdef\n";
        blockIndex = 0;

        string funcName = ctx->name(0)->getText();
        SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];
        SymbolTable *funcSymTab = symTabs[funcName];
        struct SymbolAttributes funcSymbolAttributes = globalSymTab->getSymbolAttributes(funcName);
        vector<Types> funcRetArgTypes = funcSymbolAttributes.retArgTypes;

        // fix function symbol table using global symbol table's function symbol attributes
        for (int i = 1; i < ctx->name().size(); i++) {
            Types argType = funcSymbolAttributes.retArgTypes[i];
            string argName = ctx->name(i)->getText();
            funcSymTab->removeSymbol(argName);
            funcSymTab->addSymbol(argName, { argType });
        }

        // visit blockstmt
        curFuncName = funcName;
        scopeLevel = 0;
        visit(ctx->blockstmt());

        // void function check
        funcSymTab = symTabs[funcName];
        funcSymbolAttributes = globalSymTab->getSymbolAttributes(funcName);
        funcRetArgTypes = funcSymbolAttributes.retArgTypes;
        if (visitCount == 2 && funcRetArgTypes[0] == tyAUTO) {
            funcRetArgTypes[0] = tyVOID;
            funcSymbolAttributes.retArgTypes = funcRetArgTypes;
            globalSymTab->removeSymbol(funcName);
            globalSymTab->addSymbol(funcName, funcSymbolAttributes);
        }
        // undefined argument error (no callsite)
        if (visitCount == 3) {
            for (int i = 1; i < funcSymbolAttributes.retArgTypes.size(); i++) {
                if (funcSymbolAttributes.retArgTypes[i] == tyAUTO) {
                    int lineNum = ctx->getStart()->getLine();
                    cerr << endl
                         << "[ERROR] undefinedTypeError: no callsite of the function in Line " << lineNum << " -- " << funcName << endl;
                    exit(-1); // error
                }
            }
        }

        return nullptr;
    }

    any visitBlockstmt(BParser::BlockstmtContext *ctx) override {
        // cout << "visitBlockstmt\n";
        string funcName = curFuncName;
        scopeLevel++;
        int blockScope = scopeLevel;

        if (blockScope == 1) {
            // 함수 이름 있음 그러니까 함수의 blockstmt에 해당하는 부분임.
            // cur func name 그대로
            for (auto stmt : ctx->statement()) {
                curFuncName = funcName;
                scopeLevel = blockScope;
                visit(stmt);
            }
        } else if (blockScope > 1) {
            blockIndex++;
            string curBlockName = funcName + "_$" + to_string(blockIndex);
            for (auto stmt : ctx->statement()) {
                curFuncName = curBlockName;
                scopeLevel = blockScope;
                visit(stmt);
            }
        }

        return nullptr;
    }

    any visitIfstmt(BParser::IfstmtContext *ctx) override {
        // cout << "visitIfstmt\n";
        string funcName = curFuncName;
        int blockScope = scopeLevel;

        for (int i = 0; i < ctx->statement().size(); i++) {
            curFuncName = funcName;
            scopeLevel = blockScope;
            visit(ctx->statement(i));
        }
        return nullptr;
    }

    any visitExpression(BParser::ExpressionContext *ctx) override {
        // cout << "visitExpression\n";
        if (!ctx->name()) {
            return visit(ctx->expr());
        }

        // name 있으면
        // symtab에서 검색
        SymbolTable *funcSymTab;
        string funcName = curFuncName;
        string varName = ctx->name()->getText();

        // varName이 존재하는 function scope 찾기
        while (true) {
            funcSymTab = symTabs[funcName];
            if (funcSymTab->symbolExists(varName)) {
                break; // find the var
            }

            size_t pos = funcName.rfind("_$");

            if (pos == std::string::npos) { // move to global scope
                funcName = _GlobalFuncName_;
                funcSymTab = symTabs[funcName];
                if (funcSymTab->symbolExists(varName)) {
                    break;
                } else {
                    int lineNum = ctx->getStart()->getLine();
                    cerr << endl
                         << "[ERROR] wrongName: the name incorrect in Line " << lineNum << " -- " << varName << endl;
                    exit(-1); // error
                }
            }

            funcName = funcName.substr(0, pos); // move to upper scope
        }

        enum Types curType = funcSymTab->getSymbolAttributes(varName).type;
        enum Types inferredType = any_cast<Types>(visit(ctx->expr()));

        if (inferredType == tyVOID) {
            int lineNum = ctx->getStart()->getLine();
            cerr << endl
                 << "[ERROR] inconsistentTypes: different types (void) for the same variable in Line " << lineNum << endl;
            exit(-1);                   // error
        } else if (curType == tyAUTO) { // first assignment
            funcSymTab->removeSymbol(varName);
            funcSymTab->addSymbol(varName, { inferredType });
        } else if (inferredType != tyAUTO && curType != inferredType) {
            int lineNum = ctx->getStart()->getLine();
            cerr << endl
                 << "[ERROR] inconsistentTypes: different types for the same variable in Line " << lineNum << endl;
            exit(-1); // error
        }

        return inferredType;
    }

    any visitExpr(BParser::ExprContext *ctx) override {
        // cout << "visitExpr\n";
        if (ctx->expr().size() == 2) {
            enum Types leftResult = any_cast<Types>(visit(ctx->expr(0)));
            enum Types rightResult = any_cast<Types>(visit(ctx->expr(1)));
            if (leftResult == tyAUTO) {
                return rightResult;
            } else if (rightResult == tyAUTO) {
                return leftResult;
            } else if (leftResult != rightResult) {
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] inconsistentTypes: expr types are inconsistent in Line " << lineNum << endl;
                exit(-1); // error
            } else {
                return leftResult;
            }
        } else if (ctx->expr().size() == 3) {
            // enum Types leftResult = any_cast<Types>(visit(ctx->expr(0)));
            enum Types midResult = any_cast<Types>(visit(ctx->expr(1)));
            enum Types rightResult = any_cast<Types>(visit(ctx->expr(2)));
            // ?? 3항 연산자는 mid, right만 같으면 되는건가?
            if (midResult == tyAUTO) {
                return rightResult;
            } else if (rightResult == tyAUTO) {
                return midResult;
            } else if (midResult != rightResult) {
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] inconsistentTypes: expr types are inconsistent in Line " << lineNum << endl;
                exit(-1); // error
            } else {
                return midResult;
            }

            return visit(ctx->expr(0));
        }
        return visit(ctx->atom());
    }

    any visitName(BParser::NameContext *ctx) override {
        // cout << "visitName\n";
        string varName = ctx->getText();
        string funcName = curFuncName;
        SymbolTable *funcSymTab = symTabs[funcName];

        // varName이 존재하는 function scope 찾기
        while (true) {
            funcSymTab = symTabs[funcName];
            if (funcSymTab->symbolExists(varName)) {
                break; // find the var
            }

            size_t pos = funcName.rfind("_$");

            if (pos == std::string::npos) { // move to global scope
                funcName = _GlobalFuncName_;
                funcSymTab = symTabs[funcName];
                if (funcSymTab->symbolExists(varName)) {
                    break;
                } else {
                    int lineNum = ctx->getStart()->getLine();
                    cerr << endl
                         << "[ERROR] undefinedError : name is undefined in Line " << lineNum << " -- " << varName << endl;
                    exit(-1); // error
                }
            }

            funcName = funcName.substr(0, pos); // move to upper scope
        }

        return funcSymTab->getSymbolAttributes(varName).type;
    }

    any visitFuncinvocation(BParser::FuncinvocationContext *ctx) override {
        // cout << "visitFunctioninvocation\n";
        SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];
        string funcName = ctx->name()->getText();

        // treat MACRO
        if (!globalSymTab->symbolExists(funcName)) {
            return tyAUTO;
        }

        // function definition check
        if (!globalSymTab->symbolExists(funcName) || symTabs.count(funcName) == 0) {
            int lineNum = ctx->getStart()->getLine();
            cerr << endl
                 << "[ERROR] undefinedFunction : undefined function in Line " << lineNum << " -- " << funcName << endl;
            exit(-1); // error
        }
        struct SymbolAttributes funcSymbolAttributes = globalSymTab->getSymbolAttributes(funcName);
        vector<Types> funcRetArgTypes = funcSymbolAttributes.retArgTypes;
        SymbolTable *funcSymTab = symTabs[funcName];

        // argument number check
        int argc = funcRetArgTypes.size();
        int exprc = ctx->expr().size();
        if (argc - 1 != exprc) {
            int lineNum = ctx->getStart()->getLine();
            cerr << endl
                 << "[ERROR] inconsistentType : different number of parameters in Line " << lineNum << " -- " << funcName << endl;
            exit(-1); // error
        }

        // fix global symbol table - function symbol attributes
        for (int i = 0; i < ctx->expr().size(); i++) {
            enum Types curType = funcRetArgTypes[i + 1];
            enum Types inferredType = any_cast<Types>(visit(ctx->expr(i)));
            if (curType == tyAUTO) { // first invocation
                funcRetArgTypes[i + 1] = any_cast<Types>(inferredType);
            } else if (inferredType != tyAUTO && curType != inferredType) {
                cout << i + 1 << "th index" << endl;
                cout << "curType: " << mnemonicTypes[curType] << endl;
                cout << "inferredType: " << mnemonicTypes[inferredType] << endl;
                int lineNum = ctx->getStart()->getLine();
                cerr << endl
                     << "[ERROR] inconsistentTypes: different types for the same parameter in Line " << lineNum << " -- " << funcName << endl;
                exit(-1); // error
            }
        }
        funcSymbolAttributes.retArgTypes = funcRetArgTypes;
        globalSymTab->removeSymbol(funcName);
        globalSymTab->addSymbol(funcName, funcSymbolAttributes);

        return globalSymTab->getSymbolAttributes(funcName).retArgTypes[0];
    }

    any visitReturnstmt(BParser::ReturnstmtContext *ctx) override {
        // cout << "visitReturnstmt\n";
        SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];

        string funcName = curFuncName;
        size_t pos = funcName.find("_$");
        if (pos != std::string::npos) {
            funcName = funcName.substr(0, pos);
        }

        enum Types inferredType;
        if (ctx->expression()) {
            inferredType = any_cast<Types>(visit(ctx->expression()));
        } else {
            inferredType = tyVOID;
        }

        struct SymbolAttributes funcSymbolAttributes = globalSymTab->getSymbolAttributes(funcName);
        enum Types curType = funcSymbolAttributes.retArgTypes[0];

        if (curType == tyAUTO) { // first invocation
            funcSymbolAttributes.retArgTypes[0] = inferredType;
        } else if (inferredType != tyAUTO && curType != inferredType) {
            int lineNum = ctx->getStart()->getLine();
            cerr << endl
                 << "[ERROR] inconsistentTypes: function return type error in Line " << lineNum << " -- " << funcName << endl;
            exit(-1); // error
        }

        globalSymTab->removeSymbol(funcName);
        globalSymTab->addSymbol(funcName, funcSymbolAttributes);

        return nullptr;
    }

    any visitAtom(BParser::AtomContext *ctx) override {
        // cout << "visitAtom\n";
        if (ctx->name()) {
            return visit(ctx->name());
        }
        if (ctx->constant()) {
            return visit(ctx->constant());
        }
        if (ctx->expression()) {
            return visit(ctx->expression());
        }
        if (ctx->funcinvocation()) {
            return visit(ctx->funcinvocation());
        }
        cerr << "visitAtom Error" << endl;
        return nullptr;
    }

    any visitConstant(BParser::ConstantContext *ctx) override {
        if (ctx->INT())
            return tyINT;
        else if (ctx->REAL())
            return tyDOUBLE;
        else if (ctx->STRING())
            return tySTRING;
        else if (ctx->BOOL())
            return tyBOOL;
        else if (ctx->CHAR())
            return tyCHAR;

        cout << "[ERROR] unrecognizable constant is used for initialization: " << ctx->children[0]->getText() << endl;
        exit(-1);
        return nullptr;
    }
};

/*
 * STEP 3. print code
 */
class PrintTreeVisitor : public BBaseVisitor {
private:
    int scopeLevel;
    string curFuncName;
    int blockIndex = 0;

public:
    any visitProgram(BParser::ProgramContext *ctx) override {
        // Perform some actions when visiting the program
        for (int i = 0; i < ctx->children.size(); i++) {
            curFuncName = _GlobalFuncName_;
            scopeLevel = 0;
            visit(ctx->children[i]);
        }
        return nullptr;
    }

    any visitDirective(BParser::DirectiveContext *ctx) override {
        cout << ctx->SHARP_DIRECTIVE()->getText();
        cout << endl;
        return nullptr;
    }

    any visitDefinition(BParser::DefinitionContext *ctx) override {
        visit(ctx->children[0]);
        return nullptr;
    }

    any visitFuncdef(BParser::FuncdefContext *ctx) override {
        // Handle function definition
        blockIndex = 0;
        string functionName = ctx->name(0)->getText();

        SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];
        SymbolAttributes funcSymbolAttributes = globalSymTab->getSymbolAttributes(functionName);
        vector<Types> funcRetArgTypes = funcSymbolAttributes.retArgTypes;

        cout << mnemonicTypes[funcRetArgTypes[0]] << " " << functionName << "(";

        // You can retrieve and visit the parameter list using ctx->name(i)
        for (int i = 1; i < ctx->name().size(); i++) {
            if (i != 1)
                cout << ", ";
            cout << mnemonicTypes[funcRetArgTypes[i]] << " " << ctx->name(i)->getText();
        }
        cout << ")";

        // visit blockstmt
        curFuncName = functionName;
        scopeLevel = 0;
        visit(ctx->blockstmt());
        return nullptr;
    }

    any visitStatement(BParser::StatementContext *ctx) override {
        visit(ctx->children[0]);
        return nullptr;
    }

    any visitAutostmt(BParser::AutostmtContext *ctx) override {
        // You can retrieve the variable names and constants using ctx->name(i) and ctx->constant(i)
        SymbolTable *stab = symTabs[curFuncName];

        // cout << "auto ";
        for (int i = 0, j = 0; i < ctx->name().size(); i++) {
            // if (i != 0) cout << " ,";
            // cout << ctx->name(i)->getText();
            string varName = ctx->name(i)->getText();
            enum Types varType = stab->getSymbolAttributes(varName).type;

            cout << mnemonicTypes[varType] << " " << varName; // varType varName

            int idx_assn = 1 + i * 2 + j * 2 + 1; // auto name (= const)?, name (= const)?, ...
            if (ctx->children[idx_assn]->getText().compare("=") == 0) {
                if (ctx->constant(j)) {
                    cout << " = ";
                    visit(ctx->constant(j));
                    j++;
                }
            }
            cout << ";" << endl;
        }

        return nullptr;
    }

    any visitDeclstmt(BParser::DeclstmtContext *ctx) override {
        // Handle function declaration
        string functionName = ctx->name()->getText();

        SymbolTable *globalSymTab = symTabs[_GlobalFuncName_];
        SymbolAttributes funcSymbolAttributes = globalSymTab->getSymbolAttributes(functionName);
        vector<Types> funcRetArgTypes = funcSymbolAttributes.retArgTypes;

        cout << mnemonicTypes[funcRetArgTypes[0]] << " " << functionName << "(";

        // You can retrieve and visit the parameter type list
        for (int i = 1; i < ctx->AUTO().size(); i++) {
            if (i != 1)
                cout << ", ";
            cout << mnemonicTypes[funcRetArgTypes[i]] << " ";
        }
        cout << ");" << endl;
        return nullptr;
    }

    any visitBlockstmt(BParser::BlockstmtContext *ctx) override {
        // Perform some actions when visiting a block statement
        string funcName = curFuncName;
        scopeLevel++;
        int blockScope = scopeLevel;

        cout << "{" << endl;
        if (blockScope == 1) {
            for (auto stmt : ctx->statement()) {
                curFuncName = funcName;
                scopeLevel = blockScope;
                visit(stmt);
            }
        } else if (blockScope > 1) {
            blockIndex++;
            string curBlockName = funcName + "_$" + to_string(blockIndex);
            for (auto stmt : ctx->statement()) {
                curFuncName = curBlockName;
                scopeLevel = blockScope;
                visit(stmt);
            }
        }
        cout << "}" << endl;
        return nullptr;
    }

    any visitIfstmt(BParser::IfstmtContext *ctx) override {
        cout << "if (";
        visit(ctx->expr());
        cout << ") ";

        string funcName = curFuncName;
        int blockScope = scopeLevel;

        visit(ctx->statement(0));
        if (ctx->ELSE()) {
            cout << endl
                 << "else ";

            curFuncName = funcName;
            scopeLevel = blockScope;
            visit(ctx->statement(1));
        }
        return nullptr;
    }

    any visitWhilestmt(BParser::WhilestmtContext *ctx) override {
        cout << "while (";
        visit(ctx->expr());
        cout << ") ";
        visit(ctx->statement());
        return nullptr;
    }

    any visitExpressionstmt(BParser::ExpressionstmtContext *ctx) override {
        visit(ctx->expression());
        cout << ";" << endl;
        return nullptr;
    }

    any visitReturnstmt(BParser::ReturnstmtContext *ctx) override {
        cout << "return";
        if (ctx->expression()) {
            cout << " (";
            visit(ctx->expression());
            cout << ")";
        }
        cout << ";" << endl;
        return nullptr;
    }

    any visitNullstmt(BParser::NullstmtContext *ctx) override {
        cout << ";" << endl;
        return nullptr;
    }

    any visitExpr(BParser::ExprContext *ctx) override {
        // unary operator
        if (ctx->atom()) {
            if (ctx->PLUS())
                cout << "+";
            else if (ctx->MINUS())
                cout << "-";
            else if (ctx->NOT())
                cout << "!";
            visit(ctx->atom());
        }
        // binary operator
        else if (ctx->MUL() || ctx->DIV() || ctx->PLUS() || ctx->MINUS() ||
                 ctx->GT() || ctx->GTE() || ctx->LT() || ctx->LTE() || ctx->EQ() || ctx->NEQ() ||
                 ctx->AND() || ctx->OR()) {
            visit(ctx->expr(0));
            cout << " " << ctx->children[1]->getText() << " "; // print binary operator
            visit(ctx->expr(1));
        }
        // ternary operator
        else if (ctx->QUEST()) {
            visit(ctx->expr(0));
            cout << " ? ";
            visit(ctx->expr(1));
            cout << " : ";
            visit(ctx->expr(2));
        } else {
            int lineNum = ctx->getStart()->getLine();
            cerr << endl
                 << "[ERROR] visitExpr: unrecognized ops in Line " << lineNum << " --" << ctx->children[1]->getText() << endl;
            exit(-1); // error
        }
        return nullptr;
    }

    any visitAtom(BParser::AtomContext *ctx) override {
        if (ctx->expression()) { // ( expression )
            cout << "(";
            visit(ctx->expression());
            cout << ")";
        } else // name | constant | funcinvocation
            visit(ctx->children[0]);
        return nullptr;
    }

    any visitExpression(BParser::ExpressionContext *ctx) override {
        if (ctx->ASSN()) { // assignment
            visit(ctx->name());
            cout << " = ";
        }
        visit(ctx->expr());
        return nullptr;
    }

    any visitFuncinvocation(BParser::FuncinvocationContext *ctx) override {
        cout << ctx->name()->getText() << "(";
        for (int i = 0; i < ctx->expr().size(); i++) {
            if (i != 0)
                cout << ", ";
            visit(ctx->expr(i));
        }
        cout << ")";
        return nullptr;
    }

    any visitConstant(BParser::ConstantContext *ctx) override {
        cout << ctx->children[0]->getText();
        return nullptr;
    }

    any visitName(BParser::NameContext *ctx) override {
        cout << ctx->NAME()->getText();
        return nullptr;
    }
};

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        cerr << "[Usage] " << argv[0] << "  <input-file>\n";
        exit(0);
    }
    std::ifstream stream;
    stream.open(argv[1]);
    if (stream.fail()) {
        cerr << argv[1] << " : file open fail\n";
        exit(0);
    }

    // cout << "/*-- B2C ANTLR visitor --*/\n";

    ANTLRInputStream inputStream(stream);
    BLexer lexer(&inputStream);
    CommonTokenStream tokenStream(&lexer);
    BParser parser(&tokenStream);
    ParseTree *tree = parser.program();

    // STEP 1. visit parse tree and build symbol tables for functions (PA#1)
    cout << endl
         << "/*** STEP 1. BUILD SYM_TABS *************" << endl;
    SymbolTableVisitor SymtabTree;
    SymtabTree.visit(tree);
    cout << " ---    end of step 1       ------------*/" << endl;

    // STEP 2. visit parse tree and perform type inference for 'auto' typed variables and functions (PA#2)
    cout << endl
         << "/*** STEP 2. ANALYZE TYPES  *************" << endl;
    TypeAnalysisVisitor AnalyzeTree;
    AnalyzeTree.visit(tree);
    cout << " ---    end of step 2       ------------*/" << endl;

    // STEP 3. visit parse tree and print out C code with correct types
    cout << endl
         << "/*** STEP 3. TRANSFORM to C *************/" << endl;
    PrintTreeVisitor PrintTree;
    PrintTree.visit(tree);

    return 0;
}
