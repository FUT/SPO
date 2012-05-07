D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]

%{
#include <stdio.h>
#include <string.h>
#include "node.h"
#include "nyelv.tab.h"


void count();
void comment();
%}

%option yylineno
%option noyywrap

%%
"/>"			{ comment(); }
"//"[^\n]*      { /* consume //-comment */ }


"break"			{ count(); return(BREAK); }
"case"			{ count(); return(CASE); }
"char"			{ count(); return(CHAR); }
"continue"		{ count(); return(CONTINUE); }
"default"		{ count(); return(DEFAULT); }
"do"			{ count(); return(DO); }
"double"		{ count(); return(DOUBLE); }
"else"			{ count(); return(ELSE); }
"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }
"if"			{ count(); return(IF); }
"if_with_else"		{ count(); return(IF_WITH_ELSE); }
"int"			{ count(); return(INT); }
"long"			{ count(); return(LONG); }
"return"		{ count(); return(RETURN); }
"sizeof"		{ count(); return(SIZEOF); }
"switch"		{ count(); return(SWITCH); }
"void"			{ count(); return(VOID); }
"while"			{ count(); return(WHILE); }

{L}({L}|{D})*	{  yylval.TEXT = strdup(yytext); count(); return(IDENTIFIER); }

{D}+		    { yylval.TEXT = strdup(yytext); count(); return(IDENTIFIER); return(CONSTANT_INT); }
{D}+"."{D}+	{ yylval.TEXT = strdup(yytext); count(); return(CONSTANT_FRAC); }

\"(\\.|[^\\"\n])*\"	    { yylval.TEXT = strdup(yytext); count(); return(STRING_LITERAL); }

">>="			{ count(); return(RIGHT_ASSIGN); }
"<<="			{ count(); return(LEFT_ASSIGN); }
"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }
">>"			{ count(); return(SHIFT_RIGHT); }
"<<"			{ count(); return(SHIFT_LEFT); }
"++"			{ count(); return(INCREMENT); }
"--"			{ count(); return(DECREMENT); }
"&&"			{ count(); return(AND); }
"||"			{ count(); return(OR); }
"<="			{ count(); return(LESS_OR_EQUAL); }
">="			{ count(); return(GREATER_OR_EQUAL); }
"=="			{ count(); return(EQUAL); }
"!="			{ count(); return(NOT_EQUAL); }
";"			    { count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","			    { count(); return(','); }
":"			    { count(); return(':'); }
"="			    { count(); return('='); }
"("			    { count(); return('('); }
")"			    { count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			    { count(); return('.'); }
"&"			    { count(); return('&'); }
"!"			    { count(); return('!'); }
"~"			    { count(); return('~'); }
"-"			    { count(); return('-'); }
"+"			    { count(); return('+'); }
"*"			    { count(); return('*'); }
"/"			    { count(); return('/'); }
"%"			    { count(); return('%'); }
"<"			    { count(); return('<'); }
">"			    { count(); return('>'); }
"^"			    { count(); return('^'); }
"|"			    { count(); return('|'); }
"?"			    { count(); return('?'); }

[ \t\v\n\f]		{ count(); }
.			    { error("UNMATCHED TOKEN!\n"); ECHO; }

%%

void comment()
{
	char c, prev = 0;

	while ((c = input()) != 0)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '<')
			return;
		prev = c;
	}
	error("unterminated comment");
}


int column = 0;

void count() //count error pointer position
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}
