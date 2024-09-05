// Generated from /home/nojuhee/ubuntu-backup/programming-language/B2C/B.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class BParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, AUTO=6, PLUS=7, MINUS=8, MUL=9, 
		DIV=10, NOT=11, GT=12, GTE=13, LT=14, LTE=15, EQ=16, NEQ=17, AND=18, OR=19, 
		QUEST=20, COLON=21, SEMI=22, IF=23, ELSE=24, WHILE=25, RETURN=26, ASSN=27, 
		BOOL=28, NAME=29, INT=30, REAL=31, STRING=32, CHAR=33, SHARP_DIRECTIVE=34, 
		BLOCKCOMMENT=35, LINECOMMENT=36, WS=37;
	public static final int
		RULE_program = 0, RULE_directive = 1, RULE_definition = 2, RULE_autostmt = 3, 
		RULE_declstmt = 4, RULE_funcdef = 5, RULE_blockstmt = 6, RULE_statement = 7, 
		RULE_ifstmt = 8, RULE_whilestmt = 9, RULE_expressionstmt = 10, RULE_returnstmt = 11, 
		RULE_nullstmt = 12, RULE_expr = 13, RULE_atom = 14, RULE_expression = 15, 
		RULE_funcinvocation = 16, RULE_constant = 17, RULE_name = 18;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "directive", "definition", "autostmt", "declstmt", "funcdef", 
			"blockstmt", "statement", "ifstmt", "whilestmt", "expressionstmt", "returnstmt", 
			"nullstmt", "expr", "atom", "expression", "funcinvocation", "constant", 
			"name"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "','", "'('", "')'", "'{'", "'}'", "'auto'", "'+'", "'-'", "'*'", 
			"'/'", "'!'", "'>'", "'>='", "'<'", "'<='", "'=='", "'!='", "'&&'", "'||'", 
			"'?'", "':'", "';'", "'if'", "'else'", "'while'", "'return'", "'='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, "AUTO", "PLUS", "MINUS", "MUL", "DIV", 
			"NOT", "GT", "GTE", "LT", "LTE", "EQ", "NEQ", "AND", "OR", "QUEST", "COLON", 
			"SEMI", "IF", "ELSE", "WHILE", "RETURN", "ASSN", "BOOL", "NAME", "INT", 
			"REAL", "STRING", "CHAR", "SHARP_DIRECTIVE", "BLOCKCOMMENT", "LINECOMMENT", 
			"WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "B.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public BParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(BParser.EOF, 0); }
		public List<DirectiveContext> directive() {
			return getRuleContexts(DirectiveContext.class);
		}
		public DirectiveContext directive(int i) {
			return getRuleContext(DirectiveContext.class,i);
		}
		public List<DefinitionContext> definition() {
			return getRuleContexts(DefinitionContext.class);
		}
		public DefinitionContext definition(int i) {
			return getRuleContext(DefinitionContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==AUTO || _la==SHARP_DIRECTIVE) {
				{
				setState(40);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case SHARP_DIRECTIVE:
					{
					setState(38);
					directive();
					}
					break;
				case AUTO:
					{
					setState(39);
					definition();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(44);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(45);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DirectiveContext extends ParserRuleContext {
		public TerminalNode SHARP_DIRECTIVE() { return getToken(BParser.SHARP_DIRECTIVE, 0); }
		public DirectiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_directive; }
	}

	public final DirectiveContext directive() throws RecognitionException {
		DirectiveContext _localctx = new DirectiveContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_directive);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(47);
			match(SHARP_DIRECTIVE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DefinitionContext extends ParserRuleContext {
		public AutostmtContext autostmt() {
			return getRuleContext(AutostmtContext.class,0);
		}
		public DeclstmtContext declstmt() {
			return getRuleContext(DeclstmtContext.class,0);
		}
		public FuncdefContext funcdef() {
			return getRuleContext(FuncdefContext.class,0);
		}
		public DefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_definition; }
	}

	public final DefinitionContext definition() throws RecognitionException {
		DefinitionContext _localctx = new DefinitionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_definition);
		try {
			setState(52);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(49);
				autostmt();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(50);
				declstmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(51);
				funcdef();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AutostmtContext extends ParserRuleContext {
		public TerminalNode AUTO() { return getToken(BParser.AUTO, 0); }
		public List<NameContext> name() {
			return getRuleContexts(NameContext.class);
		}
		public NameContext name(int i) {
			return getRuleContext(NameContext.class,i);
		}
		public TerminalNode SEMI() { return getToken(BParser.SEMI, 0); }
		public List<TerminalNode> ASSN() { return getTokens(BParser.ASSN); }
		public TerminalNode ASSN(int i) {
			return getToken(BParser.ASSN, i);
		}
		public List<ConstantContext> constant() {
			return getRuleContexts(ConstantContext.class);
		}
		public ConstantContext constant(int i) {
			return getRuleContext(ConstantContext.class,i);
		}
		public AutostmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_autostmt; }
	}

	public final AutostmtContext autostmt() throws RecognitionException {
		AutostmtContext _localctx = new AutostmtContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_autostmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(54);
			match(AUTO);
			setState(55);
			name();
			setState(58);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASSN) {
				{
				setState(56);
				match(ASSN);
				setState(57);
				constant();
				}
			}

			setState(68);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__0) {
				{
				{
				setState(60);
				match(T__0);
				setState(61);
				name();
				setState(64);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSN) {
					{
					setState(62);
					match(ASSN);
					setState(63);
					constant();
					}
				}

				}
				}
				setState(70);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(71);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DeclstmtContext extends ParserRuleContext {
		public List<TerminalNode> AUTO() { return getTokens(BParser.AUTO); }
		public TerminalNode AUTO(int i) {
			return getToken(BParser.AUTO, i);
		}
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(BParser.SEMI, 0); }
		public DeclstmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declstmt; }
	}

	public final DeclstmtContext declstmt() throws RecognitionException {
		DeclstmtContext _localctx = new DeclstmtContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_declstmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(73);
			match(AUTO);
			setState(74);
			name();
			setState(75);
			match(T__1);
			setState(84);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AUTO) {
				{
				setState(76);
				match(AUTO);
				setState(81);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__0) {
					{
					{
					setState(77);
					match(T__0);
					setState(78);
					match(AUTO);
					}
					}
					setState(83);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(86);
			match(T__2);
			setState(87);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FuncdefContext extends ParserRuleContext {
		public List<TerminalNode> AUTO() { return getTokens(BParser.AUTO); }
		public TerminalNode AUTO(int i) {
			return getToken(BParser.AUTO, i);
		}
		public List<NameContext> name() {
			return getRuleContexts(NameContext.class);
		}
		public NameContext name(int i) {
			return getRuleContext(NameContext.class,i);
		}
		public BlockstmtContext blockstmt() {
			return getRuleContext(BlockstmtContext.class,0);
		}
		public FuncdefContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funcdef; }
	}

	public final FuncdefContext funcdef() throws RecognitionException {
		FuncdefContext _localctx = new FuncdefContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_funcdef);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(AUTO);
			setState(90);
			name();
			setState(91);
			match(T__1);
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AUTO) {
				{
				setState(92);
				match(AUTO);
				setState(93);
				name();
				setState(99);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__0) {
					{
					{
					setState(94);
					match(T__0);
					setState(95);
					match(AUTO);
					setState(96);
					name();
					}
					}
					setState(101);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(104);
			match(T__2);
			setState(105);
			blockstmt();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlockstmtContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public BlockstmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockstmt; }
	}

	public final BlockstmtContext blockstmt() throws RecognitionException {
		BlockstmtContext _localctx = new BlockstmtContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_blockstmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(107);
			match(T__3);
			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 34204551636L) != 0)) {
				{
				{
				setState(108);
				statement();
				}
				}
				setState(113);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(114);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public AutostmtContext autostmt() {
			return getRuleContext(AutostmtContext.class,0);
		}
		public DeclstmtContext declstmt() {
			return getRuleContext(DeclstmtContext.class,0);
		}
		public BlockstmtContext blockstmt() {
			return getRuleContext(BlockstmtContext.class,0);
		}
		public IfstmtContext ifstmt() {
			return getRuleContext(IfstmtContext.class,0);
		}
		public WhilestmtContext whilestmt() {
			return getRuleContext(WhilestmtContext.class,0);
		}
		public ExpressionstmtContext expressionstmt() {
			return getRuleContext(ExpressionstmtContext.class,0);
		}
		public ReturnstmtContext returnstmt() {
			return getRuleContext(ReturnstmtContext.class,0);
		}
		public NullstmtContext nullstmt() {
			return getRuleContext(NullstmtContext.class,0);
		}
		public DirectiveContext directive() {
			return getRuleContext(DirectiveContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_statement);
		try {
			setState(125);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(116);
				autostmt();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(117);
				declstmt();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(118);
				blockstmt();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(119);
				ifstmt();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(120);
				whilestmt();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(121);
				expressionstmt();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(122);
				returnstmt();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(123);
				nullstmt();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(124);
				directive();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class IfstmtContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(BParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(BParser.ELSE, 0); }
		public IfstmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifstmt; }
	}

	public final IfstmtContext ifstmt() throws RecognitionException {
		IfstmtContext _localctx = new IfstmtContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_ifstmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			match(IF);
			setState(128);
			match(T__1);
			setState(129);
			expr(0);
			setState(130);
			match(T__2);
			setState(131);
			statement();
			setState(134);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				setState(132);
				match(ELSE);
				setState(133);
				statement();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class WhilestmtContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(BParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public WhilestmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whilestmt; }
	}

	public final WhilestmtContext whilestmt() throws RecognitionException {
		WhilestmtContext _localctx = new WhilestmtContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_whilestmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(136);
			match(WHILE);
			setState(137);
			match(T__1);
			setState(138);
			expr(0);
			setState(139);
			match(T__2);
			setState(140);
			statement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionstmtContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(BParser.SEMI, 0); }
		public ExpressionstmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionstmt; }
	}

	public final ExpressionstmtContext expressionstmt() throws RecognitionException {
		ExpressionstmtContext _localctx = new ExpressionstmtContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_expressionstmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(142);
			expression();
			setState(143);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ReturnstmtContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(BParser.RETURN, 0); }
		public TerminalNode SEMI() { return getToken(BParser.SEMI, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ReturnstmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_returnstmt; }
	}

	public final ReturnstmtContext returnstmt() throws RecognitionException {
		ReturnstmtContext _localctx = new ReturnstmtContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_returnstmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(145);
			match(RETURN);
			setState(151);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(146);
				expression();
				}
				break;
			case 2:
				{
				setState(147);
				match(T__1);
				setState(148);
				expression();
				setState(149);
				match(T__2);
				}
				break;
			}
			setState(153);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NullstmtContext extends ParserRuleContext {
		public TerminalNode SEMI() { return getToken(BParser.SEMI, 0); }
		public NullstmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_nullstmt; }
	}

	public final NullstmtContext nullstmt() throws RecognitionException {
		NullstmtContext _localctx = new NullstmtContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_nullstmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(155);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public AtomContext atom() {
			return getRuleContext(AtomContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(BParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(BParser.MINUS, 0); }
		public TerminalNode NOT() { return getToken(BParser.NOT, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MUL() { return getToken(BParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(BParser.DIV, 0); }
		public TerminalNode GT() { return getToken(BParser.GT, 0); }
		public TerminalNode GTE() { return getToken(BParser.GTE, 0); }
		public TerminalNode LT() { return getToken(BParser.LT, 0); }
		public TerminalNode LTE() { return getToken(BParser.LTE, 0); }
		public TerminalNode EQ() { return getToken(BParser.EQ, 0); }
		public TerminalNode NEQ() { return getToken(BParser.NEQ, 0); }
		public TerminalNode AND() { return getToken(BParser.AND, 0); }
		public TerminalNode OR() { return getToken(BParser.OR, 0); }
		public TerminalNode QUEST() { return getToken(BParser.QUEST, 0); }
		public TerminalNode COLON() { return getToken(BParser.COLON, 0); }
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(159);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2432L) != 0)) {
				{
				setState(158);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2432L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(161);
			atom();
			}
			_ctx.stop = _input.LT(-1);
			setState(189);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(187);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(163);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(164);
						_la = _input.LA(1);
						if ( !(_la==MUL || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(165);
						expr(8);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(166);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(167);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(168);
						expr(7);
						}
						break;
					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(169);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(170);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 61440L) != 0)) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(171);
						expr(6);
						}
						break;
					case 4:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(172);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(173);
						_la = _input.LA(1);
						if ( !(_la==EQ || _la==NEQ) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(174);
						expr(5);
						}
						break;
					case 5:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(175);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(176);
						match(AND);
						setState(177);
						expr(4);
						}
						break;
					case 6:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(178);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(179);
						match(OR);
						setState(180);
						expr(3);
						}
						break;
					case 7:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(181);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(182);
						match(QUEST);
						setState(183);
						expr(0);
						setState(184);
						match(COLON);
						setState(185);
						expr(2);
						}
						break;
					}
					} 
				}
				setState(191);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AtomContext extends ParserRuleContext {
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public FuncinvocationContext funcinvocation() {
			return getRuleContext(FuncinvocationContext.class,0);
		}
		public AtomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_atom; }
	}

	public final AtomContext atom() throws RecognitionException {
		AtomContext _localctx = new AtomContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_atom);
		try {
			setState(199);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(192);
				name();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(193);
				constant();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(194);
				match(T__1);
				setState(195);
				expression();
				setState(196);
				match(T__2);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(198);
				funcinvocation();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public TerminalNode ASSN() { return getToken(BParser.ASSN, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(204);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(201);
				name();
				setState(202);
				match(ASSN);
				}
				break;
			}
			setState(206);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FuncinvocationContext extends ParserRuleContext {
		public NameContext name() {
			return getRuleContext(NameContext.class,0);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public FuncinvocationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funcinvocation; }
	}

	public final FuncinvocationContext funcinvocation() throws RecognitionException {
		FuncinvocationContext _localctx = new FuncinvocationContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_funcinvocation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
			name();
			setState(209);
			match(T__1);
			setState(218);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 16911436164L) != 0)) {
				{
				setState(210);
				expr(0);
				setState(215);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__0) {
					{
					{
					setState(211);
					match(T__0);
					setState(212);
					expr(0);
					}
					}
					setState(217);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(220);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstantContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(BParser.INT, 0); }
		public TerminalNode REAL() { return getToken(BParser.REAL, 0); }
		public TerminalNode STRING() { return getToken(BParser.STRING, 0); }
		public TerminalNode BOOL() { return getToken(BParser.BOOL, 0); }
		public TerminalNode CHAR() { return getToken(BParser.CHAR, 0); }
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_constant);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 16374562816L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NameContext extends ParserRuleContext {
		public TerminalNode NAME() { return getToken(BParser.NAME, 0); }
		public NameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_name; }
	}

	public final NameContext name() throws RecognitionException {
		NameContext _localctx = new NameContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(224);
			match(NAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 13:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 7);
		case 1:
			return precpred(_ctx, 6);
		case 2:
			return precpred(_ctx, 5);
		case 3:
			return precpred(_ctx, 4);
		case 4:
			return precpred(_ctx, 3);
		case 5:
			return precpred(_ctx, 2);
		case 6:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001%\u00e3\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0001\u0000\u0001\u0000\u0005\u0000)\b\u0000\n\u0000\f\u0000,\t\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0003\u00025\b\u0002\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0003\u0003;\b\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0003\u0003A\b\u0003\u0005\u0003C\b\u0003\n\u0003\f\u0003"+
		"F\t\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0005\u0004P\b\u0004\n\u0004\f\u0004"+
		"S\t\u0004\u0003\u0004U\b\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0005\u0005b\b\u0005\n\u0005\f\u0005e\t\u0005\u0003"+
		"\u0005g\b\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001"+
		"\u0006\u0005\u0006n\b\u0006\n\u0006\f\u0006q\t\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007~\b\u0007\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003\b\u0087\b\b\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003"+
		"\u000b\u0098\b\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\r\u0001"+
		"\r\u0003\r\u00a0\b\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001"+
		"\r\u0001\r\u0005\r\u00bc\b\r\n\r\f\r\u00bf\t\r\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e"+
		"\u00c8\b\u000e\u0001\u000f\u0001\u000f\u0001\u000f\u0003\u000f\u00cd\b"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0010\u0001"+
		"\u0010\u0001\u0010\u0005\u0010\u00d6\b\u0010\n\u0010\f\u0010\u00d9\t\u0010"+
		"\u0003\u0010\u00db\b\u0010\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0000\u0001\u001a\u0013\u0000\u0002"+
		"\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e"+
		" \"$\u0000\u0006\u0002\u0000\u0007\b\u000b\u000b\u0001\u0000\t\n\u0001"+
		"\u0000\u0007\b\u0001\u0000\f\u000f\u0001\u0000\u0010\u0011\u0002\u0000"+
		"\u001c\u001c\u001e!\u00f4\u0000*\u0001\u0000\u0000\u0000\u0002/\u0001"+
		"\u0000\u0000\u0000\u00044\u0001\u0000\u0000\u0000\u00066\u0001\u0000\u0000"+
		"\u0000\bI\u0001\u0000\u0000\u0000\nY\u0001\u0000\u0000\u0000\fk\u0001"+
		"\u0000\u0000\u0000\u000e}\u0001\u0000\u0000\u0000\u0010\u007f\u0001\u0000"+
		"\u0000\u0000\u0012\u0088\u0001\u0000\u0000\u0000\u0014\u008e\u0001\u0000"+
		"\u0000\u0000\u0016\u0091\u0001\u0000\u0000\u0000\u0018\u009b\u0001\u0000"+
		"\u0000\u0000\u001a\u009d\u0001\u0000\u0000\u0000\u001c\u00c7\u0001\u0000"+
		"\u0000\u0000\u001e\u00cc\u0001\u0000\u0000\u0000 \u00d0\u0001\u0000\u0000"+
		"\u0000\"\u00de\u0001\u0000\u0000\u0000$\u00e0\u0001\u0000\u0000\u0000"+
		"&)\u0003\u0002\u0001\u0000\')\u0003\u0004\u0002\u0000(&\u0001\u0000\u0000"+
		"\u0000(\'\u0001\u0000\u0000\u0000),\u0001\u0000\u0000\u0000*(\u0001\u0000"+
		"\u0000\u0000*+\u0001\u0000\u0000\u0000+-\u0001\u0000\u0000\u0000,*\u0001"+
		"\u0000\u0000\u0000-.\u0005\u0000\u0000\u0001.\u0001\u0001\u0000\u0000"+
		"\u0000/0\u0005\"\u0000\u00000\u0003\u0001\u0000\u0000\u000015\u0003\u0006"+
		"\u0003\u000025\u0003\b\u0004\u000035\u0003\n\u0005\u000041\u0001\u0000"+
		"\u0000\u000042\u0001\u0000\u0000\u000043\u0001\u0000\u0000\u00005\u0005"+
		"\u0001\u0000\u0000\u000067\u0005\u0006\u0000\u00007:\u0003$\u0012\u0000"+
		"89\u0005\u001b\u0000\u00009;\u0003\"\u0011\u0000:8\u0001\u0000\u0000\u0000"+
		":;\u0001\u0000\u0000\u0000;D\u0001\u0000\u0000\u0000<=\u0005\u0001\u0000"+
		"\u0000=@\u0003$\u0012\u0000>?\u0005\u001b\u0000\u0000?A\u0003\"\u0011"+
		"\u0000@>\u0001\u0000\u0000\u0000@A\u0001\u0000\u0000\u0000AC\u0001\u0000"+
		"\u0000\u0000B<\u0001\u0000\u0000\u0000CF\u0001\u0000\u0000\u0000DB\u0001"+
		"\u0000\u0000\u0000DE\u0001\u0000\u0000\u0000EG\u0001\u0000\u0000\u0000"+
		"FD\u0001\u0000\u0000\u0000GH\u0005\u0016\u0000\u0000H\u0007\u0001\u0000"+
		"\u0000\u0000IJ\u0005\u0006\u0000\u0000JK\u0003$\u0012\u0000KT\u0005\u0002"+
		"\u0000\u0000LQ\u0005\u0006\u0000\u0000MN\u0005\u0001\u0000\u0000NP\u0005"+
		"\u0006\u0000\u0000OM\u0001\u0000\u0000\u0000PS\u0001\u0000\u0000\u0000"+
		"QO\u0001\u0000\u0000\u0000QR\u0001\u0000\u0000\u0000RU\u0001\u0000\u0000"+
		"\u0000SQ\u0001\u0000\u0000\u0000TL\u0001\u0000\u0000\u0000TU\u0001\u0000"+
		"\u0000\u0000UV\u0001\u0000\u0000\u0000VW\u0005\u0003\u0000\u0000WX\u0005"+
		"\u0016\u0000\u0000X\t\u0001\u0000\u0000\u0000YZ\u0005\u0006\u0000\u0000"+
		"Z[\u0003$\u0012\u0000[f\u0005\u0002\u0000\u0000\\]\u0005\u0006\u0000\u0000"+
		"]c\u0003$\u0012\u0000^_\u0005\u0001\u0000\u0000_`\u0005\u0006\u0000\u0000"+
		"`b\u0003$\u0012\u0000a^\u0001\u0000\u0000\u0000be\u0001\u0000\u0000\u0000"+
		"ca\u0001\u0000\u0000\u0000cd\u0001\u0000\u0000\u0000dg\u0001\u0000\u0000"+
		"\u0000ec\u0001\u0000\u0000\u0000f\\\u0001\u0000\u0000\u0000fg\u0001\u0000"+
		"\u0000\u0000gh\u0001\u0000\u0000\u0000hi\u0005\u0003\u0000\u0000ij\u0003"+
		"\f\u0006\u0000j\u000b\u0001\u0000\u0000\u0000ko\u0005\u0004\u0000\u0000"+
		"ln\u0003\u000e\u0007\u0000ml\u0001\u0000\u0000\u0000nq\u0001\u0000\u0000"+
		"\u0000om\u0001\u0000\u0000\u0000op\u0001\u0000\u0000\u0000pr\u0001\u0000"+
		"\u0000\u0000qo\u0001\u0000\u0000\u0000rs\u0005\u0005\u0000\u0000s\r\u0001"+
		"\u0000\u0000\u0000t~\u0003\u0006\u0003\u0000u~\u0003\b\u0004\u0000v~\u0003"+
		"\f\u0006\u0000w~\u0003\u0010\b\u0000x~\u0003\u0012\t\u0000y~\u0003\u0014"+
		"\n\u0000z~\u0003\u0016\u000b\u0000{~\u0003\u0018\f\u0000|~\u0003\u0002"+
		"\u0001\u0000}t\u0001\u0000\u0000\u0000}u\u0001\u0000\u0000\u0000}v\u0001"+
		"\u0000\u0000\u0000}w\u0001\u0000\u0000\u0000}x\u0001\u0000\u0000\u0000"+
		"}y\u0001\u0000\u0000\u0000}z\u0001\u0000\u0000\u0000}{\u0001\u0000\u0000"+
		"\u0000}|\u0001\u0000\u0000\u0000~\u000f\u0001\u0000\u0000\u0000\u007f"+
		"\u0080\u0005\u0017\u0000\u0000\u0080\u0081\u0005\u0002\u0000\u0000\u0081"+
		"\u0082\u0003\u001a\r\u0000\u0082\u0083\u0005\u0003\u0000\u0000\u0083\u0086"+
		"\u0003\u000e\u0007\u0000\u0084\u0085\u0005\u0018\u0000\u0000\u0085\u0087"+
		"\u0003\u000e\u0007\u0000\u0086\u0084\u0001\u0000\u0000\u0000\u0086\u0087"+
		"\u0001\u0000\u0000\u0000\u0087\u0011\u0001\u0000\u0000\u0000\u0088\u0089"+
		"\u0005\u0019\u0000\u0000\u0089\u008a\u0005\u0002\u0000\u0000\u008a\u008b"+
		"\u0003\u001a\r\u0000\u008b\u008c\u0005\u0003\u0000\u0000\u008c\u008d\u0003"+
		"\u000e\u0007\u0000\u008d\u0013\u0001\u0000\u0000\u0000\u008e\u008f\u0003"+
		"\u001e\u000f\u0000\u008f\u0090\u0005\u0016\u0000\u0000\u0090\u0015\u0001"+
		"\u0000\u0000\u0000\u0091\u0097\u0005\u001a\u0000\u0000\u0092\u0098\u0003"+
		"\u001e\u000f\u0000\u0093\u0094\u0005\u0002\u0000\u0000\u0094\u0095\u0003"+
		"\u001e\u000f\u0000\u0095\u0096\u0005\u0003\u0000\u0000\u0096\u0098\u0001"+
		"\u0000\u0000\u0000\u0097\u0092\u0001\u0000\u0000\u0000\u0097\u0093\u0001"+
		"\u0000\u0000\u0000\u0097\u0098\u0001\u0000\u0000\u0000\u0098\u0099\u0001"+
		"\u0000\u0000\u0000\u0099\u009a\u0005\u0016\u0000\u0000\u009a\u0017\u0001"+
		"\u0000\u0000\u0000\u009b\u009c\u0005\u0016\u0000\u0000\u009c\u0019\u0001"+
		"\u0000\u0000\u0000\u009d\u009f\u0006\r\uffff\uffff\u0000\u009e\u00a0\u0007"+
		"\u0000\u0000\u0000\u009f\u009e\u0001\u0000\u0000\u0000\u009f\u00a0\u0001"+
		"\u0000\u0000\u0000\u00a0\u00a1\u0001\u0000\u0000\u0000\u00a1\u00a2\u0003"+
		"\u001c\u000e\u0000\u00a2\u00bd\u0001\u0000\u0000\u0000\u00a3\u00a4\n\u0007"+
		"\u0000\u0000\u00a4\u00a5\u0007\u0001\u0000\u0000\u00a5\u00bc\u0003\u001a"+
		"\r\b\u00a6\u00a7\n\u0006\u0000\u0000\u00a7\u00a8\u0007\u0002\u0000\u0000"+
		"\u00a8\u00bc\u0003\u001a\r\u0007\u00a9\u00aa\n\u0005\u0000\u0000\u00aa"+
		"\u00ab\u0007\u0003\u0000\u0000\u00ab\u00bc\u0003\u001a\r\u0006\u00ac\u00ad"+
		"\n\u0004\u0000\u0000\u00ad\u00ae\u0007\u0004\u0000\u0000\u00ae\u00bc\u0003"+
		"\u001a\r\u0005\u00af\u00b0\n\u0003\u0000\u0000\u00b0\u00b1\u0005\u0012"+
		"\u0000\u0000\u00b1\u00bc\u0003\u001a\r\u0004\u00b2\u00b3\n\u0002\u0000"+
		"\u0000\u00b3\u00b4\u0005\u0013\u0000\u0000\u00b4\u00bc\u0003\u001a\r\u0003"+
		"\u00b5\u00b6\n\u0001\u0000\u0000\u00b6\u00b7\u0005\u0014\u0000\u0000\u00b7"+
		"\u00b8\u0003\u001a\r\u0000\u00b8\u00b9\u0005\u0015\u0000\u0000\u00b9\u00ba"+
		"\u0003\u001a\r\u0002\u00ba\u00bc\u0001\u0000\u0000\u0000\u00bb\u00a3\u0001"+
		"\u0000\u0000\u0000\u00bb\u00a6\u0001\u0000\u0000\u0000\u00bb\u00a9\u0001"+
		"\u0000\u0000\u0000\u00bb\u00ac\u0001\u0000\u0000\u0000\u00bb\u00af\u0001"+
		"\u0000\u0000\u0000\u00bb\u00b2\u0001\u0000\u0000\u0000\u00bb\u00b5\u0001"+
		"\u0000\u0000\u0000\u00bc\u00bf\u0001\u0000\u0000\u0000\u00bd\u00bb\u0001"+
		"\u0000\u0000\u0000\u00bd\u00be\u0001\u0000\u0000\u0000\u00be\u001b\u0001"+
		"\u0000\u0000\u0000\u00bf\u00bd\u0001\u0000\u0000\u0000\u00c0\u00c8\u0003"+
		"$\u0012\u0000\u00c1\u00c8\u0003\"\u0011\u0000\u00c2\u00c3\u0005\u0002"+
		"\u0000\u0000\u00c3\u00c4\u0003\u001e\u000f\u0000\u00c4\u00c5\u0005\u0003"+
		"\u0000\u0000\u00c5\u00c8\u0001\u0000\u0000\u0000\u00c6\u00c8\u0003 \u0010"+
		"\u0000\u00c7\u00c0\u0001\u0000\u0000\u0000\u00c7\u00c1\u0001\u0000\u0000"+
		"\u0000\u00c7\u00c2\u0001\u0000\u0000\u0000\u00c7\u00c6\u0001\u0000\u0000"+
		"\u0000\u00c8\u001d\u0001\u0000\u0000\u0000\u00c9\u00ca\u0003$\u0012\u0000"+
		"\u00ca\u00cb\u0005\u001b\u0000\u0000\u00cb\u00cd\u0001\u0000\u0000\u0000"+
		"\u00cc\u00c9\u0001\u0000\u0000\u0000\u00cc\u00cd\u0001\u0000\u0000\u0000"+
		"\u00cd\u00ce\u0001\u0000\u0000\u0000\u00ce\u00cf\u0003\u001a\r\u0000\u00cf"+
		"\u001f\u0001\u0000\u0000\u0000\u00d0\u00d1\u0003$\u0012\u0000\u00d1\u00da"+
		"\u0005\u0002\u0000\u0000\u00d2\u00d7\u0003\u001a\r\u0000\u00d3\u00d4\u0005"+
		"\u0001\u0000\u0000\u00d4\u00d6\u0003\u001a\r\u0000\u00d5\u00d3\u0001\u0000"+
		"\u0000\u0000\u00d6\u00d9\u0001\u0000\u0000\u0000\u00d7\u00d5\u0001\u0000"+
		"\u0000\u0000\u00d7\u00d8\u0001\u0000\u0000\u0000\u00d8\u00db\u0001\u0000"+
		"\u0000\u0000\u00d9\u00d7\u0001\u0000\u0000\u0000\u00da\u00d2\u0001\u0000"+
		"\u0000\u0000\u00da\u00db\u0001\u0000\u0000\u0000\u00db\u00dc\u0001\u0000"+
		"\u0000\u0000\u00dc\u00dd\u0005\u0003\u0000\u0000\u00dd!\u0001\u0000\u0000"+
		"\u0000\u00de\u00df\u0007\u0005\u0000\u0000\u00df#\u0001\u0000\u0000\u0000"+
		"\u00e0\u00e1\u0005\u001d\u0000\u0000\u00e1%\u0001\u0000\u0000\u0000\u0015"+
		"(*4:@DQTcfo}\u0086\u0097\u009f\u00bb\u00bd\u00c7\u00cc\u00d7\u00da";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}