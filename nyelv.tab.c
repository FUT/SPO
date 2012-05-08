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

  #define YYPRINT(file, type, value) fprintf(file, "%d", value);

  a_node* root;


/* Line 268 of yacc.c  */
#line 87 "nyelv.tab.c"

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
#line 19 "nyelv.y"

	a_node* NODE;
	char* TEXT;



/* Line 293 of yacc.c  */
#line 176 "nyelv.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 188 "nyelv.tab.c"

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   850

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNRULES -- Number of states.  */
#define YYNSTATES  283

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
     257,   260,   262,   264,   268,   273,   277,   282,   287,   291,
     293,   297,   300,   303,   305,   307,   311,   313,   316,   320,
     323,   327,   331,   336,   339,   343,   347,   352,   354,   358,
     360,   363,   367,   372,   375,   377,   380,   384,   387,   389,
     391,   393,   395,   397,   399,   404,   408,   411,   415,   417,
     420,   423,   425,   427,   429,   432,   438,   446,   452,   458,
     466,   474,   477,   480,   483,   487,   489,   492,   494,   496,
     501,   505,   507
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
      -1,    31,    -1,    32,    -1,     3,    -1,   104,   105,    -1,
     104,    -1,     4,    -1,    65,   106,    66,    -1,   106,    67,
      97,    68,    -1,   106,    67,    68,    -1,   106,    65,   107,
      66,    -1,   106,    65,   109,    66,    -1,   106,    65,    66,
      -1,   108,    -1,   107,    69,   108,    -1,   101,   106,    -1,
     101,   111,    -1,   101,    -1,     4,    -1,   109,    69,     4,
      -1,   105,    -1,   105,   111,    -1,    65,   111,    66,    -1,
      67,    68,    -1,    67,    97,    68,    -1,   111,    67,    68,
      -1,   111,    67,    97,    68,    -1,    65,    66,    -1,    65,
     107,    66,    -1,   111,    65,    66,    -1,   111,    65,   107,
      66,    -1,    97,    -1,    77,   113,    78,    -1,   112,    -1,
     114,   112,    -1,   113,    69,   112,    -1,   113,    69,   114,
     112,    -1,   115,    47,    -1,   116,    -1,   115,   116,    -1,
      67,    96,    68,    -1,    64,     4,    -1,   118,    -1,   119,
      -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,    35,
      96,    75,   117,    -1,    36,    75,   117,    -1,    77,    78,
      -1,    77,   120,    78,    -1,   121,    -1,   120,   121,    -1,
       1,    76,    -1,   100,    -1,   117,    -1,    76,    -1,    99,
      76,    -1,    37,    65,    99,    66,   117,    -1,    38,    65,
      99,    66,   117,    39,   117,    -1,    40,    65,    99,    66,
     117,    -1,    41,    65,    99,    66,   117,    -1,    42,   117,
      41,    65,    99,    66,    76,    -1,    43,    65,   122,   122,
      99,    66,   117,    -1,    44,    76,    -1,    45,    76,    -1,
      46,    76,    -1,    46,    99,    76,    -1,   127,    -1,   126,
     127,    -1,   128,    -1,   100,    -1,   101,   106,   129,   119,
      -1,   101,   106,   119,    -1,   100,    -1,   129,   100,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    53,    57,    58,    59,
      60,    61,    62,    63,    67,    68,    72,    73,    74,    75,
      76,    77,    81,    82,    83,    84,    85,    86,    90,    91,
      95,    96,    97,    98,   102,   103,   104,   108,   109,   110,
     114,   115,   116,   117,   118,   122,   123,   124,   128,   129,
     133,   134,   138,   139,   143,   144,   148,   149,   153,   154,
     158,   159,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   177,   178,   182,   183,   187,   188,   192,
     193,   197,   198,   202,   203,   204,   205,   206,   207,   208,
     212,   213,   217,   218,   219,   220,   221,   222,   223,   227,
     228,   232,   233,   234,   238,   239,   243,   244,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   260,   261,   265,
     266,   267,   268,   272,   276,   277,   281,   282,   286,   287,
     288,   289,   290,   291,   295,   296,   300,   301,   305,   306,
     310,   311,   312,   316,   317,   321,   322,   323,   327,   328,
     329,   333,   334,   335,   336,   340,   341,   345,   346,   350,
     351,   355,   356
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
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   106,   107,
     107,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   113,
     113,   113,   113,   114,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     124,   125,   125,   125,   125,   126,   126,   127,   127,   128,
     128,   129,   129
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
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     4,     3,     2,     3,     1,     2,
       2,     1,     1,     1,     2,     5,     7,     5,     5,     7,
       7,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    89,    84,    85,    86,    87,    88,    83,   158,     0,
      77,     0,   155,   157,    92,     0,    75,     0,    79,    81,
      78,     1,   156,     0,     0,    76,     0,     0,     0,     0,
     161,     0,   160,     0,    93,    80,    81,     2,     3,     4,
       5,     0,     0,     0,    24,    25,    23,    27,     0,    22,
      26,     0,     7,    16,    28,     0,    30,    34,    37,    40,
      45,    48,    50,    52,    54,    56,    58,    60,   117,    82,
     104,    98,   103,     0,    99,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,   136,    73,     0,   141,   142,   128,   129,     0,   138,
     130,   131,   132,   133,   162,   159,     0,    17,    18,     0,
      20,     0,    91,   106,     0,     0,     0,   119,     0,     0,
       0,   124,    12,    13,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    62,     0,    28,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,    96,     0,    97,     0,    94,   140,
       0,     0,     0,     0,     0,     0,     0,     0,   151,   152,
     153,     0,     0,   144,   137,   139,     0,     6,    90,     0,
     107,     0,   127,     0,     0,   118,   120,   123,   125,    11,
       9,     0,    14,     0,    61,    31,    32,    33,    35,    36,
      38,    39,    43,    44,    42,    41,    46,    47,    49,    51,
      53,    55,    57,     0,   113,     0,     0,   109,     0,     0,
       0,   100,   105,     0,   135,     0,     0,     0,     0,     0,
       0,   154,    74,    21,    29,   126,   121,     0,    10,     0,
       8,     0,   114,   108,   110,   115,     0,   111,     0,   134,
       0,     0,     0,     0,     0,     0,   122,    15,    59,   116,
     112,   145,     0,   147,   148,     0,     0,     0,     0,     0,
     146,   149,   150
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    52,    53,   201,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    92,   138,
      93,     8,    72,    17,    18,    10,   113,    23,   225,    74,
      75,   114,   226,    69,   118,   119,   120,   121,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    11,    12,    13,
      33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
     241,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,    -3,
     241,   287,  -166,  -166,  -166,    11,  -166,   -29,  -166,    23,
    -166,  -166,  -166,   123,    11,  -166,   420,   210,   579,   221,
    -166,    -3,  -166,    88,  -166,  -166,   -33,  -166,  -166,  -166,
    -166,   695,   695,   711,  -166,  -166,  -166,  -166,   568,  -166,
    -166,   388,  -166,    19,   413,   779,  -166,   158,    47,    35,
     157,   117,     7,   -31,    -8,    66,     6,  -166,  -166,  -166,
    -166,  -166,     2,    -6,  -166,    28,  -166,    24,    33,   779,
      21,    50,    57,    92,   140,   344,   169,   172,   184,   462,
    -166,  -166,  -166,   -10,  -166,  -166,  -166,  -166,   299,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,   779,  -166,  -166,   568,
    -166,    32,   241,   180,   202,   271,   779,  -166,   -21,   420,
     -34,  -166,  -166,  -166,   276,   600,   779,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,   779,  -166,
    -166,   779,   779,   779,   779,   779,   779,   779,   779,   779,
     779,   779,   779,   779,   779,   779,   779,   779,   779,   779,
     130,   611,   216,   228,  -166,   241,  -166,   290,  -166,  -166,
     226,   344,   779,   779,   779,   779,   244,   494,  -166,  -166,
    -166,     9,   779,  -166,  -166,  -166,   230,  -166,  -166,   170,
     228,   779,  -166,   257,   388,  -166,  -166,  -166,  -166,  -166,
    -166,    44,  -166,    98,  -166,  -166,  -166,  -166,   158,   158,
      47,    47,    35,    35,    35,    35,   157,   157,   117,     7,
     -31,    -8,    66,    20,  -166,   105,   166,  -166,   258,   281,
     679,  -166,  -166,   344,  -166,   106,   110,   112,   114,   273,
     494,  -166,  -166,  -166,  -166,  -166,  -166,   420,  -166,   779,
    -166,   779,  -166,  -166,  -166,  -166,   116,  -166,   278,  -166,
     344,   344,   344,   344,   779,   779,  -166,  -166,  -166,  -166,
    -166,  -166,   315,  -166,  -166,   118,   146,   344,   282,   344,
    -166,  -166,  -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,    -5,  -166,   -36,   144,   175,   -25,
     171,   205,   206,   207,   208,   204,  -166,   -74,   -26,  -166,
     -45,   -11,    10,  -166,   342,   -41,   255,     0,   -23,   203,
    -166,   262,   -55,   -40,  -166,   178,  -166,   253,   -69,  -166,
      16,  -166,   285,  -165,  -166,  -166,  -166,  -166,   363,  -166,
    -166
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      68,    14,    77,   111,    73,   170,    14,   112,    30,    19,
       9,   117,   240,   197,    26,    14,   176,   163,    94,   140,
      20,     9,   104,   158,    36,    68,     1,   122,   123,    31,
     115,    36,    27,   116,    28,    32,   107,   108,   110,    31,
      24,   155,   193,    31,   181,   146,   147,    25,   194,   105,
     139,     2,     3,     4,     5,     6,     7,   195,   190,   182,
     164,   111,    15,   165,   111,   156,   183,   160,   112,   161,
      26,   112,   162,    16,   139,   265,    15,   154,   182,   196,
     159,   203,   157,   124,   125,   241,   126,    94,    27,   182,
      28,     1,   168,    68,   166,   251,   171,   167,   187,   202,
      29,   182,   234,   144,   145,   205,   206,   207,    31,   169,
     248,   139,   204,   249,   223,   172,     2,     3,     4,     5,
       6,     7,   173,   212,   213,   214,   215,   235,   236,   237,
     238,   152,   153,     1,    14,   228,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   246,   244,   242,   174,     2,     3,
       4,     5,     6,     7,   259,    29,   250,   182,    68,   148,
     149,   252,   260,     1,   165,   182,   261,   268,   262,   182,
     263,   182,   269,   182,   278,   165,   139,   182,    27,    34,
      28,   271,   272,   273,   274,   160,   224,   161,     2,     3,
       4,     5,     6,     7,   258,   175,   256,   266,   280,   150,
     282,   151,   279,     1,    70,   182,   141,   142,   143,   275,
     276,    68,    78,   267,     1,    37,    38,    39,    40,    41,
      42,   229,   253,   230,   177,   189,   224,   161,     2,     3,
       4,     5,     6,     7,     1,   189,   139,   161,   178,     2,
       3,     4,     5,     6,     7,    43,    79,    80,    81,    82,
     179,    83,    84,    85,    86,    87,    88,    89,   191,     2,
       3,     4,     5,     6,     7,   192,    71,    44,    45,    46,
     199,    27,    47,    28,     1,   239,    48,    21,   208,   209,
       1,    49,    50,   229,   232,   230,   243,    90,    29,    91,
      78,   233,     1,    37,    38,    39,    40,    41,    42,     2,
       3,     4,     5,     6,     7,     2,     3,     4,     5,     6,
       7,   210,   211,   216,   217,   245,   254,     2,     3,     4,
       5,     6,     7,    43,    79,    80,    81,    82,   264,    83,
      84,    85,    86,    87,    88,    89,   270,   255,    37,    38,
      39,    40,    41,    42,   277,    44,    45,    46,   281,   218,
      47,   219,   222,   220,    48,   221,    35,   188,   231,    49,
      50,   186,   247,   198,    22,    90,    29,   184,    43,    79,
      80,    81,    82,   185,    83,    84,    85,    86,    87,    88,
      89,     0,    37,    38,    39,    40,    41,    42,     0,     0,
      44,    45,    46,     0,     0,    47,     0,     0,     0,    48,
       0,     0,     0,     0,    49,    50,     0,     0,     0,     0,
      90,    29,    43,     0,    37,    38,    39,    40,    41,    42,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,     0,     0,     0,    44,    45,    46,     0,     0,    47,
       0,     0,   115,    48,    43,   116,     0,     0,    49,    50,
     137,     0,     0,     0,     0,    51,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     0,    44,    45,    46,     0,
       0,    47,     0,     0,     0,    48,     0,     0,     0,     0,
      49,    50,     0,     0,     0,     0,    43,    51,    37,    38,
      39,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
      46,     0,     0,    47,     0,     0,     0,    48,    43,     0,
       0,     0,    49,    50,     0,     0,     0,     0,   180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    45,    46,     0,     0,    47,     0,     0,     0,    48,
       0,     0,     0,     0,    49,    50,     0,     0,     0,     0,
      90,     1,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,     0,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,    43,     0,    37,    38,    39,    40,    41,    42,
       0,     0,     0,    43,     0,    37,    38,    39,    40,    41,
      42,     0,     0,     0,    44,    45,    46,     0,     0,    47,
       0,     0,     0,    48,    43,    44,    45,    46,    49,    50,
      47,     0,     0,     0,    48,    43,     0,    76,     0,    49,
      50,     0,     0,     0,     0,     0,    44,    45,    46,     0,
       0,    47,     0,     0,     0,    48,   200,    44,    45,    46,
      49,    50,    47,     0,     0,     0,    48,     0,     0,   227,
       0,    49,    50,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    37,    38,    39,    40,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,     0,     0,     0,    44,    45,    46,     0,     0,
      47,     0,     0,     0,    48,    43,     0,   257,     0,    49,
      50,    44,    45,    46,     0,     0,    47,     0,     0,     0,
     106,     0,     0,     0,     0,    49,    50,    44,    45,    46,
       0,     0,    47,     0,     0,     0,   109,     0,     0,     0,
       0,    49,    50,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,     0,     0,
      47,     0,     0,     0,    48,     0,     0,     0,     0,    49,
      50
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-166))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      26,     4,    28,    48,    27,    79,     4,    48,    19,     9,
       0,    51,   177,    47,    47,     4,    85,    72,    29,    55,
      10,    11,    33,    17,    24,    51,     3,     8,     9,    19,
      64,    31,    65,    67,    67,    19,    41,    42,    43,    29,
      69,    72,   116,    33,    89,    10,    11,    76,    69,    33,
      55,    28,    29,    30,    31,    32,    33,    78,   113,    69,
      66,   106,    65,    69,   109,    73,    76,    65,   109,    67,
      47,   112,    72,    76,    79,   240,    65,    70,    69,   119,
      74,   126,    16,    64,    65,    76,    67,    98,    65,    69,
      67,     3,    68,   119,    66,    75,    75,    69,    66,   125,
      77,    69,   171,    56,    57,   141,   142,   143,    98,    76,
      66,   116,   138,    69,   159,    65,    28,    29,    30,    31,
      32,    33,    65,   148,   149,   150,   151,   172,   173,   174,
     175,    14,    15,     3,     4,   161,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   194,   191,   182,    65,    28,    29,
      30,    31,    32,    33,   233,    77,    68,    69,   194,    12,
      13,    66,    66,     3,    69,    69,    66,   251,    66,    69,
      66,    69,    66,    69,    66,    69,   191,    69,    65,    66,
      67,   260,   261,   262,   263,    65,    66,    67,    28,    29,
      30,    31,    32,    33,   230,    65,   229,   247,   277,    52,
     279,    54,    66,     3,     4,    69,    58,    59,    60,   264,
     265,   247,     1,   249,     3,     4,     5,     6,     7,     8,
       9,    65,    66,    67,    65,    65,    66,    67,    28,    29,
      30,    31,    32,    33,     3,    65,   251,    67,    76,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      76,    40,    41,    42,    43,    44,    45,    46,    66,    28,
      29,    30,    31,    32,    33,     4,    66,    56,    57,    58,
       4,    65,    61,    67,     3,    41,    65,     0,   144,   145,
       3,    70,    71,    65,     4,    67,    66,    76,    77,    78,
       1,    75,     3,     4,     5,     6,     7,     8,     9,    28,
      29,    30,    31,    32,    33,    28,    29,    30,    31,    32,
      33,   146,   147,   152,   153,    68,    68,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    65,    40,
      41,    42,    43,    44,    45,    46,    68,    66,     4,     5,
       6,     7,     8,     9,    39,    56,    57,    58,    76,   154,
      61,   155,   158,   156,    65,   157,    24,   112,   165,    70,
      71,   109,   194,   120,    11,    76,    77,    78,    34,    35,
      36,    37,    38,    98,    40,    41,    42,    43,    44,    45,
      46,    -1,     4,     5,     6,     7,     8,     9,    -1,    -1,
      56,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,
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
      76,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    -1,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    34,    -1,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,    61,
      -1,    -1,    -1,    65,    34,    56,    57,    58,    70,    71,
      61,    -1,    -1,    -1,    65,    34,    -1,    68,    -1,    70,
      71,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,
      -1,    61,    -1,    -1,    -1,    65,    66,    56,    57,    58,
      70,    71,    61,    -1,    -1,    -1,    65,    -1,    -1,    68,
      -1,    70,    71,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    34,    -1,    68,    -1,    70,
      71,    56,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    70,    71,    56,    57,    58,
      -1,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    70,    71,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    70,
      71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,   100,   101,
     104,   126,   127,   128,     4,    65,    76,   102,   103,   106,
     101,     0,   127,   106,    69,    76,    47,    65,    67,    77,
     100,   101,   119,   129,    66,   103,   106,     4,     5,     6,
       7,     8,     9,    34,    56,    57,    58,    61,    65,    70,
      71,    77,    80,    81,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,   112,
       4,    66,   101,   107,   108,   109,    68,    97,     1,    35,
      36,    37,    38,    40,    41,    42,    43,    44,    45,    46,
      76,    78,    97,    99,   100,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   100,   119,    65,    83,    83,    65,
      83,    99,   104,   105,   110,    64,    67,   112,   113,   114,
     115,   116,     8,     9,    64,    65,    67,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    47,    98,    83,
      85,    58,    59,    60,    56,    57,    10,    11,    12,    13,
      52,    54,    14,    15,    70,    72,    73,    16,    17,    74,
      65,    67,   106,   111,    66,    69,    66,    69,    68,    76,
      96,    75,    65,    65,    65,    65,   117,    65,    76,    76,
      76,    99,    69,    76,    78,   121,   110,    66,   105,    65,
     111,    66,     4,    96,    69,    78,   112,    47,   116,     4,
      66,    82,    97,    99,    97,    85,    85,    85,    86,    86,
      87,    87,    88,    88,    88,    88,    89,    89,    90,    91,
      92,    93,    94,    99,    66,   107,   111,    68,    97,    65,
      67,   108,     4,    75,   117,    99,    99,    99,    99,    41,
     122,    76,    97,    66,    85,    68,   112,   114,    66,    69,
      68,    75,    66,    66,    68,    66,   107,    68,    97,   117,
      66,    66,    66,    66,    65,   122,   112,    97,    96,    66,
      68,   117,   117,   117,   117,    99,    99,    39,    66,    66,
     117,    76,   117
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
#line 49 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 50 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 51 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 52 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 53 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(2) - (3)].NODE); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 57 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pr_exp", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 58 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp[exp]", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 59 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp()", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 60 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp(par1, par2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 61 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "pos_exp.a", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].TEXT)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 62 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "id1++", "", (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 63 "nyelv.y"
    { (yyval.NODE) = buildNode(POSTFIX_EXPRESSION, "id1--", "", (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 67 "nyelv.y"
    { (yyval.NODE) = buildNode(ARGUMENT_EXPRESSION_LIST, "id1 = 1", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 68 "nyelv.y"
    { (yyval.NODE) = buildNode(ARGUMENT_EXPRESSION_LIST, "id1 = 1, id2 = 2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 72 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "pos_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 73 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "id1", "++id1", (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 74 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "id1", "--id1", (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 75 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "+^-id1", (yyvsp[(1) - (2)].TEXT), (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 76 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "size_of u_exp", "", (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 77 "nyelv.y"
    { (yyval.NODE) = buildNode(UNARY_EXPRESSION, "size_of int", "", (yyvsp[(3) - (4)].NODE), NULL); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 81 "nyelv.y"
    { (yyval.TEXT) = '&'; }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 82 "nyelv.y"
    { (yyval.TEXT) = '*'; }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 83 "nyelv.y"
    { (yyval.TEXT) = '+'; }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 84 "nyelv.y"
    { (yyval.TEXT) = '-'; }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 85 "nyelv.y"
    { (yyval.TEXT) = '~'; }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 86 "nyelv.y"
    { (yyval.TEXT) = '!'; }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 90 "nyelv.y"
    { (yyval.NODE) = buildNode(CAST_EXPRESSION, "-id1", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 91 "nyelv.y"
    { (yyval.NODE) = buildNode(CAST_EXPRESSION, "(int)c_exp", (yyvsp[(2) - (4)].NODE), (yyvsp[(4) - (4)].NODE), NULL); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 95 "nyelv.y"
    { (yyval.NODE) = buildNode(MULTIPLICATIVE_EXPRESSION, "c_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 96 "nyelv.y"
    { (yyval.NODE) = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 * id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 97 "nyelv.y"
    { (yyval.NODE) = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 / id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 98 "nyelv.y"
    { (yyval.NODE) = buildNode(MULTIPLICATIVE_EXPRESSION, "id1 % id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 102 "nyelv.y"
    { (yyval.NODE) = buildNode(ADDITIVE_EXPRESSION, "m_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 103 "nyelv.y"
    { (yyval.NODE) = buildNode(ADDITIVE_EXPRESSION, "id1 + id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 104 "nyelv.y"
    { (yyval.NODE) = buildNode(ADDITIVE_EXPRESSION, "id1 - id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 108 "nyelv.y"
    { (yyval.NODE) = buildNode(SHIFT_EXPRESSION, "a_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 109 "nyelv.y"
    { (yyval.NODE) = buildNode(SHIFT_EXPRESSION, "id1 << 1", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 110 "nyelv.y"
    { (yyval.NODE) = buildNode(SHIFT_EXPRESSION, "id1 >> 1", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 114 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "s_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 115 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 < id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 116 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 > id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 117 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 <= id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 118 "nyelv.y"
    { (yyval.NODE) = buildNode(RELATIONAL_EXPRESSION, "id1 >= id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 122 "nyelv.y"
    { (yyval.NODE) = buildNode(EQUALITY_EXPRESSION, "rel_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 123 "nyelv.y"
    { (yyval.NODE) = buildNode(EQUALITY_EXPRESSION, "id1 == id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 124 "nyelv.y"
    { (yyval.NODE) = buildNode(EQUALITY_EXPRESSION, "id1 != id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 128 "nyelv.y"
    { (yyval.NODE) = buildNode(AND_EXPRESSION, "eq_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 129 "nyelv.y"
    { (yyval.NODE) = buildNode(AND_EXPRESSION, "id1 & id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 133 "nyelv.y"
    { (yyval.NODE) = buildNode(EXCLUSIVE_OR_EXPRESSION, "and_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 134 "nyelv.y"
    { (yyval.NODE) = buildNode(EXCLUSIVE_OR_EXPRESSION, "id1 ^ id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 138 "nyelv.y"
    { (yyval.NODE) = buildNode(INCLUSIVE_OR_EXPRESSION, "excl_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 139 "nyelv.y"
    { (yyval.NODE) = buildNode(INCLUSIVE_OR_EXPRESSION, "id1 | id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 143 "nyelv.y"
    { (yyval.NODE) = buildNode(LOGICAL_AND_EXPRESSION, "incl_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 144 "nyelv.y"
    { (yyval.NODE) = buildNode(LOGICAL_AND_EXPRESSION, "id1 && id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 148 "nyelv.y"
    { (yyval.NODE) = buildNode(LOGICAL_OR_EXPRESSION, "lor_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 149 "nyelv.y"
    { (yyval.NODE) = buildNode(LOGICAL_OR_EXPRESSION, "id1 || id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 153 "nyelv.y"
    { (yyval.NODE) = buildNode(CONDITIONAL_EXPRESSION, "lor_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 154 "nyelv.y"
    { (yyval.NODE) = buildFullNode(CONDITIONAL_EXPRESSION, "id1 ? id2 : id3", "", NULL, NULL, (yyvsp[(1) - (5)].NODE), (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 158 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_EXPRESSION, "c_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 159 "nyelv.y"
    { (yyval.NODE) = buildNode(ASSIGNMENT_EXPRESSION, "-id1 = exp", (yyvsp[(2) - (3)].TEXT), (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 163 "nyelv.y"
    { (yyval.TEXT) = '='; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 164 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 165 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 166 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 167 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 168 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 169 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 170 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 171 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 172 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 173 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 177 "nyelv.y"
    { (yyval.NODE) = buildNode(EXPRESSION, "assign_exp", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 178 "nyelv.y"
    { (yyval.NODE) = buildNode(EXPRESSION, "exp, assign_exp", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 182 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION, "int id1", (yyvsp[(1) - (2)].TEXT), NULL, NULL); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 183 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION, "int id1 = 1, id2 = 2", (yyvsp[(1) - (3)].TEXT), (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 187 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 188 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (2)].TEXT); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 192 "nyelv.y"
    { (yyval.NODE) = buildNode(INIT_DECLARATOR_LIST, "id1", "", NULL, NULL); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 193 "nyelv.y"
    { (yyval.NODE) = buildNode(INIT_DECLARATOR_LIST, "id1", "", NULL, NULL); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 197 "nyelv.y"
    { (yyval.NODE) = buildNode(INIT_DECLARATOR, "id1", "", NULL, NULL); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 198 "nyelv.y"
    { (yyval.NODE) = buildNode(INIT_DECLARATOR, "id1", "", NULL, NULL); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 202 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 203 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 204 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 205 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 206 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 207 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 208 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 212 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (2)].TEXT); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 213 "nyelv.y"
    { (yyval.TEXT) = (yyvsp[(1) - (1)].TEXT); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 217 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 218 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "(id1)", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 219 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1[assign_exp]", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 220 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1[]", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 221 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1(par1, par2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 222 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1(id1, id2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 223 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATOR, "id1()", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 227 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_TYPE_LIST, "int id1", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 228 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_TYPE_LIST, "int id1, int id2", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 232 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_DECLARATION, "int id1", (yyvsp[(1) - (2)].TEXT), NULL, (yyvsp[(2) - (2)].NODE)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 233 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_DECLARATION, "int abstr id1", NULL, (yyvsp[(1) - (2)].TEXT), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 234 "nyelv.y"
    { (yyval.NODE) = buildNode(PARAMETER_DECLARATION, "id1", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 238 "nyelv.y"
    { (yyval.NODE) = buildNode(IDENTIFIER_LIST, "id1", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 239 "nyelv.y"
    { (yyval.NODE) = buildNode(IDENTIFIER_LIST, "id1, id2", (yyvsp[(3) - (3)].TEXT), (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 243 "nyelv.y"
    { (yyval.NODE) = buildNode(TYPE_NAME, "type1", (yyvsp[(1) - (1)].TEXT), NULL, NULL); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 244 "nyelv.y"
    { (yyval.NODE) = buildNode(TYPE_NAME, "type1 type2", (yyvsp[(1) - (2)].TEXT), (yyvsp[(2) - (2)].NODE), NULL); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 248 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "(abstr_decl)", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 249 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "[]", "", NULL, NULL); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 250 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "[assign_exp]", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 251 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl[]", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 252 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl[assign_exp]", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 253 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "()", "", NULL, NULL); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 254 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "(par1, par2)", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 255 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl()", "", (yyvsp[(1) - (3)].NODE), NULL); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 256 "nyelv.y"
    { (yyval.NODE) = buildNode(ABSTRACT_DECLARATOR, "abstr_decl(par1, par2)", "", (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 260 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER, "id1 += 1", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 261 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER, "{il}", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 265 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER_LIST, "id1 += 1", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 266 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER_LIST, "id1 = 1", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 267 "nyelv.y"
    { (yyval.NODE) = buildNode(INITIALIZER_LIST, "il, id1 += 1", "", (yyvsp[(1) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 268 "nyelv.y"
    { (yyval.NODE) = buildFullNode(INITIALIZER_LIST, "il, id1 = 1", "", NULL, NULL, (yyvsp[(1) - (4)].NODE), (yyvsp[(3) - (4)].NODE), (yyvsp[(4) - (4)].NODE)); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 272 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATION, "id1 =", "", (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 276 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATOR_LIST, "[1]", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 277 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATOR_LIST, "[1][2]", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 281 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATOR, "[1]", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 282 "nyelv.y"
    { (yyval.NODE) = buildNode(DESIGNATOR, ".a", (yyvsp[(2) - (2)].TEXT), NULL, NULL); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 286 "nyelv.y"
    { (yyval.NODE) = buildNode(STATEMENT, "labled_st", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 287 "nyelv.y"
    { (yyval.NODE) = buildNode(STATEMENT, "compound_st", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 288 "nyelv.y"
    { (yyval.NODE) = buildNode(STATEMENT, "exp_st", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 289 "nyelv.y"
    { (yyval.NODE) = buildNode(STATEMENT, "select_st", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 290 "nyelv.y"
    { (yyval.NODE) = buildNode(STATEMENT, "iter_st", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 291 "nyelv.y"
    { (yyval.NODE) = buildNode(STATEMENT, "jump_st", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 295 "nyelv.y"
    { (yyval.NODE) = buildNode(LABELED_STATEMENT, "case id1 == 1 : id2 = 2", "", (yyvsp[(2) - (4)].NODE), (yyvsp[(4) - (4)].NODE)); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 296 "nyelv.y"
    { (yyval.NODE) = buildNode(LABELED_STATEMENT, "default: id1 = 1", "", (yyvsp[(3) - (3)].NODE), NULL); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 300 "nyelv.y"
    { (yyval.NODE) = buildNode(COMPOUND_STATEMENT, "{}", "", NULL, NULL); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 301 "nyelv.y"
    { (yyval.NODE) = buildNode(COMPOUND_STATEMENT, "{block_list}", "", (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 305 "nyelv.y"
    { (yyval.NODE) = buildNode(BLOCK_ITEM_LIST, "item1", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 306 "nyelv.y"
    { (yyval.NODE) = buildNode(BLOCK_ITEM_LIST, "item1, item2", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 310 "nyelv.y"
    { (yyval.NODE) = NULL; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 311 "nyelv.y"
    { (yyval.NODE) = buildNode(BLOCK_ITEM, "int id1", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 312 "nyelv.y"
    { (yyval.NODE) = buildNode(BLOCK_ITEM, "id1 + id2", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 316 "nyelv.y"
    { (yyval.NODE) = buildNode(EXPRESSION_STATEMENT, ";", "", NULL, NULL); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 317 "nyelv.y"
    { (yyval.NODE) = buildNode(EXPRESSION_STATEMENT, "exp;", "", (yyvsp[(1) - (2)].NODE), NULL); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 321 "nyelv.y"
    { (yyval.NODE) = buildNode(SELECTION_STATEMENT, "if", "", (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 322 "nyelv.y"
    { (yyval.NODE) = buildFullNode(SELECTION_STATEMENT, "if_with_else", "", NULL, NULL, (yyvsp[(3) - (7)].NODE), (yyvsp[(5) - (7)].NODE), (yyvsp[(7) - (7)].NODE)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 323 "nyelv.y"
    { (yyval.NODE) = buildNode(SELECTION_STATEMENT, "switch", "", (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 327 "nyelv.y"
    { (yyval.NODE) = buildNode(ITERATION_STATEMENT, "while", "", (yyvsp[(3) - (5)].NODE), (yyvsp[(5) - (5)].NODE)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 328 "nyelv.y"
    { (yyval.NODE) = buildNode(ITERATION_STATEMENT, "do_while", "", (yyvsp[(2) - (7)].NODE), (yyvsp[(5) - (7)].NODE)); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 329 "nyelv.y"
    { (yyval.NODE) = buildFullNode(ITERATION_STATEMENT, "for", "", (yyvsp[(7) - (7)].NODE), NULL, (yyvsp[(3) - (7)].NODE), (yyvsp[(4) - (7)].NODE), (yyvsp[(5) - (7)].NODE)); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 333 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "continue", (yyvsp[(1) - (2)].TEXT), NULL, NULL); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 334 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "break", (yyvsp[(1) - (2)].TEXT), NULL, NULL); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 335 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "return;", (yyvsp[(1) - (2)].TEXT), NULL, NULL); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 336 "nyelv.y"
    { (yyval.NODE) = buildNode(JUMP_STATEMENT, "return exp;", (yyvsp[(1) - (3)].TEXT), (yyvsp[(2) - (3)].NODE), NULL); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 340 "nyelv.y"
    { root = (yyval.NODE) = buildNode(TRANSLATION_UNIT, "ext_decl", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 341 "nyelv.y"
    { (yyval.NODE) = buildNode(TRANSLATION_UNIT, "tr_unit, ext_decl", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 345 "nyelv.y"
    { (yyval.NODE) = buildNode(EXTERNAL_DECLARATION, "function", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 346 "nyelv.y"
    { (yyval.NODE) = buildNode(EXTERNAL_DECLARATION, "decl", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 350 "nyelv.y"
    { (yyval.NODE) = buildFullNode(FUNCTION_DEFINITION, "function_def", "", (yyvsp[(1) - (4)].TEXT), (yyvsp[(2) - (4)].NODE), (yyvsp[(3) - (4)].NODE), (yyvsp[(4) - (4)].NODE), NULL); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 351 "nyelv.y"
    { (yyval.NODE) = buildFullNode(FUNCTION_DEFINITION, "short function_def", "", NULL, NULL, (yyvsp[(1) - (3)].TEXT), (yyvsp[(2) - (3)].NODE), (yyvsp[(3) - (3)].NODE)); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 355 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION_LIST, "decl", "", (yyvsp[(1) - (1)].NODE), NULL); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 356 "nyelv.y"
    { (yyval.NODE) = buildNode(DECLARATION_LIST, "decl_list, decl", "", (yyvsp[(1) - (2)].NODE), (yyvsp[(2) - (2)].NODE)); }
    break;



/* Line 1806 of yacc.c  */
#line 2941 "nyelv.tab.c"
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
#line 360 "nyelv.y"

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

