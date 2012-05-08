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

%token SIZEOF CASE DEFAULT IF IF_WITH_ELSE ELSE SWITCH WHILE DO FOR CONTINUE BREAK RETURN

%type<TEXT> type_specifier type_name unary_operator assignment_operator designator designator_list designation

%type<NODE> primary_expression postfix_expression argument_expression_list unary_expression cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression expression declaration declaration_specifiers init_declarator_list init_declarator specifier_qualifier_list declarator direct_declarator parameter_type_list parameter_declaration identifier_list abstract_declarator initializer initializer_list labeled_statement compound_statement block_item_list block_item expression_statement selection_statement iteration_statement jump_statement translation_unit external_declaration function_definition declaration_list

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
	: IDENTIFIER 									{ $$ = buildNode(PRIMARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| CONSTANT_INT									{ $$ = buildNode(PRIMARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| CONSTANT_FRAC									{ $$ = buildNode(PRIMARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| STRING_LITERAL								{ $$ = buildNode(PRIMARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| '(' expression ')'								{ $$ = buildNode(PRIMARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

postfix_expression
	: primary_expression								{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| postfix_expression '[' expression ']'						{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| postfix_expression '(' ')'							{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| postfix_expression '(' argument_expression_list ')'				{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| postfix_expression '.' IDENTIFIER						{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| postfix_expression INCREMENT							{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| postfix_expression DECREMENT							{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| '(' type_name ')' '{' initializer_list '}'					{ $$ = buildNode(POSTFIX_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

argument_expression_list
	: assignment_expression								{ $$ = buildNode(ARGUMENT_EXPRESSION_LIST, "id1", "", NULL, NULL, $$); }
	| argument_expression_list ',' assignment_expression				{ $$ = buildNode(ARGUMENT_EXPRESSION_LIST, "id1", "", NULL, NULL, $$); }
	;

unary_expression
	: postfix_expression								{ $$ = buildNode(UNARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| INCREMENT unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| DECREMENT unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| unary_operator cast_expression						{ $$ = buildNode(UNARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| SIZEOF unary_expression							{ $$ = buildNode(UNARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| SIZEOF '(' type_name ')'							{ $$ = buildNode(UNARY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

unary_operator
	: '&'										{ $$ = buildNode(UNARY_OPERATOR, "id1", "", NULL, NULL, $$); }
	| '*'										{ $$ = buildNode(UNARY_OPERATOR, "id1", "", NULL, NULL, $$); }
	| '+'										{ $$ = buildNode(UNARY_OPERATOR, "id1", "", NULL, NULL, $$); }
	| '-'										{ $$ = buildNode(UNARY_OPERATOR, "id1", "", NULL, NULL, $$); }
	| '~'										{ $$ = buildNode(UNARY_OPERATOR, "id1", "", NULL, NULL, $$); }
	| '!'										{ $$ = buildNode(UNARY_OPERATOR, "id1", "", NULL, NULL, $$); }
	;

cast_expression
	: unary_expression								{ $$ = buildNode(CAST_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| '(' type_name ')' cast_expression						{ $$ = buildNode(CAST_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

multiplicative_expression
	: cast_expression								{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| multiplicative_expression '*' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| multiplicative_expression '/' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| multiplicative_expression '%' cast_expression					{ $$ = buildNode(MULTIPLICATIVE_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

additive_expression
	: multiplicative_expression							{ $$ = buildNode(ADDITIVE_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| additive_expression '+' multiplicative_expression				{ $$ = buildNode(ADDITIVE_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| additive_expression '-' multiplicative_expression				{ $$ = buildNode(ADDITIVE_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

shift_expression
	: additive_expression								{ $$ = buildNode(SHIFT_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| shift_expression SHIFT_LEFT additive_expression				{ $$ = buildNode(SHIFT_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| shift_expression SHIFT_RIGHT additive_expression				{ $$ = buildNode(SHIFT_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

relational_expression
	: shift_expression								{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| relational_expression '<' shift_expression					{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| relational_expression '>' shift_expression					{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| relational_expression LESS_OR_EQUAL shift_expression				{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| relational_expression GREATER_OR_EQUAL shift_expression			{ $$ = buildNode(RELATIONAL_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

equality_expression
	: relational_expression								{ $$ = buildNode(EQUALITY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| equality_expression EQUAL relational_expression				{ $$ = buildNode(EQUALITY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| equality_expression NOT_EQUAL relational_expression				{ $$ = buildNode(EQUALITY_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

and_expression
	: equality_expression								{ $$ = buildNode(AND_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| and_expression '&' equality_expression					{ $$ = buildNode(AND_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

exclusive_or_expression
	: and_expression								{ $$ = buildNode(EXCLUSIVE_OR_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| exclusive_or_expression '^' and_expression					{ $$ = buildNode(EXCLUSIVE_OR_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

inclusive_or_expression
	: exclusive_or_expression							{ $$ = buildNode(INCLUSIVE_OR_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| inclusive_or_expression '|' exclusive_or_expression				{ $$ = buildNode(INCLUSIVE_OR_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

logical_and_expression
	: inclusive_or_expression							{ $$ = buildNode(LOGICAL_AND_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| logical_and_expression AND inclusive_or_expression				{ $$ = buildNode(LOGICAL_AND_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

logical_or_expression
	: logical_and_expression							{ $$ = buildNode(LOGICAL_OR_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| logical_or_expression OR logical_and_expression				{ $$ = buildNode(LOGICAL_OR_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

conditional_expression
	: logical_or_expression								{ $$ = buildNode(CONDITIONAL_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| logical_or_expression '?' expression ':' conditional_expression		{ $$ = buildNode(CONDITIONAL_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

assignment_expression
	: conditional_expression							{ $$ = buildNode(ASSIGNMENT_EXPRESSION, "id1", "", NULL, NULL, $$); }
	| unary_expression assignment_operator assignment_expression			{ $$ = buildNode(ASSIGNMENT_EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

assignment_operator
	: '='										{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| MUL_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| DIV_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| MOD_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| ADD_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| SUB_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| LEFT_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| RIGHT_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| AND_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| XOR_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	| OR_ASSIGN									{ $$ = buildNode(ASSIGNMENT_OPERATOR, "id1", "", NULL, NULL, $$); }
	;

expression
	: assignment_expression								{ $$ = buildNode(EXPRESSION, "id1", "", NULL, NULL, $$); }
	| expression ',' assignment_expression						{ $$ = buildNode(EXPRESSION, "id1", "", NULL, NULL, $$); }
	;

declaration
	: declaration_specifiers ';'							{ $$ = buildNode(DECLARATION, "id1", "", NULL, NULL, $$); }
	| declaration_specifiers init_declarator_list ';'				{ $$ = buildNode(DECLARATION, "id1", "", NULL, NULL, $$); }
	;

declaration_specifiers
	: type_specifier								{ $$ = buildNode(DECLARATION_SPECIFIERS, "id1", "", NULL, NULL, $$); }
	| type_specifier declaration_specifiers						{ $$ = buildNode(DECLARATION_SPECIFIERS, "id1", "", NULL, NULL, $$); }
	;

init_declarator_list
	: init_declarator								{ $$ = buildNode(INIT_DECLARATOR_LIST, "id1", "", NULL, NULL, $$); }
	| init_declarator_list ',' init_declarator					{ $$ = buildNode(INIT_DECLARATOR_LIST, "id1", "", NULL, NULL, $$); }
	;

init_declarator
	: declarator									{ $$ = buildNode(INIT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| declarator '=' initializer							{ $$ = buildNode(INIT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	;

type_specifier
	: VOID										{ $$ = buildNode(TYPE_SPECIFIER, "id1", "", NULL, NULL, $$); }
	| CHAR										{ $$ = buildNode(TYPE_SPECIFIER, "id1", "", NULL, NULL, $$); }
	| INT										{ $$ = buildNode(TYPE_SPECIFIER, "id1", "", NULL, NULL, $$); }
	| LONG										{ $$ = buildNode(TYPE_SPECIFIER, "id1", "", NULL, NULL, $$); }
	| FLOAT										{ $$ = buildNode(TYPE_SPECIFIER, "id1", "", NULL, NULL, $$); }
	| DOUBLE									{ $$ = buildNode(TYPE_SPECIFIER, "id1", "", NULL, NULL, $$); }
	| TYPE_NAME									{ $$ = buildNode(TYPE_SPECIFIER, "id1", "", NULL, NULL, $$); }
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list					{ $$ = buildNode(SPECIFIER_QUALIFIER_LIST, "id1", "", NULL, NULL, $$); }
	| type_specifier								{ $$ = buildNode(SPECIFIER_QUALIFIER_LIST, "id1", "", NULL, NULL, $$); }
	;

declarator
	: direct_declarator								{ $$ = buildNode(DECLARATOR, "id1", "", NULL, NULL, $$); }
	;


direct_declarator
	: IDENTIFIER									{ $$ = buildNode(DIRECT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| '(' declarator ')'								{ $$ = buildNode(DIRECT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| direct_declarator '[' assignment_expression ']'				{ $$ = buildNode(DIRECT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| direct_declarator '[' ']'							{ $$ = buildNode(DIRECT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| direct_declarator '(' parameter_type_list ')'					{ $$ = buildNode(DIRECT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| direct_declarator '(' identifier_list ')'					{ $$ = buildNode(DIRECT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| direct_declarator '(' ')'							{ $$ = buildNode(DIRECT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	;

parameter_type_list
	: parameter_list								{ $$ = buildNode(PARAMETER_TYPE_LIST, "id1", "", NULL, NULL, $$); }
	;

parameter_list
	: parameter_declaration								{ $$ = buildNode(PARAMETER_LIST, "id1", "", NULL, NULL, $$); }
	| parameter_list ',' parameter_declaration					{ $$ = buildNode(PARAMETER_LIST, "id1", "", NULL, NULL, $$); }
	;

parameter_declaration
	: declaration_specifiers declarator						{ $$ = buildNode(PARAMETER_DECLARATION, "id1", "", NULL, NULL, $$); }
	| declaration_specifiers abstract_declarator					{ $$ = buildNode(PARAMETER_DECLARATION, "id1", "", NULL, NULL, $$); }
	| declaration_specifiers							{ $$ = buildNode(PARAMETER_DECLARATION, "id1", "", NULL, NULL, $$); }
	;

identifier_list
	: IDENTIFIER									{ $$ = buildNode(IDENTIFIER_LIST, "id1", "", NULL, NULL, $$); }
	| identifier_list ',' IDENTIFIER						{ $$ = buildNode(IDENTIFIER_LIST, "id1", "", NULL, NULL, $$); }
	;

type_name
	: specifier_qualifier_list							{ $$ = buildNode(TYPE_NAME, "id1", "", NULL, NULL, $$); }
	| specifier_qualifier_list abstract_declarator					{ $$ = buildNode(TYPE_NAME, "id1", "", NULL, NULL, $$); }
	;

abstract_declarator
	: '(' abstract_declarator ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| '[' ']'									{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| '[' assignment_expression ']'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| abstract_declarator '[' ']'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| abstract_declarator '[' assignment_expression ']'				{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| '(' ')'									{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| '(' parameter_type_list ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| abstract_declarator '(' ')'							{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	| abstract_declarator '(' parameter_type_list ')'				{ $$ = buildNode(ABSTRACT_DECLARATOR, "id1", "", NULL, NULL, $$); }
	;

initializer
	: assignment_expression								{ $$ = buildNode(INITIALIZER, "id1", "", NULL, NULL, $$); }
	| '{' initializer_list '}'							{ $$ = buildNode(INITIALIZER, "id1", "", NULL, NULL, $$); }
	| '{' initializer_list ',' '}'							{ $$ = buildNode(INITIALIZER, "id1", "", NULL, NULL, $$); }
	;

initializer_list
	: initializer									{ $$ = buildNode(INITIALIZER_LIST, "id1", "", NULL, NULL, $$); }
	| designation initializer							{ $$ = buildNode(INITIALIZER_LIST, "id1", "", NULL, NULL, $$); }
	| initializer_list ',' initializer						{ $$ = buildNode(INITIALIZER_LIST, "id1", "", NULL, NULL, $$); }
	| initializer_list ',' designation initializer					{ $$ = buildNode(INITIALIZER_LIST, "id1", "", NULL, NULL, $$); }
	;

designation
	: designator_list '='								{ $$ = buildNode(DESIGNATION, "id1", "", NULL, NULL, $$); }
	;

designator_list
	: designator									{ $$ = buildNode(DESIGNATOR_LIST, "id1", "", NULL, NULL, $$); }
	| designator_list designator							{ $$ = buildNode(DESIGNATOR_LIST, "id1", "", NULL, NULL, $$); }
	;

designator
	: '[' conditional_expression ']'						{ $$ = buildNode(DESIGNATOR, "id1", "", NULL, NULL, $$); }
	| '.' IDENTIFIER								{ $$ = buildNode(DESIGNATOR, "id1", "", NULL, NULL, $$); }
	;

statement
	: labeled_statement								{ $$ = buildNode(STATEMENT, "id1", "", NULL, NULL, $$); }
	| compound_statement								{ $$ = buildNode(STATEMENT, "id1", "", NULL, NULL, $$); }
	| expression_statement								{ $$ = buildNode(STATEMENT, "id1", "", NULL, NULL, $$); }
	| selection_statement								{ $$ = buildNode(STATEMENT, "id1", "", NULL, NULL, $$); }
	| iteration_statement								{ $$ = buildNode(STATEMENT, "id1", "", NULL, NULL, $$); }
	| jump_statement								{ $$ = buildNode(STATEMENT, "id1", "", NULL, NULL, $$); }
	;

labeled_statement
	: CASE conditional_expression ':' statement					{ $$ = buildNode(LABELED_STATEMENT, "id1", "", NULL, NULL, $$); }
	| DEFAULT ':' statement								{ $$ = buildNode(LABELED_STATEMENT, "id1", "", NULL, NULL, $$); }
	;

compound_statement
	: '{' '}'									{ $$ = buildNode(COMPOUND_STATEMENT, "id1", "", NULL, NULL, $$); }
	| '{' block_item_list '}'							{ $$ = buildNode(COMPOUND_STATEMENT, "id1", "", NULL, NULL, $$); }
	;

block_item_list
	: block_item									{ $$ = buildNode(BLOCK_ITEM_LIST, "id1", "", NULL, NULL, $$); }
	| block_item_list block_item							{ $$ = buildNode(BLOCK_ITEM_LIST, "id1", "", NULL, NULL, $$); }
	;

block_item
	: error ';'									{ $$ = buildNode(BLOCK_ITEM, "id1", "", NULL, NULL, $$); }
	| declaration									{ $$ = buildNode(BLOCK_ITEM, "id1", "", NULL, NULL, $$); }
	| statement									{ $$ = buildNode(BLOCK_ITEM, "id1", "", NULL, NULL, $$); }
	;

expression_statement
	: ';'										{ $$ = buildNode(EXPRESSION_STATEMENT, "id1", "", NULL, NULL, $$); }
	| expression ';'								{ $$ = buildNode(EXPRESSION_STATEMENT, "id1", "", NULL, NULL, $$); }
	;

selection_statement
	: IF '(' expression ')' statement						{ $$ = buildNode(SELECTION_STATEMENT, "id1", "", NULL, NULL, $$); }
	| IF_WITH_ELSE '(' expression ')' statement ELSE statement			{ $$ = buildNode(SELECTION_STATEMENT, "id1", "", NULL, NULL, $$); }
	| SWITCH '(' expression ')' statement						{ $$ = buildNode(SELECTION_STATEMENT, "id1", "", NULL, NULL, $$); }
	;

iteration_statement
	: WHILE '(' expression ')' statement						{ $$ = buildNode(ITERATION_STATEMENT, "id1", "", NULL, NULL, $$); }
	| DO statement WHILE '(' expression ')' ';'					{ $$ = buildNode(ITERATION_STATEMENT, "id1", "", NULL, NULL, $$); }
	| FOR '(' expression_statement expression_statement expression ')' statement	{ $$ = buildNode(ITERATION_STATEMENT, "id1", "", NULL, NULL, $$); }
	;

jump_statement
	: CONTINUE ';'									{ $$ = buildNode(JUMP_STATEMENT, "id1", "", NULL, NULL, $$); }
	| BREAK ';'									{ $$ = buildNode(JUMP_STATEMENT, "id1", "", NULL, NULL, $$); }
	| RETURN ';'									{ $$ = buildNode(JUMP_STATEMENT, "id1", "", NULL, NULL, $$); }
	| RETURN expression ';'								{ $$ = buildNode(JUMP_STATEMENT, "id1", "", NULL, NULL, $$); }
	;

translation_unit
	: external_declaration								{ $$ = buildNode(TRANSLATION_UNIT, "id1", "", NULL, NULL, $$); }
	| translation_unit external_declaration						{ $$ = buildNode(TRANSLATION_UNIT, "id1", "", NULL, NULL, $$); }
	;

external_declaration
	: function_definition								{ $$ = buildNode(EXTERNAL_DECLARATION, "id1", "", NULL, NULL, $$); }
	| declaration									{ $$ = buildNode(EXTERNAL_DECLARATION, "id1", "", NULL, NULL, $$); }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement		{ $$ = buildNode(FUNCTION_DEFINITION, "id1", "", NULL, NULL, $$); }
	| declaration_specifiers declarator compound_statement				{ $$ = buildNode(FUNCTION_DEFINITION, "id1", "", NULL, NULL, $$); }
	;

declaration_list
	: declaration									{ $$ = buildNode(DECLARATION_LIST, "id1", "", NULL, NULL, $$); }
	| declaration_list declaration							{ $$ = buildNode(DECLARATION_LIST, "id1", "", NULL, NULL, $$); }
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
