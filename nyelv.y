%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "node.c"

  extern int yylineno;
  extern int yylex();
  extern FILE* yyin;

  #define YYPRINT(file, type, value) fprintf(file, "%d", value);

  a_node* root;
%}

%error-verbose

%union
{
	a_node* NODE;
	char* TEXT;
}

%token<TEXT> TYPE_NAME IDENTIFIER CONSTANT_INT CONSTANT_FRAC STRING_LITERAL 
%token<TEXT> INCREMENT DECREMENT SHIFT_LEFT SHIFT_RIGHT
%token<TEXT> LESS_OR_EQUAL GREATER_OR_EQUAL EQUAL NOT_EQUAL
%token<TEXT> AND OR MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN
%token<TEXT> CHAR INT LONG FLOAT DOUBLE VOID 
%token<TEXT> SIZEOF CASE DEFAULT IF IF_WITH_ELSE ELSE SWITCH WHILE DO FOR CONTINUE BREAK RETURN

%type<TEXT> primary_expression unary_operator assignment_operator declaration_specifiers type_specifier specifier_qualifier_list 

%type<NODE> designator_list type_name designator designation postfix_expression argument_expression_list unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression expression declaration  init_declarator_list init_declarator declarator parameter_type_list parameter_declaration identifier_list abstract_declarator initializer initializer_list labeled_statement compound_statement block_item_list block_item expression_statement selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition declaration_list statement

%left '='
%left "||"
%left "&&"
%nonassoc "==" "!="
%nonassoc '>' ">=" '<' "<="
%left '+' '-'
%left '*' '/' '%'
%right '!' "++" "--"
%left '.'

%start translation_unit
%%

primary_expression
	: IDENTIFIER 									{ $$ = $1; }
	| CONSTANT_INT									{ $$ = $1; }
	| CONSTANT_FRAC									{ $$ = $1; }
	| STRING_LITERAL								{ $$ = $1; }
	| '(' expression ')'								{ $$ = $2; }
	;

postfix_expression
	: primary_expression								{ $$ = buildNode(POSTFIX_EXPRESSION, "pr_exp", $1, NULL, NULL); }
	| postfix_expression '[' expression ']'						{ $$ = buildNode(POSTFIX_EXPRESSION, "pos_exp[exp]", "", $1, $3); }
	| postfix_expression '(' ')'							{ $$ = buildNode(POSTFIX_EXPRESSION, "pos_exp()", "", $1, NULL); }
	| postfix_expression '(' argument_expression_list ')'				{ $$ = buildNode(POSTFIX_EXPRESSION, "pos_exp(par1, par2)", "", $1, $3); }
	| postfix_expression '.' IDENTIFIER						{ $$ = buildNode(POSTFIX_EXPRESSION, "pos_exp.a", "", $1, $3); }
	| postfix_expression INCREMENT							{ $$ = buildNode(POSTFIX_EXPRESSION, "id1++", "", $1, NULL); }
	| postfix_expression DECREMENT							{ $$ = buildNode(POSTFIX_EXPRESSION, "id1--", "", $1, NULL); }
	;

argument_expression_list
	: assignment_expression								{ $$ = buildNode(ARGUMENT_EXPRESSION_LIST, "id1 = 1", "", $1, NULL); }
	| argument_expression_list ',' assignment_expression				{ $$ = buildNode(ARGUMENT_EXPRESSION_LIST, "id1 = 1, id2 = 2", "", $1, $3); }
	;

unary_expression
	: postfix_expression								{ $$ = buildNode(UNARY_EXPRESSION, "pos_exp", "", $1, NULL); }
	| INCREMENT unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "id1", "++id1", $2, NULL); }
	| DECREMENT unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "id1", "--id1", $2, NULL); }
	| unary_operator cast_expression						{ $$ = buildNode(UNARY_EXPRESSION, "+^-id1", $1, $2, NULL); }
	| SIZEOF unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "size_of u_exp", "", $2, NULL); }
	| SIZEOF '(' type_name ')'							{ $$ = buildNode(UNARY_EXPRESSION, "size_of int", "", $3, NULL); }
	;

unary_operator
	: '&'										{ $$ = '&'; }
	| '*'										{ $$ = '*'; }
	| '+'										{ $$ = '+'; }
	| '-'										{ $$ = '-'; }
	| '~'										{ $$ = '~'; }
	| '!'										{ $$ = '!'; }
	;

cast_expression
	: unary_expression								{ $$ = buildNode(CAST_EXPRESSION, "-id1", "", $1, NULL); }
	| '(' type_name ')' cast_expression						{ $$ = buildNode(CAST_EXPRESSION, "(int)c_exp", $2, $4, NULL); }
	;

multiplicative_expression
	: cast_expression								{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "c_exp", "", $1, NULL); }
	| multiplicative_expression '*' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 * id2", "", $1, $3); }
	| multiplicative_expression '/' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 / id2", "", $1, $3); }
	| multiplicative_expression '%' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 % id2", "", $1, $3); }
	;

additive_expression
	: multiplicative_expression							{ $$ = buildNode(ADDITIVE_EXPRESSION, "m_exp", "", $1, NULL); }
	| additive_expression '+' multiplicative_expression				{ $$ = buildNode(ADDITIVE_EXPRESSION, "id1 + id2", "", $1, $3); }
	| additive_expression '-' multiplicative_expression				{ $$ = buildNode(ADDITIVE_EXPRESSION, "id1 - id2", "", $1, $3); }
	;

shift_expression
	: additive_expression								{ $$ = buildNode(SHIFT_EXPRESSION, "a_exp", "", $1, NULL); }
	| shift_expression SHIFT_LEFT additive_expression				{ $$ = buildNode(SHIFT_EXPRESSION, "id1 << 1", "", $1, $3); }
	| shift_expression SHIFT_RIGHT additive_expression				{ $$ = buildNode(SHIFT_EXPRESSION, "id1 >> 1", "", $1, $3); }
	;

relational_expression
	: shift_expression								{ $$ = buildNode(RELATIONAL_EXPRESSION, "s_exp", "", $1, NULL); }
	| relational_expression '<' shift_expression					{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1 < id2", "", $1, $3); }
	| relational_expression '>' shift_expression					{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1 > id2", "", $1, $3); }
	| relational_expression LESS_OR_EQUAL shift_expression				{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1 <= id2", "", $1, $3); }
	| relational_expression GREATER_OR_EQUAL shift_expression			{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1 >= id2", "", $1, $3); }
	;

equality_expression
	: relational_expression								{ $$ = buildNode(EQUALITY_EXPRESSION, "rel_exp", "", $1, NULL); }
	| equality_expression EQUAL relational_expression				{ $$ = buildNode(EQUALITY_EXPRESSION, "id1 == id2", "", $1, $3); }
	| equality_expression NOT_EQUAL relational_expression				{ $$ = buildNode(EQUALITY_EXPRESSION, "id1 != id2", "", $1, $3); }
	;

and_expression
	: equality_expression								{ $$ = buildNode(AND_EXPRESSION, "eq_exp", "", $1, NULL); }
	| and_expression '&' equality_expression					{ $$ = buildNode(AND_EXPRESSION, "id1 & id2", "", $1, $3); }
	;

exclusive_or_expression
	: and_expression								{ $$ = buildNode(EXCLUSIVE_OR_EXPRESSION, "and_exp", "", $1, NULL); }
	| exclusive_or_expression '^' and_expression					{ $$ = buildNode(EXCLUSIVE_OR_EXPRESSION, "id1 ^ id2", "", $1, $3); }
	;

inclusive_or_expression
	: exclusive_or_expression							{ $$ = buildNode(INCLUSIVE_OR_EXPRESSION, "excl_exp", "", $1, NULL); }
	| inclusive_or_expression '|' exclusive_or_expression				{ $$ = buildNode(INCLUSIVE_OR_EXPRESSION, "id1 | id2", "", $1, $3); }
	;

logical_and_expression
	: inclusive_or_expression							{ $$ = buildNode(LOGICAL_AND_EXPRESSION, "incl_exp", "", $1, NULL); }
	| logical_and_expression AND inclusive_or_expression				{ $$ = buildNode(LOGICAL_AND_EXPRESSION, "id1 && id2", "", $1, $3); }
	;

logical_or_expression
	: logical_and_expression							{ $$ = buildNode(LOGICAL_OR_EXPRESSION, "lor_exp", "", $1, NULL); }
	| logical_or_expression OR logical_and_expression				{ $$ = buildNode(LOGICAL_OR_EXPRESSION, "id1 || id2", "", $1, $3); }
	;

conditional_expression
	: logical_or_expression								{ $$ = buildNode(CONDITIONAL_EXPRESSION, "lor_exp", "", $1, NULL); }
	| logical_or_expression '?' expression ':' conditional_expression		{ $$ = buildFullNode(CONDITIONAL_EXPRESSION, "id1 ? id2 : id3", "", NULL, NULL, $1, $3, $5); }
	;

assignment_expression
	: conditional_expression							{ $$ = buildNode(ASSIGNMENT_EXPRESSION, "c_exp", "", $1, NULL); }
	| unary_expression assignment_operator assignment_expression			{ $$ = buildNode(ASSIGNMENT_EXPRESSION, "-id1 = exp", $2, $1, $3); }
	;

assignment_operator
	: '='										{ $$ = '='; }
	| MUL_ASSIGN									{ $$ = $1; }
	| DIV_ASSIGN									{ $$ = $1; }
	| MOD_ASSIGN									{ $$ = $1; }
	| ADD_ASSIGN									{ $$ = $1; }
	| SUB_ASSIGN									{ $$ = $1; }
	| LEFT_ASSIGN									{ $$ = $1; }
	| RIGHT_ASSIGN									{ $$ = $1; }
	| AND_ASSIGN									{ $$ = $1; }
	| XOR_ASSIGN									{ $$ = $1; }
	| OR_ASSIGN									{ $$ = $1; }
	;

expression
	: assignment_expression								{ $$ = buildNode(EXPRESSION, "assign_exp", "", $1, NULL); }
	| expression ',' assignment_expression						{ $$ = buildNode(EXPRESSION, "exp, assign_exp", "", $1, $3); }
	;

declaration
	: declaration_specifiers ';'							{ $$ = buildNode(DECLARATION, "int id1", $1, NULL, NULL); }
	| declaration_specifiers init_declarator_list ';'				{ $$ = buildNode(DECLARATION, "int id1 = 1, id2 = 2", $1, $2, NULL); }
	;

declaration_specifiers
	: type_specifier								{ $$ = $1; }
	| type_specifier declaration_specifiers						{ $$ = $1; }
	;

init_declarator_list
	: init_declarator								{ $$ = buildNode(INIT_DECLARATOR_LIST, "id1", "", NULL, NULL); }
	| init_declarator_list ',' init_declarator					{ $$ = buildNode(INIT_DECLARATOR_LIST, "id1", "", NULL, NULL); }
	;

init_declarator
	: declarator									{ $$ = buildNode(INIT_DECLARATOR, "id1", "", NULL, NULL); }
	| declarator '=' initializer							{ $$ = buildNode(INIT_DECLARATOR, "id1", "", NULL, NULL); }
	;

type_specifier
	: VOID										{ $$ = $1; }
	| CHAR										{ $$ = $1; }
	| INT										{ $$ = $1; }
	| LONG										{ $$ = $1; }
	| FLOAT										{ $$ = $1; }
	| DOUBLE									{ $$ = $1; }
	| TYPE_NAME									{ $$ = $1; }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list					{ $$ = $1; }
	| type_specifier								{ $$ = $1; }
	;

declarator
	: IDENTIFIER									{ $$ = buildNode(DECLARATOR, "id1", $1, NULL, NULL); }
	| '(' declarator ')'								{ $$ = buildNode(DECLARATOR, "(id1)", "", $2, NULL); }
	| declarator '[' assignment_expression ']'					{ $$ = buildNode(DECLARATOR, "id1[assign_exp]", "", $1, $3); }
	| declarator '[' ']'								{ $$ = buildNode(DECLARATOR, "id1[]", "", $1, NULL); }
	| declarator '(' parameter_type_list ')'					{ $$ = buildNode(DECLARATOR, "id1(par1, par2)", "", $1, $3); }
	| declarator '(' identifier_list ')'						{ $$ = buildNode(DECLARATOR, "id1(id1, id2)", "", $1, $3); }
	| declarator '(' ')'								{ $$ = buildNode(DECLARATOR, "id1()", "", $1, NULL); }
	;

parameter_type_list
	: parameter_declaration								{ $$ = buildNode(PARAMETER_TYPE_LIST, "int id1", "", $1, NULL); }
	| parameter_type_list ',' parameter_declaration					{ $$ = buildNode(PARAMETER_TYPE_LIST, "int id1, int id2", "", $1, $3); }
	;

parameter_declaration
	: declaration_specifiers declarator						{ $$ = buildNode(PARAMETER_DECLARATION, "int id1", $1, NULL, $2); }
	| declaration_specifiers abstract_declarator					{ $$ = buildNode(PARAMETER_DECLARATION, "int abstr id1", NULL, $1, $2); }
	| declaration_specifiers							{ $$ = buildNode(PARAMETER_DECLARATION, "id1", $1, NULL, NULL); }
	;

identifier_list
	: IDENTIFIER									{ $$ = buildNode(IDENTIFIER_LIST, "id1", $1, NULL, NULL); }
	| identifier_list ',' IDENTIFIER						{ $$ = buildNode(IDENTIFIER_LIST, "id1, id2", $3, $1, NULL); }
	;

type_name
	: specifier_qualifier_list							{ $$ = buildNode(TYPE_NAME, "type1", $1, NULL, NULL); }
	| specifier_qualifier_list abstract_declarator					{ $$ = buildNode(TYPE_NAME, "type1 type2", $1, $2, NULL); }
	;

abstract_declarator
	: '(' abstract_declarator ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "(abstr_decl)", "", $2, NULL); }
	| '[' ']'									{ $$ = buildNode(ABSTRACT_DECLARATOR, "[]", "", NULL, NULL); }
	| '[' assignment_expression ']'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "[assign_exp]", "", $2, NULL); }
	| abstract_declarator '[' ']'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl[]", "", $1, NULL); }
	| abstract_declarator '[' assignment_expression ']'				{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl[assign_exp]", "", $1, $3); }
	| '(' ')'									{ $$ = buildNode(ABSTRACT_DECLARATOR, "()", "", NULL, NULL); }
	| '(' parameter_type_list ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "(par1, par2)", "", $2, NULL); }
	| abstract_declarator '(' ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl()", "", $1, NULL); }
	| abstract_declarator '(' parameter_type_list ')'				{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl(par1, par2)", "", $1, $3); }
	;

initializer
	: assignment_expression								{ $$ = buildNode(INITIALIZER, "id1 += 1", "", $1, NULL); }
	| '{' initializer_list '}'							{ $$ = buildNode(INITIALIZER, "{il}", "", $2, NULL); }
	;

initializer_list
	: initializer									{ $$ = buildNode(INITIALIZER_LIST, "id1 += 1", "", $1, NULL); }
	| designation initializer							{ $$ = buildNode(INITIALIZER_LIST, "id1 = 1", "", $1, $2); }
	| initializer_list ',' initializer						{ $$ = buildNode(INITIALIZER_LIST, "il, id1 += 1", "", $1, $3); }
	| initializer_list ',' designation initializer					{ $$ = buildFullNode(INITIALIZER_LIST, "il, id1 = 1", "", NULL, NULL, $1, $3, $4); }
	;

designation
	: designator_list '='								{ $$ = buildNode(DESIGNATION, "id1 =", "", $1, NULL); }
	;

designator_list
	: designator									{ $$ = buildNode(DESIGNATOR_LIST, "[1]", "", $1, NULL); }
	| designator_list designator							{ $$ = buildNode(DESIGNATOR_LIST, "[1][2]", "", $1, $2); }
	;

designator
	: '[' conditional_expression ']'						{ $$ = buildNode(DESIGNATOR, "[1]", "", $2, NULL); }
	| '.' IDENTIFIER								{ $$ = buildNode(DESIGNATOR, ".a", $2, NULL, NULL); }
	;

statement
	: labeled_statement								{ $$ = buildNode(STATEMENT, "labled_st", "", $1, NULL); }
	| compound_statement								{ $$ = buildNode(STATEMENT, "compound_st", "", $1, NULL); }
	| expression_statement								{ $$ = buildNode(STATEMENT, "exp_st", "", $1, NULL); }
	| selection_statement								{ $$ = buildNode(STATEMENT, "select_st", "", $1, NULL); }
	| iteration_statement								{ $$ = buildNode(STATEMENT, "iter_st", "", $1, NULL); }
	| jump_statement								{ $$ = buildNode(STATEMENT, "jump_st", "", $1, NULL); }
	;

labeled_statement
	: CASE conditional_expression ':' statement					{ $$ = buildNode(LABELED_STATEMENT, "case id1 == 1 : id2 = 2", "", $2, $4); }
	| DEFAULT ':' statement								{ $$ = buildNode(LABELED_STATEMENT, "default: id1 = 1", "", $3, NULL); }
	;

compound_statement
	: '{' '}'									{ $$ = buildNode(COMPOUND_STATEMENT, "{}", "", NULL, NULL); }
	| '{' block_item_list '}'							{ $$ = buildNode(COMPOUND_STATEMENT, "{block_list}", "", $2, NULL); }
	;

block_item_list
	: block_item									{ $$ = buildNode(BLOCK_ITEM_LIST, "item1", "", $1, NULL); }
	| block_item_list block_item							{ $$ = buildNode(BLOCK_ITEM_LIST, "item1, item2", "", $1, $2); }
	;

block_item
	: error ';'									{ $$ = NULL; }
	| declaration									{ $$ = buildNode(BLOCK_ITEM, "int id1", "", $1, NULL); }
	| statement									{ $$ = buildNode(BLOCK_ITEM, "id1 + id2", "", $1, NULL); }
	;

expression_statement
	: ';'										{ $$ = buildNode(EXPRESSION_STATEMENT, ";", "", NULL, NULL); }
	| expression ';'								{ $$ = buildNode(EXPRESSION_STATEMENT, "exp;", "", $1, NULL); }
	;

selection_statement
	: IF '(' expression ')' statement						{ $$ = buildNode(SELECTION_STATEMENT, "if", "", $3, $5); }
	| IF_WITH_ELSE '(' expression ')' statement ELSE statement			{ $$ = buildFullNode(SELECTION_STATEMENT, "if_with_else", "", NULL, NULL, $3, $5, $7); }
	| SWITCH '(' expression ')' statement						{ $$ = buildNode(SELECTION_STATEMENT, "switch", "", $3, $5); }
	;

iteration_statement
	: WHILE '(' expression ')' statement						{ $$ = buildNode(ITERATION_STATEMENT, "while", "", $3, $5); }
	| DO statement WHILE '(' expression ')' ';'					{ $$ = buildNode(ITERATION_STATEMENT, "do_while", "", $2, $5); }
	| FOR '(' expression_statement expression_statement expression ')' statement	{ $$ = buildFullNode(ITERATION_STATEMENT, "for", "", $7, NULL, $3, $4, $5); }
	;

jump_statement
	: CONTINUE ';'									{ $$ = buildNode(JUMP_STATEMENT, "continue", $1, NULL, NULL); }
	| BREAK ';'									{ $$ = buildNode(JUMP_STATEMENT, "break", $1, NULL, NULL); }
	| RETURN ';'									{ $$ = buildNode(JUMP_STATEMENT, "return;", $1, NULL, NULL); }
	| RETURN expression ';'								{ $$ = buildNode(JUMP_STATEMENT, "return exp;", $1, $2, NULL); }
	;

translation_unit
	: external_declaration								{ root = $$ = buildNode(TRANSLATION_UNIT, "ext_decl", "", $1, NULL); }
	| translation_unit external_declaration						{ $$ = buildNode(TRANSLATION_UNIT, "tr_unit, ext_decl", "", $1, $2); }
	;

external_declaration
	: function_definition								{ $$ = buildNode(EXTERNAL_DECLARATION, "function", "", $1, NULL); }
	| declaration									{ $$ = buildNode(EXTERNAL_DECLARATION, "decl", "", $1, NULL); }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement		{ $$ = buildFullNode(FUNCTION_DEFINITION, "function_def", "", $1, $2, $3, $4, NULL); }
	| declaration_specifiers declarator compound_statement				{ $$ = buildFullNode(FUNCTION_DEFINITION, "short function_def", "", NULL, NULL, $1, $2, $3); }
	;

declaration_list
	: declaration									{ $$ = buildNode(DECLARATION_LIST, "decl", "", $1, NULL); }
	| declaration_list declaration							{ $$ = buildNode(DECLARATION_LIST, "decl_list, decl", "", $1, $2); }
	;


%%
#include <stdio.h>

extern char yytext[];
extern int column;

int yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s - %*s\n\n", column, "^", column, s);
	return 0;
}

main(int argc, char *argv[])
{
  //yydebug=1;
  ++argv, ++argc;
  yyin = fopen(argv[0], "r");
  yyparse(); 
}
