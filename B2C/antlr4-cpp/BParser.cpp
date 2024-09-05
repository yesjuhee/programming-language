
// Generated from B.g4 by ANTLR 4.13.1


#include "BVisitor.h"

#include "BParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BParserStaticData final {
  BParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BParserStaticData(const BParserStaticData&) = delete;
  BParserStaticData(BParserStaticData&&) = delete;
  BParserStaticData& operator=(const BParserStaticData&) = delete;
  BParserStaticData& operator=(BParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag bParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
BParserStaticData *bParserStaticData = nullptr;

void bParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (bParserStaticData != nullptr) {
    return;
  }
#else
  assert(bParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BParserStaticData>(
    std::vector<std::string>{
      "program", "directive", "definition", "autostmt", "declstmt", "funcdef", 
      "blockstmt", "statement", "ifstmt", "whilestmt", "expressionstmt", 
      "returnstmt", "nullstmt", "expr", "atom", "expression", "funcinvocation", 
      "constant", "name"
    },
    std::vector<std::string>{
      "", "','", "'('", "')'", "'{'", "'}'", "'auto'", "'+'", "'-'", "'*'", 
      "'/'", "'!'", "'>'", "'>='", "'<'", "'<='", "'=='", "'!='", "'&&'", 
      "'||'", "'\\u003F'", "':'", "';'", "'if'", "'else'", "'while'", "'return'", 
      "'='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "AUTO", "PLUS", "MINUS", "MUL", "DIV", "NOT", 
      "GT", "GTE", "LT", "LTE", "EQ", "NEQ", "AND", "OR", "QUEST", "COLON", 
      "SEMI", "IF", "ELSE", "WHILE", "RETURN", "ASSN", "BOOL", "NAME", "INT", 
      "REAL", "STRING", "CHAR", "SHARP_DIRECTIVE", "BLOCKCOMMENT", "LINECOMMENT", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,37,227,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,5,0,41,8,0,10,0,12,
  	0,44,9,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,3,2,53,8,2,1,3,1,3,1,3,1,3,3,3,59,
  	8,3,1,3,1,3,1,3,1,3,3,3,65,8,3,5,3,67,8,3,10,3,12,3,70,9,3,1,3,1,3,1,
  	4,1,4,1,4,1,4,1,4,1,4,5,4,80,8,4,10,4,12,4,83,9,4,3,4,85,8,4,1,4,1,4,
  	1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,98,8,5,10,5,12,5,101,9,5,3,5,
  	103,8,5,1,5,1,5,1,5,1,6,1,6,5,6,110,8,6,10,6,12,6,113,9,6,1,6,1,6,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,126,8,7,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,3,8,135,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,
  	11,1,11,1,11,3,11,152,8,11,1,11,1,11,1,12,1,12,1,13,1,13,3,13,160,8,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,5,13,188,
  	8,13,10,13,12,13,191,9,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,200,
  	8,14,1,15,1,15,1,15,3,15,205,8,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,
  	5,16,214,8,16,10,16,12,16,217,9,16,3,16,219,8,16,1,16,1,16,1,17,1,17,
  	1,18,1,18,1,18,0,1,26,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,0,6,2,0,7,8,11,11,1,0,9,10,1,0,7,8,1,0,12,15,1,0,16,17,2,0,28,28,
  	30,33,244,0,42,1,0,0,0,2,47,1,0,0,0,4,52,1,0,0,0,6,54,1,0,0,0,8,73,1,
  	0,0,0,10,89,1,0,0,0,12,107,1,0,0,0,14,125,1,0,0,0,16,127,1,0,0,0,18,136,
  	1,0,0,0,20,142,1,0,0,0,22,145,1,0,0,0,24,155,1,0,0,0,26,157,1,0,0,0,28,
  	199,1,0,0,0,30,204,1,0,0,0,32,208,1,0,0,0,34,222,1,0,0,0,36,224,1,0,0,
  	0,38,41,3,2,1,0,39,41,3,4,2,0,40,38,1,0,0,0,40,39,1,0,0,0,41,44,1,0,0,
  	0,42,40,1,0,0,0,42,43,1,0,0,0,43,45,1,0,0,0,44,42,1,0,0,0,45,46,5,0,0,
  	1,46,1,1,0,0,0,47,48,5,34,0,0,48,3,1,0,0,0,49,53,3,6,3,0,50,53,3,8,4,
  	0,51,53,3,10,5,0,52,49,1,0,0,0,52,50,1,0,0,0,52,51,1,0,0,0,53,5,1,0,0,
  	0,54,55,5,6,0,0,55,58,3,36,18,0,56,57,5,27,0,0,57,59,3,34,17,0,58,56,
  	1,0,0,0,58,59,1,0,0,0,59,68,1,0,0,0,60,61,5,1,0,0,61,64,3,36,18,0,62,
  	63,5,27,0,0,63,65,3,34,17,0,64,62,1,0,0,0,64,65,1,0,0,0,65,67,1,0,0,0,
  	66,60,1,0,0,0,67,70,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,71,1,0,0,0,
  	70,68,1,0,0,0,71,72,5,22,0,0,72,7,1,0,0,0,73,74,5,6,0,0,74,75,3,36,18,
  	0,75,84,5,2,0,0,76,81,5,6,0,0,77,78,5,1,0,0,78,80,5,6,0,0,79,77,1,0,0,
  	0,80,83,1,0,0,0,81,79,1,0,0,0,81,82,1,0,0,0,82,85,1,0,0,0,83,81,1,0,0,
  	0,84,76,1,0,0,0,84,85,1,0,0,0,85,86,1,0,0,0,86,87,5,3,0,0,87,88,5,22,
  	0,0,88,9,1,0,0,0,89,90,5,6,0,0,90,91,3,36,18,0,91,102,5,2,0,0,92,93,5,
  	6,0,0,93,99,3,36,18,0,94,95,5,1,0,0,95,96,5,6,0,0,96,98,3,36,18,0,97,
  	94,1,0,0,0,98,101,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,103,1,0,0,
  	0,101,99,1,0,0,0,102,92,1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,105,
  	5,3,0,0,105,106,3,12,6,0,106,11,1,0,0,0,107,111,5,4,0,0,108,110,3,14,
  	7,0,109,108,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,
  	114,1,0,0,0,113,111,1,0,0,0,114,115,5,5,0,0,115,13,1,0,0,0,116,126,3,
  	6,3,0,117,126,3,8,4,0,118,126,3,12,6,0,119,126,3,16,8,0,120,126,3,18,
  	9,0,121,126,3,20,10,0,122,126,3,22,11,0,123,126,3,24,12,0,124,126,3,2,
  	1,0,125,116,1,0,0,0,125,117,1,0,0,0,125,118,1,0,0,0,125,119,1,0,0,0,125,
  	120,1,0,0,0,125,121,1,0,0,0,125,122,1,0,0,0,125,123,1,0,0,0,125,124,1,
  	0,0,0,126,15,1,0,0,0,127,128,5,23,0,0,128,129,5,2,0,0,129,130,3,26,13,
  	0,130,131,5,3,0,0,131,134,3,14,7,0,132,133,5,24,0,0,133,135,3,14,7,0,
  	134,132,1,0,0,0,134,135,1,0,0,0,135,17,1,0,0,0,136,137,5,25,0,0,137,138,
  	5,2,0,0,138,139,3,26,13,0,139,140,5,3,0,0,140,141,3,14,7,0,141,19,1,0,
  	0,0,142,143,3,30,15,0,143,144,5,22,0,0,144,21,1,0,0,0,145,151,5,26,0,
  	0,146,152,3,30,15,0,147,148,5,2,0,0,148,149,3,30,15,0,149,150,5,3,0,0,
  	150,152,1,0,0,0,151,146,1,0,0,0,151,147,1,0,0,0,151,152,1,0,0,0,152,153,
  	1,0,0,0,153,154,5,22,0,0,154,23,1,0,0,0,155,156,5,22,0,0,156,25,1,0,0,
  	0,157,159,6,13,-1,0,158,160,7,0,0,0,159,158,1,0,0,0,159,160,1,0,0,0,160,
  	161,1,0,0,0,161,162,3,28,14,0,162,189,1,0,0,0,163,164,10,7,0,0,164,165,
  	7,1,0,0,165,188,3,26,13,8,166,167,10,6,0,0,167,168,7,2,0,0,168,188,3,
  	26,13,7,169,170,10,5,0,0,170,171,7,3,0,0,171,188,3,26,13,6,172,173,10,
  	4,0,0,173,174,7,4,0,0,174,188,3,26,13,5,175,176,10,3,0,0,176,177,5,18,
  	0,0,177,188,3,26,13,4,178,179,10,2,0,0,179,180,5,19,0,0,180,188,3,26,
  	13,3,181,182,10,1,0,0,182,183,5,20,0,0,183,184,3,26,13,0,184,185,5,21,
  	0,0,185,186,3,26,13,2,186,188,1,0,0,0,187,163,1,0,0,0,187,166,1,0,0,0,
  	187,169,1,0,0,0,187,172,1,0,0,0,187,175,1,0,0,0,187,178,1,0,0,0,187,181,
  	1,0,0,0,188,191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,27,1,0,0,
  	0,191,189,1,0,0,0,192,200,3,36,18,0,193,200,3,34,17,0,194,195,5,2,0,0,
  	195,196,3,30,15,0,196,197,5,3,0,0,197,200,1,0,0,0,198,200,3,32,16,0,199,
  	192,1,0,0,0,199,193,1,0,0,0,199,194,1,0,0,0,199,198,1,0,0,0,200,29,1,
  	0,0,0,201,202,3,36,18,0,202,203,5,27,0,0,203,205,1,0,0,0,204,201,1,0,
  	0,0,204,205,1,0,0,0,205,206,1,0,0,0,206,207,3,26,13,0,207,31,1,0,0,0,
  	208,209,3,36,18,0,209,218,5,2,0,0,210,215,3,26,13,0,211,212,5,1,0,0,212,
  	214,3,26,13,0,213,211,1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,215,216,
  	1,0,0,0,216,219,1,0,0,0,217,215,1,0,0,0,218,210,1,0,0,0,218,219,1,0,0,
  	0,219,220,1,0,0,0,220,221,5,3,0,0,221,33,1,0,0,0,222,223,7,5,0,0,223,
  	35,1,0,0,0,224,225,5,29,0,0,225,37,1,0,0,0,21,40,42,52,58,64,68,81,84,
  	99,102,111,125,134,151,159,187,189,199,204,215,218
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  bParserStaticData = staticData.release();
}

}

BParser::BParser(TokenStream *input) : BParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BParser::BParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *bParserStaticData->atn, bParserStaticData->decisionToDFA, bParserStaticData->sharedContextCache, options);
}

BParser::~BParser() {
  delete _interpreter;
}

const atn::ATN& BParser::getATN() const {
  return *bParserStaticData->atn;
}

std::string BParser::getGrammarFileName() const {
  return "B.g4";
}

const std::vector<std::string>& BParser::getRuleNames() const {
  return bParserStaticData->ruleNames;
}

const dfa::Vocabulary& BParser::getVocabulary() const {
  return bParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BParser::getSerializedATN() const {
  return bParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

BParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::ProgramContext::EOF() {
  return getToken(BParser::EOF, 0);
}

std::vector<BParser::DirectiveContext *> BParser::ProgramContext::directive() {
  return getRuleContexts<BParser::DirectiveContext>();
}

BParser::DirectiveContext* BParser::ProgramContext::directive(size_t i) {
  return getRuleContext<BParser::DirectiveContext>(i);
}

std::vector<BParser::DefinitionContext *> BParser::ProgramContext::definition() {
  return getRuleContexts<BParser::DefinitionContext>();
}

BParser::DefinitionContext* BParser::ProgramContext::definition(size_t i) {
  return getRuleContext<BParser::DefinitionContext>(i);
}


size_t BParser::ProgramContext::getRuleIndex() const {
  return BParser::RuleProgram;
}


std::any BParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BParser::ProgramContext* BParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BParser::AUTO

    || _la == BParser::SHARP_DIRECTIVE) {
      setState(40);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case BParser::SHARP_DIRECTIVE: {
          setState(38);
          directive();
          break;
        }

        case BParser::AUTO: {
          setState(39);
          definition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(44);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(45);
    match(BParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectiveContext ------------------------------------------------------------------

BParser::DirectiveContext::DirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::DirectiveContext::SHARP_DIRECTIVE() {
  return getToken(BParser::SHARP_DIRECTIVE, 0);
}


size_t BParser::DirectiveContext::getRuleIndex() const {
  return BParser::RuleDirective;
}


std::any BParser::DirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitDirective(this);
  else
    return visitor->visitChildren(this);
}

BParser::DirectiveContext* BParser::directive() {
  DirectiveContext *_localctx = _tracker.createInstance<DirectiveContext>(_ctx, getState());
  enterRule(_localctx, 2, BParser::RuleDirective);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(BParser::SHARP_DIRECTIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

BParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::AutostmtContext* BParser::DefinitionContext::autostmt() {
  return getRuleContext<BParser::AutostmtContext>(0);
}

BParser::DeclstmtContext* BParser::DefinitionContext::declstmt() {
  return getRuleContext<BParser::DeclstmtContext>(0);
}

BParser::FuncdefContext* BParser::DefinitionContext::funcdef() {
  return getRuleContext<BParser::FuncdefContext>(0);
}


size_t BParser::DefinitionContext::getRuleIndex() const {
  return BParser::RuleDefinition;
}


std::any BParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

BParser::DefinitionContext* BParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 4, BParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(52);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(49);
      autostmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(50);
      declstmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(51);
      funcdef();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AutostmtContext ------------------------------------------------------------------

BParser::AutostmtContext::AutostmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::AutostmtContext::AUTO() {
  return getToken(BParser::AUTO, 0);
}

std::vector<BParser::NameContext *> BParser::AutostmtContext::name() {
  return getRuleContexts<BParser::NameContext>();
}

BParser::NameContext* BParser::AutostmtContext::name(size_t i) {
  return getRuleContext<BParser::NameContext>(i);
}

tree::TerminalNode* BParser::AutostmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> BParser::AutostmtContext::ASSN() {
  return getTokens(BParser::ASSN);
}

tree::TerminalNode* BParser::AutostmtContext::ASSN(size_t i) {
  return getToken(BParser::ASSN, i);
}

std::vector<BParser::ConstantContext *> BParser::AutostmtContext::constant() {
  return getRuleContexts<BParser::ConstantContext>();
}

BParser::ConstantContext* BParser::AutostmtContext::constant(size_t i) {
  return getRuleContext<BParser::ConstantContext>(i);
}


size_t BParser::AutostmtContext::getRuleIndex() const {
  return BParser::RuleAutostmt;
}


std::any BParser::AutostmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitAutostmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::AutostmtContext* BParser::autostmt() {
  AutostmtContext *_localctx = _tracker.createInstance<AutostmtContext>(_ctx, getState());
  enterRule(_localctx, 6, BParser::RuleAutostmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(BParser::AUTO);
    setState(55);
    name();
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BParser::ASSN) {
      setState(56);
      match(BParser::ASSN);
      setState(57);
      constant();
    }
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BParser::T__0) {
      setState(60);
      match(BParser::T__0);
      setState(61);
      name();
      setState(64);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == BParser::ASSN) {
        setState(62);
        match(BParser::ASSN);
        setState(63);
        constant();
      }
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclstmtContext ------------------------------------------------------------------

BParser::DeclstmtContext::DeclstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BParser::DeclstmtContext::AUTO() {
  return getTokens(BParser::AUTO);
}

tree::TerminalNode* BParser::DeclstmtContext::AUTO(size_t i) {
  return getToken(BParser::AUTO, i);
}

BParser::NameContext* BParser::DeclstmtContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

tree::TerminalNode* BParser::DeclstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}


size_t BParser::DeclstmtContext::getRuleIndex() const {
  return BParser::RuleDeclstmt;
}


std::any BParser::DeclstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitDeclstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::DeclstmtContext* BParser::declstmt() {
  DeclstmtContext *_localctx = _tracker.createInstance<DeclstmtContext>(_ctx, getState());
  enterRule(_localctx, 8, BParser::RuleDeclstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(BParser::AUTO);
    setState(74);
    name();
    setState(75);
    match(BParser::T__1);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BParser::AUTO) {
      setState(76);
      match(BParser::AUTO);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BParser::T__0) {
        setState(77);
        match(BParser::T__0);
        setState(78);
        match(BParser::AUTO);
        setState(83);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(86);
    match(BParser::T__2);
    setState(87);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncdefContext ------------------------------------------------------------------

BParser::FuncdefContext::FuncdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BParser::FuncdefContext::AUTO() {
  return getTokens(BParser::AUTO);
}

tree::TerminalNode* BParser::FuncdefContext::AUTO(size_t i) {
  return getToken(BParser::AUTO, i);
}

std::vector<BParser::NameContext *> BParser::FuncdefContext::name() {
  return getRuleContexts<BParser::NameContext>();
}

BParser::NameContext* BParser::FuncdefContext::name(size_t i) {
  return getRuleContext<BParser::NameContext>(i);
}

BParser::BlockstmtContext* BParser::FuncdefContext::blockstmt() {
  return getRuleContext<BParser::BlockstmtContext>(0);
}


size_t BParser::FuncdefContext::getRuleIndex() const {
  return BParser::RuleFuncdef;
}


std::any BParser::FuncdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitFuncdef(this);
  else
    return visitor->visitChildren(this);
}

BParser::FuncdefContext* BParser::funcdef() {
  FuncdefContext *_localctx = _tracker.createInstance<FuncdefContext>(_ctx, getState());
  enterRule(_localctx, 10, BParser::RuleFuncdef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(BParser::AUTO);
    setState(90);
    name();
    setState(91);
    match(BParser::T__1);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BParser::AUTO) {
      setState(92);
      match(BParser::AUTO);
      setState(93);
      name();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BParser::T__0) {
        setState(94);
        match(BParser::T__0);
        setState(95);
        match(BParser::AUTO);
        setState(96);
        name();
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(104);
    match(BParser::T__2);
    setState(105);
    blockstmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockstmtContext ------------------------------------------------------------------

BParser::BlockstmtContext::BlockstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BParser::StatementContext *> BParser::BlockstmtContext::statement() {
  return getRuleContexts<BParser::StatementContext>();
}

BParser::StatementContext* BParser::BlockstmtContext::statement(size_t i) {
  return getRuleContext<BParser::StatementContext>(i);
}


size_t BParser::BlockstmtContext::getRuleIndex() const {
  return BParser::RuleBlockstmt;
}


std::any BParser::BlockstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitBlockstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::BlockstmtContext* BParser::blockstmt() {
  BlockstmtContext *_localctx = _tracker.createInstance<BlockstmtContext>(_ctx, getState());
  enterRule(_localctx, 12, BParser::RuleBlockstmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(BParser::T__3);
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34204551636) != 0)) {
      setState(108);
      statement();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(114);
    match(BParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::AutostmtContext* BParser::StatementContext::autostmt() {
  return getRuleContext<BParser::AutostmtContext>(0);
}

BParser::DeclstmtContext* BParser::StatementContext::declstmt() {
  return getRuleContext<BParser::DeclstmtContext>(0);
}

BParser::BlockstmtContext* BParser::StatementContext::blockstmt() {
  return getRuleContext<BParser::BlockstmtContext>(0);
}

BParser::IfstmtContext* BParser::StatementContext::ifstmt() {
  return getRuleContext<BParser::IfstmtContext>(0);
}

BParser::WhilestmtContext* BParser::StatementContext::whilestmt() {
  return getRuleContext<BParser::WhilestmtContext>(0);
}

BParser::ExpressionstmtContext* BParser::StatementContext::expressionstmt() {
  return getRuleContext<BParser::ExpressionstmtContext>(0);
}

BParser::ReturnstmtContext* BParser::StatementContext::returnstmt() {
  return getRuleContext<BParser::ReturnstmtContext>(0);
}

BParser::NullstmtContext* BParser::StatementContext::nullstmt() {
  return getRuleContext<BParser::NullstmtContext>(0);
}

BParser::DirectiveContext* BParser::StatementContext::directive() {
  return getRuleContext<BParser::DirectiveContext>(0);
}


size_t BParser::StatementContext::getRuleIndex() const {
  return BParser::RuleStatement;
}


std::any BParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BParser::StatementContext* BParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, BParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(116);
      autostmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(117);
      declstmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(118);
      blockstmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(119);
      ifstmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(120);
      whilestmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(121);
      expressionstmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(122);
      returnstmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(123);
      nullstmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(124);
      directive();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstmtContext ------------------------------------------------------------------

BParser::IfstmtContext::IfstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::IfstmtContext::IF() {
  return getToken(BParser::IF, 0);
}

BParser::ExprContext* BParser::IfstmtContext::expr() {
  return getRuleContext<BParser::ExprContext>(0);
}

std::vector<BParser::StatementContext *> BParser::IfstmtContext::statement() {
  return getRuleContexts<BParser::StatementContext>();
}

BParser::StatementContext* BParser::IfstmtContext::statement(size_t i) {
  return getRuleContext<BParser::StatementContext>(i);
}

tree::TerminalNode* BParser::IfstmtContext::ELSE() {
  return getToken(BParser::ELSE, 0);
}


size_t BParser::IfstmtContext::getRuleIndex() const {
  return BParser::RuleIfstmt;
}


std::any BParser::IfstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitIfstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::IfstmtContext* BParser::ifstmt() {
  IfstmtContext *_localctx = _tracker.createInstance<IfstmtContext>(_ctx, getState());
  enterRule(_localctx, 16, BParser::RuleIfstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(BParser::IF);
    setState(128);
    match(BParser::T__1);
    setState(129);
    expr(0);
    setState(130);
    match(BParser::T__2);
    setState(131);
    statement();
    setState(134);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(132);
      match(BParser::ELSE);
      setState(133);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhilestmtContext ------------------------------------------------------------------

BParser::WhilestmtContext::WhilestmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::WhilestmtContext::WHILE() {
  return getToken(BParser::WHILE, 0);
}

BParser::ExprContext* BParser::WhilestmtContext::expr() {
  return getRuleContext<BParser::ExprContext>(0);
}

BParser::StatementContext* BParser::WhilestmtContext::statement() {
  return getRuleContext<BParser::StatementContext>(0);
}


size_t BParser::WhilestmtContext::getRuleIndex() const {
  return BParser::RuleWhilestmt;
}


std::any BParser::WhilestmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitWhilestmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::WhilestmtContext* BParser::whilestmt() {
  WhilestmtContext *_localctx = _tracker.createInstance<WhilestmtContext>(_ctx, getState());
  enterRule(_localctx, 18, BParser::RuleWhilestmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(BParser::WHILE);
    setState(137);
    match(BParser::T__1);
    setState(138);
    expr(0);
    setState(139);
    match(BParser::T__2);
    setState(140);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionstmtContext ------------------------------------------------------------------

BParser::ExpressionstmtContext::ExpressionstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::ExpressionContext* BParser::ExpressionstmtContext::expression() {
  return getRuleContext<BParser::ExpressionContext>(0);
}

tree::TerminalNode* BParser::ExpressionstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}


size_t BParser::ExpressionstmtContext::getRuleIndex() const {
  return BParser::RuleExpressionstmt;
}


std::any BParser::ExpressionstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitExpressionstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::ExpressionstmtContext* BParser::expressionstmt() {
  ExpressionstmtContext *_localctx = _tracker.createInstance<ExpressionstmtContext>(_ctx, getState());
  enterRule(_localctx, 20, BParser::RuleExpressionstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    expression();
    setState(143);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnstmtContext ------------------------------------------------------------------

BParser::ReturnstmtContext::ReturnstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::ReturnstmtContext::RETURN() {
  return getToken(BParser::RETURN, 0);
}

tree::TerminalNode* BParser::ReturnstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}

BParser::ExpressionContext* BParser::ReturnstmtContext::expression() {
  return getRuleContext<BParser::ExpressionContext>(0);
}


size_t BParser::ReturnstmtContext::getRuleIndex() const {
  return BParser::RuleReturnstmt;
}


std::any BParser::ReturnstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitReturnstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::ReturnstmtContext* BParser::returnstmt() {
  ReturnstmtContext *_localctx = _tracker.createInstance<ReturnstmtContext>(_ctx, getState());
  enterRule(_localctx, 22, BParser::RuleReturnstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(BParser::RETURN);
    setState(151);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(146);
      expression();
      break;
    }

    case 2: {
      setState(147);
      match(BParser::T__1);
      setState(148);
      expression();
      setState(149);
      match(BParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(153);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NullstmtContext ------------------------------------------------------------------

BParser::NullstmtContext::NullstmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::NullstmtContext::SEMI() {
  return getToken(BParser::SEMI, 0);
}


size_t BParser::NullstmtContext::getRuleIndex() const {
  return BParser::RuleNullstmt;
}


std::any BParser::NullstmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitNullstmt(this);
  else
    return visitor->visitChildren(this);
}

BParser::NullstmtContext* BParser::nullstmt() {
  NullstmtContext *_localctx = _tracker.createInstance<NullstmtContext>(_ctx, getState());
  enterRule(_localctx, 24, BParser::RuleNullstmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(BParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

BParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::AtomContext* BParser::ExprContext::atom() {
  return getRuleContext<BParser::AtomContext>(0);
}

tree::TerminalNode* BParser::ExprContext::PLUS() {
  return getToken(BParser::PLUS, 0);
}

tree::TerminalNode* BParser::ExprContext::MINUS() {
  return getToken(BParser::MINUS, 0);
}

tree::TerminalNode* BParser::ExprContext::NOT() {
  return getToken(BParser::NOT, 0);
}

std::vector<BParser::ExprContext *> BParser::ExprContext::expr() {
  return getRuleContexts<BParser::ExprContext>();
}

BParser::ExprContext* BParser::ExprContext::expr(size_t i) {
  return getRuleContext<BParser::ExprContext>(i);
}

tree::TerminalNode* BParser::ExprContext::MUL() {
  return getToken(BParser::MUL, 0);
}

tree::TerminalNode* BParser::ExprContext::DIV() {
  return getToken(BParser::DIV, 0);
}

tree::TerminalNode* BParser::ExprContext::GT() {
  return getToken(BParser::GT, 0);
}

tree::TerminalNode* BParser::ExprContext::GTE() {
  return getToken(BParser::GTE, 0);
}

tree::TerminalNode* BParser::ExprContext::LT() {
  return getToken(BParser::LT, 0);
}

tree::TerminalNode* BParser::ExprContext::LTE() {
  return getToken(BParser::LTE, 0);
}

tree::TerminalNode* BParser::ExprContext::EQ() {
  return getToken(BParser::EQ, 0);
}

tree::TerminalNode* BParser::ExprContext::NEQ() {
  return getToken(BParser::NEQ, 0);
}

tree::TerminalNode* BParser::ExprContext::AND() {
  return getToken(BParser::AND, 0);
}

tree::TerminalNode* BParser::ExprContext::OR() {
  return getToken(BParser::OR, 0);
}

tree::TerminalNode* BParser::ExprContext::QUEST() {
  return getToken(BParser::QUEST, 0);
}

tree::TerminalNode* BParser::ExprContext::COLON() {
  return getToken(BParser::COLON, 0);
}


size_t BParser::ExprContext::getRuleIndex() const {
  return BParser::RuleExpr;
}


std::any BParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


BParser::ExprContext* BParser::expr() {
   return expr(0);
}

BParser::ExprContext* BParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  BParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, BParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2432) != 0)) {
      setState(158);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 2432) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(161);
    atom();
    _ctx->stop = _input->LT(-1);
    setState(189);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(187);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(163);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(164);
          _la = _input->LA(1);
          if (!(_la == BParser::MUL

          || _la == BParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(165);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(167);
          _la = _input->LA(1);
          if (!(_la == BParser::PLUS

          || _la == BParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(168);
          expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(169);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(170);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 61440) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(171);
          expr(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(172);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(173);
          _la = _input->LA(1);
          if (!(_la == BParser::EQ

          || _la == BParser::NEQ)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(174);
          expr(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(175);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(176);
          match(BParser::AND);
          setState(177);
          expr(4);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(178);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(179);
          match(BParser::OR);
          setState(180);
          expr(3);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(181);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(182);
          match(BParser::QUEST);
          setState(183);
          expr(0);
          setState(184);
          match(BParser::COLON);
          setState(185);
          expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(191);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

BParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::NameContext* BParser::AtomContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

BParser::ConstantContext* BParser::AtomContext::constant() {
  return getRuleContext<BParser::ConstantContext>(0);
}

BParser::ExpressionContext* BParser::AtomContext::expression() {
  return getRuleContext<BParser::ExpressionContext>(0);
}

BParser::FuncinvocationContext* BParser::AtomContext::funcinvocation() {
  return getRuleContext<BParser::FuncinvocationContext>(0);
}


size_t BParser::AtomContext::getRuleIndex() const {
  return BParser::RuleAtom;
}


std::any BParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}

BParser::AtomContext* BParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 28, BParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(193);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(194);
      match(BParser::T__1);
      setState(195);
      expression();
      setState(196);
      match(BParser::T__2);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(198);
      funcinvocation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

BParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::ExprContext* BParser::ExpressionContext::expr() {
  return getRuleContext<BParser::ExprContext>(0);
}

BParser::NameContext* BParser::ExpressionContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

tree::TerminalNode* BParser::ExpressionContext::ASSN() {
  return getToken(BParser::ASSN, 0);
}


size_t BParser::ExpressionContext::getRuleIndex() const {
  return BParser::RuleExpression;
}


std::any BParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

BParser::ExpressionContext* BParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, BParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(201);
      name();
      setState(202);
      match(BParser::ASSN);
      break;
    }

    default:
      break;
    }
    setState(206);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncinvocationContext ------------------------------------------------------------------

BParser::FuncinvocationContext::FuncinvocationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BParser::NameContext* BParser::FuncinvocationContext::name() {
  return getRuleContext<BParser::NameContext>(0);
}

std::vector<BParser::ExprContext *> BParser::FuncinvocationContext::expr() {
  return getRuleContexts<BParser::ExprContext>();
}

BParser::ExprContext* BParser::FuncinvocationContext::expr(size_t i) {
  return getRuleContext<BParser::ExprContext>(i);
}


size_t BParser::FuncinvocationContext::getRuleIndex() const {
  return BParser::RuleFuncinvocation;
}


std::any BParser::FuncinvocationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitFuncinvocation(this);
  else
    return visitor->visitChildren(this);
}

BParser::FuncinvocationContext* BParser::funcinvocation() {
  FuncinvocationContext *_localctx = _tracker.createInstance<FuncinvocationContext>(_ctx, getState());
  enterRule(_localctx, 32, BParser::RuleFuncinvocation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    name();
    setState(209);
    match(BParser::T__1);
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16911436164) != 0)) {
      setState(210);
      expr(0);
      setState(215);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BParser::T__0) {
        setState(211);
        match(BParser::T__0);
        setState(212);
        expr(0);
        setState(217);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(220);
    match(BParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

BParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::ConstantContext::INT() {
  return getToken(BParser::INT, 0);
}

tree::TerminalNode* BParser::ConstantContext::REAL() {
  return getToken(BParser::REAL, 0);
}

tree::TerminalNode* BParser::ConstantContext::STRING() {
  return getToken(BParser::STRING, 0);
}

tree::TerminalNode* BParser::ConstantContext::BOOL() {
  return getToken(BParser::BOOL, 0);
}

tree::TerminalNode* BParser::ConstantContext::CHAR() {
  return getToken(BParser::CHAR, 0);
}


size_t BParser::ConstantContext::getRuleIndex() const {
  return BParser::RuleConstant;
}


std::any BParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

BParser::ConstantContext* BParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 34, BParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16374562816) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

BParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BParser::NameContext::NAME() {
  return getToken(BParser::NAME, 0);
}


size_t BParser::NameContext::getRuleIndex() const {
  return BParser::RuleName;
}


std::any BParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

BParser::NameContext* BParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 36, BParser::RuleName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    match(BParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void BParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  bParserInitialize();
#else
  ::antlr4::internal::call_once(bParserOnceFlag, bParserInitialize);
#endif
}
