// Generated from B.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link BParser}.
 */
public interface BListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link BParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(BParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(BParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#directive}.
	 * @param ctx the parse tree
	 */
	void enterDirective(BParser.DirectiveContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#directive}.
	 * @param ctx the parse tree
	 */
	void exitDirective(BParser.DirectiveContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#definition}.
	 * @param ctx the parse tree
	 */
	void enterDefinition(BParser.DefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#definition}.
	 * @param ctx the parse tree
	 */
	void exitDefinition(BParser.DefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#autostmt}.
	 * @param ctx the parse tree
	 */
	void enterAutostmt(BParser.AutostmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#autostmt}.
	 * @param ctx the parse tree
	 */
	void exitAutostmt(BParser.AutostmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#declstmt}.
	 * @param ctx the parse tree
	 */
	void enterDeclstmt(BParser.DeclstmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#declstmt}.
	 * @param ctx the parse tree
	 */
	void exitDeclstmt(BParser.DeclstmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#funcdef}.
	 * @param ctx the parse tree
	 */
	void enterFuncdef(BParser.FuncdefContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#funcdef}.
	 * @param ctx the parse tree
	 */
	void exitFuncdef(BParser.FuncdefContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#blockstmt}.
	 * @param ctx the parse tree
	 */
	void enterBlockstmt(BParser.BlockstmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#blockstmt}.
	 * @param ctx the parse tree
	 */
	void exitBlockstmt(BParser.BlockstmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(BParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(BParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#ifstmt}.
	 * @param ctx the parse tree
	 */
	void enterIfstmt(BParser.IfstmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#ifstmt}.
	 * @param ctx the parse tree
	 */
	void exitIfstmt(BParser.IfstmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#whilestmt}.
	 * @param ctx the parse tree
	 */
	void enterWhilestmt(BParser.WhilestmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#whilestmt}.
	 * @param ctx the parse tree
	 */
	void exitWhilestmt(BParser.WhilestmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#expressionstmt}.
	 * @param ctx the parse tree
	 */
	void enterExpressionstmt(BParser.ExpressionstmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#expressionstmt}.
	 * @param ctx the parse tree
	 */
	void exitExpressionstmt(BParser.ExpressionstmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#returnstmt}.
	 * @param ctx the parse tree
	 */
	void enterReturnstmt(BParser.ReturnstmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#returnstmt}.
	 * @param ctx the parse tree
	 */
	void exitReturnstmt(BParser.ReturnstmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#nullstmt}.
	 * @param ctx the parse tree
	 */
	void enterNullstmt(BParser.NullstmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#nullstmt}.
	 * @param ctx the parse tree
	 */
	void exitNullstmt(BParser.NullstmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(BParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(BParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#atom}.
	 * @param ctx the parse tree
	 */
	void enterAtom(BParser.AtomContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#atom}.
	 * @param ctx the parse tree
	 */
	void exitAtom(BParser.AtomContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(BParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(BParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#funcinvocation}.
	 * @param ctx the parse tree
	 */
	void enterFuncinvocation(BParser.FuncinvocationContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#funcinvocation}.
	 * @param ctx the parse tree
	 */
	void exitFuncinvocation(BParser.FuncinvocationContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#constant}.
	 * @param ctx the parse tree
	 */
	void enterConstant(BParser.ConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#constant}.
	 * @param ctx the parse tree
	 */
	void exitConstant(BParser.ConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link BParser#name}.
	 * @param ctx the parse tree
	 */
	void enterName(BParser.NameContext ctx);
	/**
	 * Exit a parse tree produced by {@link BParser#name}.
	 * @param ctx the parse tree
	 */
	void exitName(BParser.NameContext ctx);
}