/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "nyelv.y"

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


/* Line 268 of yacc.c  */
#line 88 "nyelv.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 293 of yacc.c  */
#line 20 "nyelv.y"

	a_node* NODE;
	char* TEXT;



/* Line 293 of yacc.c  */
#line 177 "nyelv.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 189 "nyelv.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   781

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNRULES -- Number of states.  */
#define YYNSTATES  282

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,     2,     2,    60,    70,     2,
      65,    66,    58,    56,    69,    57,    64,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    76,
      54,    47,    52,    74,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    73,    78,    71,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    48,    49,    50,    51,    53,    55,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    17,    22,
      26,    31,    35,    38,    41,    43,    47,    49,    52,    55,
      58,    61,    66,    68,    70,    72,    74,    76,    78,    80,
      85,    87,    91,    95,    99,   101,   105,   109,   111,   115,
     119,   121,   125,   129,   133,   137,   139,   143,   147,   149,
     153,   155,   159,   161,   165,   167,   171,   173,   177,   179,
     185,   187,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   219,   222,   226,   228,   231,
     233,   237,   239,   243,   245,   247,   249,   251,   253,   255,
     258,   260,   262,   266,   271,   275,   280,   285,   289,   291,
     295,   298,   301,   303,   305,   309,   311,   314,   318,   321,
     325,   329,   334,   337,   341,   345,   350,   352,   356,   358,
     361,   365,   370,   373,   375,   378,   382,   385,   387,   389,
     391,   393,   395,   397,   402,   406,   409,   413,   415,   418,
     421,   423,   425,   427,   430,   436,   444,   450,   456,   464,
     472,   475,   478,   481,   485,   487,   490,   492,   494,   499,
     503,   505
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     126,     0,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,    65,    99,    66,    -1,    80,    -1,    81,    67,    99,
      68,    -1,    81,    65,    66,    -1,    81,    65,    82,    66,
      -1,    81,    64,     4,    -1,    81,     8,    -1,    81,     9,
      -1,    97,    -1,    82,    69,    97,    -1,    81,    -1,     8,
      83,    -1,     9,    83,    -1,    84,    85,    -1,    34,    83,
      -1,    34,    65,   110,    66,    -1,    70,    -1,    58,    -1,
      56,    -1,    57,    -1,    71,    -1,    61,    -1,    83,    -1,
      65,   110,    66,    85,    -1,    85,    -1,    86,    58,    85,
      -1,    86,    59,    85,    -1,    86,    60,    85,    -1,    86,
      -1,    87,    56,    86,    -1,    87,    57,    86,    -1,    87,
      -1,    88,    10,    87,    -1,    88,    11,    87,    -1,    88,
      -1,    89,    54,    88,    -1,    89,    52,    88,    -1,    89,
      12,    88,    -1,    89,    13,    88,    -1,    89,    -1,    90,
      14,    89,    -1,    90,    15,    89,    -1,    90,    -1,    91,
      70,    90,    -1,    91,    -1,    92,    72,    91,    -1,    92,
      -1,    93,    73,    92,    -1,    93,    -1,    94,    16,    93,
      -1,    94,    -1,    95,    17,    94,    -1,    95,    -1,    95,
      74,    99,    75,    96,    -1,    96,    -1,    83,    98,    97,
      -1,    47,    -1,    18,    -1,    19,    -1,    20,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    97,    -1,    99,    69,    97,    -1,   101,
      76,    -1,   101,   102,    76,    -1,   104,    -1,   104,   101,
      -1,   103,    -1,   102,    69,   103,    -1,   106,    -1,   106,
      47,   112,    -1,    33,    -1,    28,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,   104,   105,    -1,   104,    -1,
       4,    -1,    65,   106,    66,    -1,   106,    67,    97,    68,
      -1,   106,    67,    68,    -1,   106,    65,   107,    66,    -1,
     106,    65,   109,    66,    -1,   106,    65,    66,    -1,   108,
      -1,   107,    69,   108,    -1,   101,   106,    -1,   101,   111,
      -1,   101,    -1,     4,    -1,   109,    69,     4,    -1,   105,
      -1,   105,   111,    -1,    65,   111,    66,    -1,    67,    68,
      -1,    67,    97,    68,    -1,   111,    67,    68,    -1,   111,
      67,    97,    68,    -1,    65,    66,    -1,    65,   107,    66,
      -1,   111,    65,    66,    -1,   111,    65,   107,    66,    -1,
      97,    -1,    77,   113,    78,    -1,   112,    -1,   114,   112,
      -1,   113,    69,   112,    -1,   113,    69,   114,   112,    -1,
     115,    47,    -1,   116,    -1,   115,   116,    -1,    67,    96,
      68,    -1,    64,     4,    -1,   118,    -1,   119,    -1,   122,
      -1,   123,    -1,   124,    -1,   125,    -1,    35,    96,    75,
     117,    -1,    36,    75,   117,    -1,    77,    78,    -1,    77,
     120,    78,    -1,   121,    -1,   120,   121,    -1,     1,    76,
      -1,   100,    -1,   117,    -1,    76,    -1,    99,    76,    -1,
      37,    65,    99,    66,   117,    -1,    38,    65,    99,    66,
     117,    39,   117,    -1,    40,    65,    99,    66,   117,    -1,
      41,    65,    99,    66,   117,    -1,    42,   117,    41,    65,
      99,    66,    76,    -1,    43,    65,   122,   122,    99,    66,
     117,    -1,    44,    76,    -1,    45,    76,    -1,    46,    76,
      -1,    46,    99,    76,    -1,   127,    -1,   126,   127,    -1,
     128,    -1,   100,    -1,   101,   106,   129,   119,    -1,   101,
     106,   119,    -1,   100,    -1,   129,   100,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    52,    56,    57,    58,
      59,    60,    61,    62,    66,    67,    71,    72,    73,    74,
      75,    76,    80,    81,    82,    83,    84,    85,    89,    90,
      94,    95,    96,    97,   101,   102,   103,   107,   108,   109,
     113,   114,   115,   116,   117,   121,   122,   123,   127,   128,
     132,   133,   137,   138,   142,   143,   147,   148,   152,   153,
     157,   158,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   176,   177,   181,   182,   186,   187,   191,
     192,   196,   197,   201,   202,   203,   204,   205,   206,   210,
     211,   215,   216,   217,   218,   219,   220,   221,   225,   226,
     230,   231,   232,   236,   237,   241,   242,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   258,   259,   263,   264,
     265,   266,   270,   274,   275,   279,   280,   284,   285,   286,
     287,   288,   289,   293,   294,   298,   299,   303,   304,   308,
     309,   310,   314,   315,   319,   320,   321,   325,   326,   327,
     331,   332,   333,   334,   338,   339,   343,   344,   348,   349,
     353,   354
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE_NAME", "IDENTIFIER",
  "CONSTANT_INT", "CONSTANT_FRAC", "STRING_LITERAL", "INCREMENT",
  "DECREMENT", "SHIFT_LEFT", "SHIFT_RIGHT", "LESS_OR_EQUAL",
  "GREATER_OR_EQUAL", "EQUAL", "NOT_EQUAL", "AND", "OR", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "CHAR", "INT",
  "LONG", "FLOAT", "DOUBLE", "VOID", "SIZEOF", "CASE", "DEFAULT", "IF",
  "IF_WITH_ELSE", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "CONTINUE",
  "BREAK", "RETURN", "'='", "\"||\"", "\"&&\"", "\"==\"", "\"!=\"", "'>'",
  "\">=\"", "'<'", "\"<=\"", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "\"++\"", "\"--\"", "'.'", "'('", "')'", "'['", "']'", "','", "'&'",
  "'~'", "'^'", "'|'", "'?'", "':'", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "specifier_qualifier_list", "declarator", "parameter_type_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "initializer", "initializer_list", "designation",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    61,   302,   303,
     304,   305,    62,   306,    60,   307,    43,    45,    42,    47,
      37,    33,   308,   309,    46,    40,    41,    91,    93,    44,
      38,   126,    94,   124,    63,    58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    86,    87,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     113,   113,   114,   115,   115,   116,   116,   117,   117,   117,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     129,   129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     3,     1,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     3,     2,     3,
       3,     4,     2,     3,     3,     4,     1,     3,     1,     2,
       3,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     4,     3,     2,     3,     1,     2,     2,
       1,     1,     1,     2,     5,     7,     5,     5,     7,     7,
       2,     2,     2,     3,     1,     2,     1,     1,     4,     3,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    84,    85,    86,    87,    88,    83,   157,     0,    77,
       0,   154,   156,    91,     0,    75,     0,    79,    81,    78,
       1,   155,     0,     0,    76,     0,     0,     0,     0,   160,
       0,   159,     0,    92,    80,    81,     2,     3,     4,     5,
       0,     0,     0,    24,    25,    23,    27,     0,    22,    26,
       0,     7,    16,    28,     0,    30,    34,    37,    40,    45,
      48,    50,    52,    54,    56,    58,    60,   116,    82,   103,
      97,   102,     0,    98,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
     135,    73,     0,   140,   141,   127,   128,     0,   137,   129,
     130,   131,   132,   161,   158,     0,    17,    18,     0,    20,
       0,    90,   105,     0,     0,     0,   118,     0,     0,     0,
     123,    12,    13,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    62,     0,    28,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,    95,     0,    96,     0,    93,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
       0,     0,   143,   136,   138,     0,     6,    89,     0,   106,
       0,   126,     0,     0,   117,   119,   122,   124,    11,     9,
       0,    14,     0,    61,    31,    32,    33,    35,    36,    38,
      39,    43,    44,    42,    41,    46,    47,    49,    51,    53,
      55,    57,     0,   112,     0,     0,   108,     0,     0,     0,
      99,   104,     0,   134,     0,     0,     0,     0,     0,     0,
     153,    74,    21,    29,   125,   120,     0,    10,     0,     8,
       0,   113,   107,   109,   114,     0,   110,     0,   133,     0,
       0,     0,     0,     0,     0,   121,    15,    59,   115,   111,
     144,     0,   146,   147,     0,     0,     0,     0,     0,   145,
     148,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    51,    52,   200,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    91,   137,
      92,     7,    71,    16,    17,     9,   112,    22,   224,    73,
      74,   113,   225,    68,   117,   118,   119,   120,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    10,    11,    12,
      32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -169
static const yytype_int16 yypact[] =
{
     289,  -169,  -169,  -169,  -169,  -169,  -169,  -169,    -3,   289,
     283,  -169,  -169,  -169,    11,  -169,    15,  -169,   168,  -169,
    -169,  -169,   203,    11,  -169,   420,   129,   578,   221,  -169,
      -3,  -169,   208,  -169,  -169,   -37,  -169,  -169,  -169,  -169,
      61,    61,   694,  -169,  -169,  -169,  -169,   567,  -169,  -169,
     388,  -169,   107,   413,   710,  -169,   229,   186,    24,    46,
     287,   -58,   -24,   -30,    44,     3,  -169,  -169,  -169,  -169,
    -169,    29,    14,  -169,    54,  -169,     4,     6,   710,    10,
      27,    38,    48,    60,   344,    69,    33,    89,   462,  -169,
    -169,  -169,    28,  -169,  -169,  -169,  -169,   299,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,   710,  -169,  -169,   567,  -169,
      55,   289,   258,   103,   169,   710,  -169,   -29,   420,   -38,
    -169,  -169,  -169,   172,   599,   710,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,   710,  -169,  -169,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,    23,
     610,   259,   294,  -169,   289,  -169,   181,  -169,  -169,   128,
     344,   710,   710,   710,   710,   183,   494,  -169,  -169,  -169,
      32,   710,  -169,  -169,  -169,   147,  -169,  -169,   151,   294,
     710,  -169,   164,   388,  -169,  -169,  -169,  -169,  -169,  -169,
      97,  -169,   278,  -169,  -169,  -169,  -169,   229,   229,   186,
     186,    24,    24,    24,    24,    46,    46,   287,   -58,   -24,
     -30,    44,   -12,  -169,   101,   228,  -169,   180,   243,   678,
    -169,  -169,   344,  -169,   109,   136,   143,   145,   195,   494,
    -169,  -169,  -169,  -169,  -169,  -169,   420,  -169,   710,  -169,
     710,  -169,  -169,  -169,  -169,   165,  -169,   212,  -169,   344,
     344,   344,   344,   710,   710,  -169,  -169,  -169,  -169,  -169,
    -169,   251,  -169,  -169,   178,   215,   344,   234,   344,  -169,
    -169,  -169
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,  -169,    -4,  -169,   -35,   219,   220,    40,
     216,   185,   142,   199,   202,   214,  -169,   -73,   -25,  -169,
     -44,   -11,    13,  -169,   349,   -33,   262,    16,   -22,   210,
    -169,   275,   -65,   -39,  -169,   198,  -169,   279,   -68,  -169,
       0,  -169,   302,  -168,  -169,  -169,  -169,  -169,   393,  -169,
    -169
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      67,    13,    76,   110,    72,   169,   162,    29,   239,   196,
      25,   116,   153,     8,   111,    13,   175,    93,    31,   139,
     157,   103,    19,     8,    18,    67,   114,    13,    26,   115,
      27,    30,   104,    13,   145,   146,   106,   107,   109,    35,
     193,    30,   192,   155,   180,    30,    35,   189,   154,   194,
     138,     1,     2,     3,     4,     5,     6,   181,   147,   148,
     156,   110,    14,   250,   110,    36,    37,    38,    39,    40,
      41,   264,   167,    15,   138,   111,    14,   158,   111,   195,
     163,   202,   168,   164,    23,   170,    93,   161,   159,   223,
     160,    24,   171,    67,   159,    42,   160,   181,   149,   201,
     150,   181,   233,   172,   182,   204,   205,   206,   240,   177,
      30,   138,   203,   173,   222,   121,   122,    43,    44,    45,
     165,   186,    46,   166,   181,   174,   105,   234,   235,   236,
     237,    48,    49,    69,   176,   227,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   245,   243,   241,     1,     2,     3,
       4,     5,     6,   247,   258,   178,   248,   251,    67,   190,
     164,   123,   124,   191,   125,   259,   198,   267,   181,     1,
       2,     3,     4,     5,     6,   231,   138,   211,   212,   213,
     214,   270,   271,   272,   273,    70,     1,     2,     3,     4,
       5,     6,   260,   232,   257,   181,   255,   265,   279,   261,
     281,   262,   181,   242,   181,    25,   188,   223,   160,   274,
     275,    67,    77,   266,   238,    36,    37,    38,    39,    40,
      41,   268,   244,    26,   164,    27,     1,     2,     3,     4,
       5,     6,   143,   144,   277,    28,   138,   181,   253,     1,
       2,     3,     4,     5,     6,    42,    78,    79,    80,    81,
     263,    82,    83,    84,    85,    86,    87,    88,    26,    33,
      27,     1,     2,     3,     4,     5,     6,    43,    44,    45,
     269,   278,    46,    20,   181,    28,    47,   140,   141,   142,
     276,    48,    49,   228,   252,   229,   218,    89,    28,    90,
      77,   151,   152,    36,    37,    38,    39,    40,    41,   254,
     280,     1,     2,     3,     4,     5,     6,     1,     2,     3,
       4,     5,     6,   188,    26,   160,    27,     1,     2,     3,
       4,     5,     6,    42,    78,    79,    80,    81,   217,    82,
      83,    84,    85,    86,    87,    88,   249,   181,    36,    37,
      38,    39,    40,    41,   219,    43,    44,    45,   220,   228,
      46,   229,   207,   208,    47,   209,   210,   215,   216,    48,
      49,   221,    34,   187,   230,    89,    28,   183,    42,    78,
      79,    80,    81,   185,    82,    83,    84,    85,    86,    87,
      88,   246,    36,    37,    38,    39,    40,    41,   197,   184,
      43,    44,    45,    21,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
      89,    28,    42,     0,    36,    37,    38,    39,    40,    41,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     0,     0,     0,    43,    44,    45,     0,     0,    46,
       0,     0,   114,    47,    42,   115,     0,     0,    48,    49,
     136,     0,     0,     0,     0,    50,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,    43,    44,    45,     0,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,    42,    50,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,     0,     0,    46,     0,     0,     0,    47,    42,     0,
       0,     0,    48,    49,     0,     0,     0,     0,   179,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,     0,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,    48,    49,     0,     0,     0,     0,
      89,    36,    37,    38,    39,    40,    41,     0,     0,     0,
       0,     0,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       6,    42,     0,    36,    37,    38,    39,    40,    41,     0,
       0,     0,    42,     0,    36,    37,    38,    39,    40,    41,
       0,     0,     0,    43,    44,    45,     0,     0,    46,     0,
       0,     0,    47,    42,    43,    44,    45,    48,    49,    46,
       0,     0,     0,    47,    42,     0,    75,     0,    48,    49,
       0,     0,     0,     0,     0,    43,    44,    45,     0,     0,
      46,     0,     0,     0,    47,   199,    43,    44,    45,    48,
      49,    46,     0,     0,     0,    47,     0,     0,   226,     0,
      48,    49,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
      38,    39,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,    36,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,    43,    44,    45,     0,     0,    46,
       0,     0,     0,    47,    42,     0,   256,     0,    48,    49,
      43,    44,    45,     0,     0,    46,     0,     0,     0,   108,
       0,     0,     0,     0,    48,    49,    43,    44,    45,     0,
       0,    46,     0,     0,     0,    47,     0,     0,     0,     0,
      48,    49
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-169))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      25,     4,    27,    47,    26,    78,    71,    18,   176,    47,
      47,    50,    70,     0,    47,     4,    84,    28,    18,    54,
      17,    32,     9,    10,     8,    50,    64,     4,    65,    67,
      67,    18,    32,     4,    10,    11,    40,    41,    42,    23,
      69,    28,   115,    73,    88,    32,    30,   112,    72,    78,
      54,    28,    29,    30,    31,    32,    33,    69,    12,    13,
      16,   105,    65,    75,   108,     4,     5,     6,     7,     8,
       9,   239,    68,    76,    78,   108,    65,    74,   111,   118,
      66,   125,    76,    69,    69,    75,    97,    71,    65,    66,
      67,    76,    65,   118,    65,    34,    67,    69,    52,   124,
      54,    69,   170,    65,    76,   140,   141,   142,    76,    76,
      97,   115,   137,    65,   158,     8,     9,    56,    57,    58,
      66,    66,    61,    69,    69,    65,    65,   171,   172,   173,
     174,    70,    71,     4,    65,   160,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   193,   190,   181,    28,    29,    30,
      31,    32,    33,    66,   232,    76,    69,    66,   193,    66,
      69,    64,    65,     4,    67,    66,     4,   250,    69,    28,
      29,    30,    31,    32,    33,     4,   190,   147,   148,   149,
     150,   259,   260,   261,   262,    66,    28,    29,    30,    31,
      32,    33,    66,    75,   229,    69,   228,   246,   276,    66,
     278,    66,    69,    66,    69,    47,    65,    66,    67,   263,
     264,   246,     1,   248,    41,     4,     5,     6,     7,     8,
       9,    66,    68,    65,    69,    67,    28,    29,    30,    31,
      32,    33,    56,    57,    66,    77,   250,    69,    68,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      65,    40,    41,    42,    43,    44,    45,    46,    65,    66,
      67,    28,    29,    30,    31,    32,    33,    56,    57,    58,
      68,    66,    61,     0,    69,    77,    65,    58,    59,    60,
      39,    70,    71,    65,    66,    67,   154,    76,    77,    78,
       1,    14,    15,     4,     5,     6,     7,     8,     9,    66,
      76,    28,    29,    30,    31,    32,    33,    28,    29,    30,
      31,    32,    33,    65,    65,    67,    67,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   153,    40,
      41,    42,    43,    44,    45,    46,    68,    69,     4,     5,
       6,     7,     8,     9,   155,    56,    57,    58,   156,    65,
      61,    67,   143,   144,    65,   145,   146,   151,   152,    70,
      71,   157,    23,   111,   164,    76,    77,    78,    34,    35,
      36,    37,    38,   108,    40,    41,    42,    43,    44,    45,
      46,   193,     4,     5,     6,     7,     8,     9,   119,    97,
      56,    57,    58,    10,    -1,    61,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    77,    34,    -1,     4,     5,     6,     7,     8,     9,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,
      -1,    -1,    64,    65,    34,    67,    -1,    -1,    70,    71,
      47,    -1,    -1,    -1,    -1,    77,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    71,    -1,    -1,    -1,    -1,    34,    77,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    65,    34,    -1,
      -1,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    -1,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    34,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,    -1,
      -1,    -1,    65,    34,    56,    57,    58,    70,    71,    61,
      -1,    -1,    -1,    65,    34,    -1,    68,    -1,    70,    71,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    66,    56,    57,    58,    70,
      71,    61,    -1,    -1,    -1,    65,    -1,    -1,    68,    -1,
      70,    71,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,
      -1,    -1,    -1,    65,    34,    -1,    68,    -1,    70,    71,
      56,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    70,    71,    56,    57,    58,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    32,    33,   100,   101,   104,
     126,   127,   128,     4,    65,    76,   102,   103,   106,   101,
       0,   127,   106,    69,    76,    47,    65,    67,    77,   100,
     101,   119,   129,    66,   103,   106,     4,     5,     6,     7,
       8,     9,    34,    56,    57,    58,    61,    65,    70,    71,
      77,    80,    81,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   112,     4,
      66,   101,   107,   108,   109,    68,    97,     1,    35,    36,
      37,    38,    40,    41,    42,    43,    44,    45,    46,    76,
      78,    97,    99,   100,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   100,   119,    65,    83,    83,    65,    83,
      99,   104,   105,   110,    64,    67,   112,   113,   114,   115,
     116,     8,     9,    64,    65,    67,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    47,    98,    83,    85,
      58,    59,    60,    56,    57,    10,    11,    12,    13,    52,
      54,    14,    15,    70,    72,    73,    16,    17,    74,    65,
      67,   106,   111,    66,    69,    66,    69,    68,    76,    96,
      75,    65,    65,    65,    65,   117,    65,    76,    76,    76,
      99,    69,    76,    78,   121,   110,    66,   105,    65,   111,
      66,     4,    96,    69,    78,   112,    47,   116,     4,    66,
      82,    97,    99,    97,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    90,    91,    92,
      93,    94,    99,    66,   107,   111,    68,    97,    65,    67,
     108,     4,    75,   117,    99,    99,    99,    99,    41,   122,
      76,    97,    66,    85,    68,   112,   114,    66,    69,    68,
      75,    66,    66,    68,    66,   107,    68,    97,   117,    66,
      66,    66,    66,    65,   122,   112,    97,    96,    66,    68,
     117,   117,   117,   117,    99,    99,    39,    66,    66,   117,
      76,   117
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 48 "nyelv.y"
    { (yyval.NODE) = buildNode(PRIMARY_EXPRESSION, "p_exp", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 49 "nyelv.y"
    { (yyval.NODE) = buildNode(PRIMARY_EXPRESSION, "p_exp", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 50 "nyelv.y"
    { (yyval.NODE) = buildNode(PRIMARY_EXPRESSION, "p_exp", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 51 "nyelv.y"
    { (yyval.NODE) = buildNode(PRIMARY_EXPRESSION, "p_exp", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 52 "nyelv.y"
    { (yyval.NODE) = buildNode(PRIMARY_EXPRESSION, "(exp)", "()", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 57 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp[exp]", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 58 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp()", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 59 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp(par1, par2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 60 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp.a", (yyvsp[(3) - (3)].TEXT), (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 61 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "id1++", (yyvsp[(2) - (2)].TEXT), (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 62 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "id1--", (yyvsp[(2) - (2)].TEXT), (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 67 "nyelv.y"
    { (yyval.NODE) = buildNode(ARGUMENT_EXPRESSION_LIST, "id1 = 1, id2 = 2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 72 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "id1", "++id1", (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 73 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "id1", "--id1", (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 74 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "+^-id1", "unary_cast", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 75 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "size_of u_exp", "", (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 76 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "size_of int", "", (yyvsp[(3) - (4)].NODE), NULL); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 80 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "&", "&", NULL, NULL); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 81 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "*", "*", NULL, NULL); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 82 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "+", "+", NULL, NULL); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 83 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "-", "-", NULL, NULL); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 84 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "~", "~", NULL, NULL); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 85 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "!", "!", NULL, NULL); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 90 "nyelv.y"
    { (yyval.NODE) = buildNode(CAST_EXPRESSION, "(int)c_exp", "(type)cast", (yyvsp[(2) - (4)].NODE), (yyvsp[(4) - (4)].NODE)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 95 "nyelv.y"
    { (yyval.NODE) = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 * id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 96 "nyelv.y"
    { (yyval.NODE) = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 / id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 97 "nyelv.y"
    { (yyval.NODE) = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 % id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 102 "nyelv.y"
    { (yyval.NODE) = buildNode(ADDITIVE_EXPRESSION, "id1 + id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 103 "nyelv.y"
    { (yyval.NODE) = buildNode(ADDITIVE_EXPRESSION, "id1 - id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 108 "nyelv.y"
    { (yyval.NODE) = buildNode(SHIFT_EXPRESSION, "id1 << 1", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 109 "nyelv.y"
    { (yyval.NODE) = buildNode(SHIFT_EXPRESSION, "id1 >> 1", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 114 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 < id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 115 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 > id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 116 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 <= id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 117 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 >= id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 122 "nyelv.y"
    { (yyval.NODE) = buildNode(EQUALITY_EXPRESSION, "id1 == id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 123 "nyelv.y"
    { (yyval.NODE) = buildNode(EQUALITY_EXPRESSION, "id1 != id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 128 "nyelv.y"
    { (yyval.NODE) = buildNode(AND_EXPRESSION, "id1 & id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 133 "nyelv.y"
    { (yyval.NODE) = buildNode(EXCLUSIVE_OR_EXPRESSION, "id1 ^ id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 138 "nyelv.y"
    { (yyval.NODE) = buildNode(INCLUSIVE_OR_EXPRESSION, "id1 | id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 143 "nyelv.y"
    { (yyval.NODE) = buildNode(LOGICAL_AND_EXPRESSION, "id1 && id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 148 "nyelv.y"
    { (yyval.NODE) = buildNode(LOGICAL_OR_EXPRESSION, "id1 || id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 153 "nyelv.y"
    { (yyval.NODE) = buildFullNode(CONDITIONAL_EXPRESSION, "id1 ? id2 : id3", "", NULL, NULL, (yyvsp[(1) - (5)].NODE), (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 158 "nyelv.y"
    { (yyval.NODE) = buildFullNode(ASSIGNMENT_EXPRESSION, "-id1 = exp", "uaa", NULL, NULL, (yyvsp[(1) - (3)].NODE), (yyvsp[(2) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 162 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "=", NULL, NULL); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 163 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "*=", NULL, NULL); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 164 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "/=", NULL, NULL); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 165 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "%=", NULL, NULL); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 166 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "+=", NULL, NULL); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 167 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "-=", NULL, NULL); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 168 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "<<=", NULL, NULL); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 169 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", ">>=", NULL, NULL); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 170 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "&=", NULL, NULL); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 171 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "^=", NULL, NULL); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 172 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_OPERATOR, "=", "|=", NULL, NULL); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 177 "nyelv.y"
    { (yyval.NODE) = buildNode(EXPRESSION, "exp, assign_exp", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 181 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION, "int id1", "ds", (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 182 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION, "int id1 = 1, id2 = 2", "ds idl", (yyvsp[(1) - (3)].NODE), (yyvsp[(2) - (3)].NODE)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 187 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION, "int int id1 = 1", "ts ds", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 192 "nyelv.y"
    { (yyval.NODE) = buildNode(INIT_DECLARATOR_LIST, "id1", "idl, il", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 197 "nyelv.y"
    { (yyval.NODE) = buildNode(INIT_DECLARATOR, "id1 = 1", "d = i", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 201 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "type", "void", NULL, NULL); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 202 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "type", "char", NULL, NULL); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 203 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "type", "int", NULL, NULL); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 204 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "type", "long", NULL, NULL); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 205 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "type", "float", NULL, NULL); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 206 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "type", "double", NULL, NULL); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 210 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION, "int sc id1 = 1", "ts sql", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 215 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 216 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "(id1)", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 217 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1[assign_exp]", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 218 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1[]", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 219 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1(par1, par2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 220 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1(id1, id2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 221 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1()", "id()", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 226 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_TYPE_LIST, "int id1, int id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 230 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_DECLARATION, "int id1", "ds d", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 231 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_DECLARATION, "int abstr id1", NULL, (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 236 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "id", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 237 "nyelv.y"
    { (yyval.NODE) = buildNode(IDENTIFIER_LIST, "id1, id2", (yyvsp[(3) - (3)].TEXT), (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 242 "nyelv.y"
    { (yyval.NODE) = buildNode(TYPE_NAME, "type1 type2", "sql ad", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 246 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "(abstr_decl)", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 247 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "[]", "", NULL, NULL); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 248 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "[assign_exp]", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 249 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl[]", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 250 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl[assign_exp]", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 251 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "()", "", NULL, NULL); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 252 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "(par1, par2)", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 253 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl()", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 254 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl(par1, par2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 259 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER, "{il}", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 264 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER_LIST, "id1 = 1", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 265 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER_LIST, "il, id1 += 1", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 266 "nyelv.y"
    { (yyval.NODE) = buildFullNode(INITIALIZER_LIST, "il, id1 = 1", "", NULL, NULL, (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE), (yyvsp[(4) - (4)].NODE)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 270 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATION, "id1 =", "", (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 275 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATOR_LIST, "[1][2]", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 279 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATOR, "[1]", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 280 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATOR, ".a", (yyvsp[(2) - (2)].TEXT), NULL, NULL); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 293 "nyelv.y"
    { (yyval.NODE) = buildNode(LABELED_STATEMENT, "case id1 == 1 : id2 = 2", "", (yyvsp[(2) - (4)].NODE), (yyvsp[(4) - (4)].NODE)); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 294 "nyelv.y"
    { (yyval.NODE) = buildNode(LABELED_STATEMENT, "default: id1 = 1", "", (yyvsp[(3) - (3)].NODE), NULL); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 298 "nyelv.y"
    { (yyval.NODE) = buildNode(COMPOUND_STATEMENT, "{}", "", NULL, NULL); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 299 "nyelv.y"
    { (yyval.NODE) = buildNode(COMPOUND_STATEMENT, "{block_list}", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 304 "nyelv.y"
    { (yyval.NODE) = buildNode(BLOCK_ITEM_LIST, "item1, item2", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 308 "nyelv.y"
    { (yyval.NODE) = NULL; }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 314 "nyelv.y"
    { (yyval.NODE) = buildNode(EXPRESSION_STATEMENT, ";", "", NULL, NULL); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 315 "nyelv.y"
    { (yyval.NODE) = buildNode(EXPRESSION_STATEMENT, "exp;", "", (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 319 "nyelv.y"
    { (yyval.NODE) = buildNode(SELECTION_STATEMENT, "if", "", (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 320 "nyelv.y"
    { (yyval.NODE) = buildFullNode(SELECTION_STATEMENT, "if_with_else", "", NULL, NULL, (yyvsp[(3) - (7)].NODE), (yyvsp[(5) - (7)].NODE), (yyvsp[(7) - (7)].NODE)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 321 "nyelv.y"
    { (yyval.NODE) = buildNode(SELECTION_STATEMENT, "switch", "", (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 325 "nyelv.y"
    { (yyval.NODE) = buildNode(ITERATION_STATEMENT, "while", "", (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 326 "nyelv.y"
    { (yyval.NODE) = buildNode(ITERATION_STATEMENT, "do_while", "", (yyvsp[(2) - (7)].NODE), (yyvsp[(5) - (7)].NODE)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 327 "nyelv.y"
    { (yyval.NODE) = buildFullNode(ITERATION_STATEMENT, "for", "", (yyvsp[(7) - (7)].NODE), NULL, (yyvsp[(3) - (7)].NODE), (yyvsp[(4) - (7)].NODE), (yyvsp[(5) - (7)].NODE)); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 331 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "continue", (yyvsp[(1) - (2)].TEXT), NULL, NULL); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 332 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "break", (yyvsp[(1) - (2)].TEXT), NULL, NULL); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 333 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "return;", (yyvsp[(1) - (2)].TEXT), NULL, NULL); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 334 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "return exp;", (yyvsp[(1) - (3)].TEXT), (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 338 "nyelv.y"
    { root = (yyval.NODE) = buildNode(TRANSLATION_UNIT, "ext_decl", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 339 "nyelv.y"
    { (yyval.NODE) = buildNode(TRANSLATION_UNIT, "tr_unit, ext_decl", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 348 "nyelv.y"
    { (yyval.NODE) = buildFullNode(FUNCTION_DEFINITION, "function_def", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(2) - (4)].NODE), (yyvsp[(3) - (4)].NODE), (yyvsp[(4) - (4)].NODE), NULL); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 349 "nyelv.y"
    { (yyval.NODE) = buildFullNode(FUNCTION_DEFINITION, "short function_def", "", NULL, NULL, (yyvsp[(1) - (3)].NODE), (yyvsp[(2) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 354 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION_LIST, "decl_list, decl", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;



/* Line 1806 of yacc.c  */
#line 2648 "nyelv.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 358 "nyelv.y"

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

