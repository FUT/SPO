%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "node.c"

  extern int yylineno;
  extern int yylex();
  extern FILE* yyin;
  extern void analyze(a_node*);

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

%type<NODE> assignment_operator declaration_specifiers type_specifier specifier_qualifier_list unary_operator primary_expression designator_list type_name designator designation postfix_expression argument_expression_list unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression expression declaration  init_declarator_list init_declarator declarator parameter_type_list parameter_declaration identifier_list abstract_declarator initializer initializer_list labeled_statement compound_statement block_item_list block_item expression_statement selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition declaration_list statement

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
	: IDENTIFIER 									{ $$ = buildNode(PRIMARY_EXPRESSION, "p_exp1", $1, NULL, NULL); }
	| CONSTANT_INT									{ $$ = buildNode(PRIMARY_EXPRESSION, "p_exp2", $1, NULL, NULL); }
	| CONSTANT_FRAC									{ $$ = buildNode(PRIMARY_EXPRESSION, "p_exp3", $1, NULL, NULL); }
	| STRING_LITERAL								{ $$ = buildNode(PRIMARY_EXPRESSION, "p_exp4", $1, NULL, NULL); }
	| '(' expression ')'								{ $$ = buildNode(PRIMARY_EXPRESSION, "p_exp5", NULL, $2, NULL); }
	;

postfix_expression
	: primary_expression								
	| postfix_expression '[' expression ']'						{ $$ = buildNode(POSTFIX_EXPRESSION, "post_exp1", NULL, $1, $3); }
	| postfix_expression '(' ')'							{ $$ = buildNode(POSTFIX_EXPRESSION, "post_exp2", NULL, $1, NULL); }
	| postfix_expression '(' argument_expression_list ')'				{ $$ = buildNode(POSTFIX_EXPRESSION, "post_exp3", NULL, $1, $3); }
	| postfix_expression '.' IDENTIFIER						{ $$ = buildNode(POSTFIX_EXPRESSION, "post_exp4", $3, $1, NULL); }
	| postfix_expression INCREMENT							{ $$ = buildNode(POSTFIX_EXPRESSION, "post_exp5", "++", $1, NULL); }
	| postfix_expression DECREMENT							{ $$ = buildNode(POSTFIX_EXPRESSION, "post_exp6", "--", $1, NULL); }
	;

argument_expression_list
	: assignment_expression								
	| argument_expression_list ',' assignment_expression				{ $$ = buildNode(ARGUMENT_EXPRESSION_LIST, "ael1", NULL, $1, $3); }
	;

unary_expression
	: postfix_expression								
	| INCREMENT unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "un_exp1", NULL, $2, NULL); }
	| DECREMENT unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "un_exp2", NULL, $2, NULL); }
	| unary_operator cast_expression						{ $$ = buildNode(UNARY_EXPRESSION, "un_exp3", NULL, $1, $2); }
	| SIZEOF unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "un_exp4", NULL, $2, NULL); }
	| SIZEOF '(' type_name ')'							{ $$ = buildNode(UNARY_EXPRESSION, "un_exp5", NULL, $3, NULL); }
	;

unary_operator
	: '&'										{ $$ = buildNode(UNARY_EXPRESSION, "un_op1", "&", NULL, NULL); }
	| '*'										{ $$ = buildNode(UNARY_EXPRESSION, "un_op2", "*", NULL, NULL); }
	| '+'										{ $$ = buildNode(UNARY_EXPRESSION, "un_op3", "+", NULL, NULL); }
	| '-'										{ $$ = buildNode(UNARY_EXPRESSION, "un_op4", "-", NULL, NULL); }
	| '~'										{ $$ = buildNode(UNARY_EXPRESSION, "un_op5", "~", NULL, NULL); }
	| '!'										{ $$ = buildNode(UNARY_EXPRESSION, "un_op6", "!", NULL, NULL); }
	;

cast_expression
	: unary_expression								
	| '(' type_name ')' cast_expression						{ $$ = buildNode(CAST_EXPRESSION, "cast_exp1", NULL, $2, $4); }
	;

multiplicative_expression
	: cast_expression								
	| multiplicative_expression '*' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "mul_exp1", "*", $1, $3); }
	| multiplicative_expression '/' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "mul_exp2", "/", $1, $3); }
	| multiplicative_expression '%' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "mul_exp3", "%", $1, $3); }
	;

additive_expression
	: multiplicative_expression							
	| additive_expression '+' multiplicative_expression				{ $$ = buildNode(ADDITIVE_EXPRESSION, "add_exp1", "+", $1, $3); }
	| additive_expression '-' multiplicative_expression				{ $$ = buildNode(ADDITIVE_EXPRESSION, "add_exp2", "-", $1, $3); }
	;

shift_expression
	: additive_expression								
	| shift_expression SHIFT_LEFT additive_expression				{ $$ = buildNode(SHIFT_EXPRESSION, "shift_exp1", "<<", $1, $3); }
	| shift_expression SHIFT_RIGHT additive_expression				{ $$ = buildNode(SHIFT_EXPRESSION, "shift_exp2", ">>", $1, $3); }
	;

relational_expression
	: shift_expression								
	| relational_expression '<' shift_expression					{ $$ = buildNode(RELATIONAL_EXPRESSION, "rel_exp1", "<", $1, $3); }
	| relational_expression '>' shift_expression					{ $$ = buildNode(RELATIONAL_EXPRESSION, "rel_exp2", ">", $1, $3); }
	| relational_expression LESS_OR_EQUAL shift_expression				{ $$ = buildNode(RELATIONAL_EXPRESSION, "rel_exp3", "<=", $1, $3); }
	| relational_expression GREATER_OR_EQUAL shift_expression			{ $$ = buildNode(RELATIONAL_EXPRESSION, "rel_exp4", ">=", $1, $3); }
	;

equality_expression
	: relational_expression								
	| equality_expression EQUAL relational_expression				{ $$ = buildNode(EQUALITY_EXPRESSION, "eq_exp1", "==", $1, $3); }
	| equality_expression NOT_EQUAL relational_expression				{ $$ = buildNode(EQUALITY_EXPRESSION, "eq_exp2", "!=", $1, $3); }
	;

and_expression
	: equality_expression								
	| and_expression '&' equality_expression					{ $$ = buildNode(AND_EXPRESSION, "and_exp1", "&", $1, $3); }
	;

exclusive_or_expression
	: and_expression								
	| exclusive_or_expression '^' and_expression					{ $$ = buildNode(EXCLUSIVE_OR_EXPRESSION, "ex_or_exp1", "^", $1, $3); }
	;

inclusive_or_expression
	: exclusive_or_expression							
	| inclusive_or_expression '|' exclusive_or_expression				{ $$ = buildNode(INCLUSIVE_OR_EXPRESSION, "or_exp1", "|", $1, $3); }
	;

logical_and_expression
	: inclusive_or_expression							
	| logical_and_expression AND inclusive_or_expression				{ $$ = buildNode(LOGICAL_AND_EXPRESSION, "l_and_exp1", "&&", $1, $3); }
	;

logical_or_expression
	: logical_and_expression							
	| logical_or_expression OR logical_and_expression				{ $$ = buildNode(LOGICAL_OR_EXPRESSION, "l_or_exp1", "||", $1, $3); }
	;

conditional_expression
	: logical_or_expression								
	| logical_or_expression '?' expression ':' conditional_expression		{ $$ = buildFullNode(CONDITIONAL_EXPRESSION, "cond_exp1", NULL, NULL, NULL, $1, $3, $5); }
	;

assignment_expression
	: conditional_expression							
	| unary_expression assignment_operator assignment_expression			{ $$ = buildFullNode(ASSIGNMENT_EXPRESSION, "assign_exp1", NULL, NULL, NULL, $1, $2, $3); }
	;

assignment_operator
	: '='										{ $$ = buildNode(ASSIGNMENT_OPERATOR, "=", "=", NULL, NULL); }
	| MUL_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "*=", "*=", NULL, NULL); }
	| DIV_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "/=", "/=", NULL, NULL); }
	| MOD_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "%=", "%=", NULL, NULL); }
	| ADD_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "+=", "+=", NULL, NULL); }
	| SUB_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "-=", "-=", NULL, NULL); }
	| LEFT_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "<<=", "<<=", NULL, NULL); }
	| RIGHT_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, ">>=", ">>=", NULL, NULL); }
	| AND_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "&=", "&=", NULL, NULL); }
	| XOR_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "^=", "^=", NULL, NULL); }
	| OR_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "|=", "|=", NULL, NULL); }
	;

expression
	: assignment_expression								
	| expression ',' assignment_expression						{ $$ = buildNode(EXPRESSION, "exp1", NULL, $1, $3); }
	;

declaration
	: declaration_specifiers ';'							{ $$ = buildNode(DECLARATION, "decl1", NULL, $1, NULL); }
	| declaration_specifiers init_declarator_list ';'				{ $$ = buildNode(DECLARATION, "decl2", NULL, $1, $2); }
	;

declaration_specifiers
	: type_specifier								
	| type_specifier declaration_specifiers						{ $$ = buildNode(DECLARATION, "decl_spec1", NULL, $1, $2); }
	;

init_declarator_list
	: init_declarator								
	| init_declarator_list ',' init_declarator					{ $$ = buildNode(INIT_DECLARATOR_LIST, "init_decl_list1", NULL, $1, $3); }
	;

init_declarator
	: declarator									
	| declarator '=' initializer							{ $$ = buildNode(INIT_DECLARATOR, "init_decl1", NULL, $1, $3); }
	;

type_specifier
	: VOID										{ $$ = buildNode(UNARY_EXPRESSION, "type1", "void ", NULL, NULL); }
	| CHAR										{ $$ = buildNode(UNARY_EXPRESSION, "type1", "char ", NULL, NULL); }
	| INT										{ $$ = buildNode(UNARY_EXPRESSION, "type1", "int ", NULL, NULL); }
	| LONG										{ $$ = buildNode(UNARY_EXPRESSION, "type1", "long ", NULL, NULL); }
	| FLOAT										{ $$ = buildNode(UNARY_EXPRESSION, "type1", "float ", NULL, NULL); }
	| DOUBLE									{ $$ = buildNode(UNARY_EXPRESSION, "type1", "double ", NULL, NULL); }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list					{ $$ = buildNode(DECLARATION, "spec_qual_list", NULL, $1, $2); }
	| type_specifier								
	;

declarator
	: IDENTIFIER									{ $$ = buildNode(DECLARATOR, "decl1", $1, NULL, NULL); }
	| '(' declarator ')'								{ $$ = buildNode(DECLARATOR, "decl2", NULL, $2, NULL); }
	| declarator '[' assignment_expression ']'					{ $$ = buildNode(DECLARATOR, "decl3", NULL, $1, $3); }
	| declarator '[' ']'								{ $$ = buildNode(DECLARATOR, "decl4", NULL, $1, NULL); }
	| declarator '(' parameter_type_list ')'					{ $$ = buildNode(DECLARATOR, "decl5", NULL, $1, $3); }
	| declarator '(' identifier_list ')'						{ $$ = buildNode(DECLARATOR, "decl6", NULL, $1, $3); }
	| declarator '(' ')'								{ $$ = buildNode(DECLARATOR, "decl7", NULL, $1, NULL); }
	;

parameter_type_list
	: parameter_declaration								
	| parameter_type_list ',' parameter_declaration					{ $$ = buildNode(PARAMETER_TYPE_LIST, "par_type_list1", NULL, $1, $3); }
	;

parameter_declaration
	: declaration_specifiers declarator						{ $$ = buildNode(PARAMETER_DECLARATION, "par_decl1", NULL, $1, $2); }
	| declaration_specifiers abstract_declarator					{ $$ = buildNode(PARAMETER_DECLARATION, "par_decl2", NULL, $1, $2); }
	| declaration_specifiers							
	;

identifier_list
	: IDENTIFIER									{ $$ = buildNode(UNARY_EXPRESSION, "ident_list1", $1, NULL, NULL); }
	| identifier_list ',' IDENTIFIER						{ $$ = buildNode(IDENTIFIER_LIST, "ident_list2", $3, $1, NULL); }
	;

type_name
	: specifier_qualifier_list							
	| specifier_qualifier_list abstract_declarator					{ $$ = buildNode(TYPE_NAME, "type_name1", NULL, $1, $2); }
	;

abstract_declarator
	: '(' abstract_declarator ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl1", NULL, $2, NULL); }
	| '[' ']'									{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl2", NULL, NULL, NULL); }
	| '[' assignment_expression ']'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl3", NULL, $2, NULL); }
	| abstract_declarator '[' ']'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl4", NULL, $1, NULL); }
	| abstract_declarator '[' assignment_expression ']'				{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl5", NULL, $1, $3); }
	| '(' ')'									{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl6", NULL, NULL, NULL); }
	| '(' parameter_type_list ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl7", NULL, $2, NULL); }
	| abstract_declarator '(' ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl8", NULL, $1, NULL); }
	| abstract_declarator '(' parameter_type_list ')'				{ $$ = buildNode(ABSTRACT_DECLARATOR, "abstr_decl9", NULL, $1, $3); }
	;

initializer
	: assignment_expression								
	| '{' initializer_list '}'							{ $$ = buildNode(INITIALIZER, "initial1", NULL, $2, NULL); }
	;

initializer_list
	: initializer									
	| designation initializer							{ $$ = buildNode(INITIALIZER_LIST, "initial_list1", NULL, $1, $2); }
	| initializer_list ',' initializer						{ $$ = buildNode(INITIALIZER_LIST, "initial_list2", NULL, $1, $3); }
	| initializer_list ',' designation initializer					{ $$ = buildFullNode(INITIALIZER_LIST, "initial_list3", NULL, NULL, NULL, $1, $3, $4); }
	;

designation
	: designator_list '='								{ $$ = buildNode(DESIGNATION, "design1", NULL, $1, NULL); }
	;

designator_list
	: designator									
	| designator_list designator							{ $$ = buildNode(DESIGNATOR_LIST, "desing_list1", NULL, $1, $2); }
	;

designator
	: '[' conditional_expression ']'						{ $$ = buildNode(DESIGNATOR, "design1", NULL, $2, NULL); }
	| '.' IDENTIFIER								{ $$ = buildNode(DESIGNATOR, "design2", $2, NULL, NULL); }
	;

statement
	: labeled_statement								
	| compound_statement								
	| expression_statement								
	| selection_statement								
	| iteration_statement								
	| jump_statement								
	;

labeled_statement
	: CASE conditional_expression ':' statement					{ $$ = buildNode(LABELED_STATEMENT, "lab_sttm1", NULL, $2, $4); }
	| DEFAULT ':' statement								{ $$ = buildNode(LABELED_STATEMENT, "lab_sttm2", NULL, $3, NULL); }
	;

compound_statement
	: '{' '}'									{ $$ = buildNode(COMPOUND_STATEMENT, "compound_st1", NULL, NULL, NULL); }
	| '{' block_item_list '}'							{ $$ = buildNode(COMPOUND_STATEMENT, "compound_st2", NULL, $2, NULL); }
	;

block_item_list
	: block_item									
	| block_item_list block_item							{ $$ = buildNode(BLOCK_ITEM_LIST, "bl_item_list1", NULL, $1, $2); }
	;

block_item
	: error ';'									{ $$ = NULL; }
	| declaration									{ $$ = buildNode(BLOCK_ITEM, "bl_item1", NULL, $1, NULL); }
	| statement									{ $$ = buildNode(BLOCK_ITEM, "bl_item2", NULL, $1, NULL); }
	;

expression_statement
	: ';'										{ $$ = buildNode(EXPRESSION_STATEMENT, "exp_st1", NULL, NULL, NULL); }
	| expression ';'								{ $$ = buildNode(EXPRESSION_STATEMENT, "exp_st2", NULL, $1, NULL); }
	;

selection_statement
	: IF '(' expression ')' statement						{ $$ = buildNode(SELECTION_STATEMENT, "sel_st1", NULL, $3, $5); }
	| IF_WITH_ELSE '(' expression ')' statement ELSE statement			{ $$ = buildFullNode(SELECTION_STATEMENT, "sel_st2", NULL, NULL, NULL, $3, $5, $7); }
	| SWITCH '(' expression ')' statement						{ $$ = buildNode(SELECTION_STATEMENT, "sel_st3", NULL, $3, $5); }
	;

iteration_statement
	: WHILE '(' expression ')' statement						{ $$ = buildNode(ITERATION_STATEMENT, "iter_st1", "while(", $3, $5); }
	| DO statement WHILE '(' expression ')' ';'					{ $$ = buildNode(ITERATION_STATEMENT, "iter_st2", "do", $2, $5); }
	| FOR '(' expression_statement expression_statement expression ')' statement	{ $$ = buildFullNode(ITERATION_STATEMENT, "iter_st3", "for(", $7, NULL, $3, $4, $5); }
	;

jump_statement
	: CONTINUE ';'									{ $$ = buildNode(JUMP_STATEMENT, "jmp_st1", "continue", NULL, NULL); }
	| BREAK ';'									{ $$ = buildNode(JUMP_STATEMENT, "jmp_st2", "break", NULL, NULL); }
	| RETURN ';'									{ $$ = buildNode(JUMP_STATEMENT, "jmp_st3", "return", NULL, NULL); }
	| RETURN expression ';'								{ $$ = buildNode(JUMP_STATEMENT, "jmp_st4", "return", $2, NULL); }
	;

translation_unit
	: external_declaration								{ root = $$ = buildNode(TRANSLATION_UNIT, "tr_un1", NULL, $1, NULL); }
	| translation_unit external_declaration						{ $$ = buildNode(TRANSLATION_UNIT, "tr_un2", NULL, $1, $2); }
	;

external_declaration
	: function_definition								
	| declaration									
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement		{ $$ = buildFullNode(FUNCTION_DEFINITION, "func1", NULL, $1, $2, $3, $4, NULL); }
	| declaration_specifiers declarator compound_statement				{ $$ = buildFullNode(FUNCTION_DEFINITION, "func2", NULL, NULL, NULL, $1, $2, $3); }
	;

declaration_list
	: declaration									
	| declaration_list declaration							{ $$ = buildNode(DECLARATION_LIST, "decl_list1", NULL, $1, $2); }
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
  analyze(root);
}
