/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TYPE_NAME = 258,
     IDENTIFIER = 259,
     CONSTANT_INT = 260,
     CONSTANT_FRAC = 261,
     STRING_LITERAL = 262,
     INCREMENT = 263,
     DECREMENT = 264,
     SHIFT_LEFT = 265,
     SHIFT_RIGHT = 266,
     LESS_OR_EQUAL = 267,
     GREATER_OR_EQUAL = 268,
     EQUAL = 269,
     NOT_EQUAL = 270,
     AND = 271,
     OR = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     CHAR = 283,
     INT = 284,
     LONG = 285,
     FLOAT = 286,
     DOUBLE = 287,
     VOID = 288,
     SIZEOF = 289,
     CASE = 290,
     DEFAULT = 291,
     IF = 292,
     IF_WITH_ELSE = 293,
     ELSE = 294,
     SWITCH = 295,
     WHILE = 296,
     DO = 297,
     FOR = 298,
     CONTINUE = 299,
     BREAK = 300,
     RETURN = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 19 "nyelv.y"

	a_node* NODE;
	char* TEXT;



/* Line 2068 of yacc.c  */
#line 103 "nyelv.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


