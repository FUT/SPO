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
# define YYDEBUG 1
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   834

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

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
       2,     2,     2,    61,     2,     2,     2,    60,    72,     2,
      65,    66,    58,    56,    71,    57,    64,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    78,
      54,    47,    52,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    75,    70,    73,     2,     2,     2,
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
      26,    31,    35,    38,    41,    48,    56,    58,    62,    64,
      67,    70,    73,    76,    81,    83,    85,    87,    89,    91,
      93,    95,   100,   102,   106,   110,   114,   116,   120,   124,
     126,   130,   134,   136,   140,   144,   148,   152,   154,   158,
     162,   164,   168,   170,   174,   176,   180,   182,   186,   188,
     192,   194,   200,   202,   206,   208,   210,   212,   214,   216,
     218,   220,   222,   224,   226,   228,   230,   234,   237,   241,
     243,   246,   248,   252,   254,   258,   260,   262,   264,   266,
     268,   270,   272,   275,   277,   279,   281,   285,   290,   294,
     299,   304,   308,   310,   312,   316,   319,   322,   324,   326,
     330,   332,   335,   339,   342,   346,   350,   355,   358,   362,
     366,   371,   373,   377,   382,   384,   387,   391,   396,   399,
     401,   404,   408,   411,   413,   415,   417,   419,   421,   423,
     428,   432,   435,   439,   441,   444,   447,   449,   451,   453,
     456,   462,   470,   476,   482,   490,   498,   501,   504,   507,
     511,   513,   516,   518,   520,   525,   529,   531
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     128,     0,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,    65,    99,    66,    -1,    80,    -1,    81,    67,    99,
      68,    -1,    81,    65,    66,    -1,    81,    65,    82,    66,
      -1,    81,    64,     4,    -1,    81,     8,    -1,    81,     9,
      -1,    65,   112,    66,    69,   115,    70,    -1,    65,   112,
      66,    69,   115,    71,    70,    -1,    97,    -1,    82,    71,
      97,    -1,    81,    -1,     8,    83,    -1,     9,    83,    -1,
      84,    85,    -1,    34,    83,    -1,    34,    65,   112,    66,
      -1,    72,    -1,    58,    -1,    56,    -1,    57,    -1,    73,
      -1,    61,    -1,    83,    -1,    65,   112,    66,    85,    -1,
      85,    -1,    86,    58,    85,    -1,    86,    59,    85,    -1,
      86,    60,    85,    -1,    86,    -1,    87,    56,    86,    -1,
      87,    57,    86,    -1,    87,    -1,    88,    10,    87,    -1,
      88,    11,    87,    -1,    88,    -1,    89,    54,    88,    -1,
      89,    52,    88,    -1,    89,    12,    88,    -1,    89,    13,
      88,    -1,    89,    -1,    90,    14,    89,    -1,    90,    15,
      89,    -1,    90,    -1,    91,    72,    90,    -1,    91,    -1,
      92,    74,    91,    -1,    92,    -1,    93,    75,    92,    -1,
      93,    -1,    94,    16,    93,    -1,    94,    -1,    95,    17,
      94,    -1,    95,    -1,    95,    76,    99,    77,    96,    -1,
      96,    -1,    83,    98,    97,    -1,    47,    -1,    18,    -1,
      19,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    97,    -1,
      99,    71,    97,    -1,   101,    78,    -1,   101,   102,    78,
      -1,   104,    -1,   104,   101,    -1,   103,    -1,   102,    71,
     103,    -1,   106,    -1,   106,    47,   114,    -1,    33,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
       3,    -1,   104,   105,    -1,   104,    -1,   107,    -1,     4,
      -1,    65,   106,    66,    -1,   107,    67,    97,    68,    -1,
     107,    67,    68,    -1,   107,    65,   108,    66,    -1,   107,
      65,   111,    66,    -1,   107,    65,    66,    -1,   109,    -1,
     110,    -1,   109,    71,   110,    -1,   101,   106,    -1,   101,
     113,    -1,   101,    -1,     4,    -1,   111,    71,     4,    -1,
     105,    -1,   105,   113,    -1,    65,   113,    66,    -1,    67,
      68,    -1,    67,    97,    68,    -1,   113,    67,    68,    -1,
     113,    67,    97,    68,    -1,    65,    66,    -1,    65,   108,
      66,    -1,   113,    65,    66,    -1,   113,    65,   108,    66,
      -1,    97,    -1,    69,   115,    70,    -1,    69,   115,    71,
      70,    -1,   114,    -1,   116,   114,    -1,   115,    71,   114,
      -1,   115,    71,   116,   114,    -1,   117,    47,    -1,   118,
      -1,   117,   118,    -1,    67,    96,    68,    -1,    64,     4,
      -1,   120,    -1,   121,    -1,   124,    -1,   125,    -1,   126,
      -1,   127,    -1,    35,    96,    77,   119,    -1,    36,    77,
     119,    -1,    69,    70,    -1,    69,   122,    70,    -1,   123,
      -1,   122,   123,    -1,     1,    78,    -1,   100,    -1,   119,
      -1,    78,    -1,    99,    78,    -1,    37,    65,    99,    66,
     119,    -1,    38,    65,    99,    66,   119,    39,   119,    -1,
      40,    65,    99,    66,   119,    -1,    41,    65,    99,    66,
     119,    -1,    42,   119,    41,    65,    99,    66,    78,    -1,
      43,    65,   124,   124,    99,    66,   119,    -1,    44,    78,
      -1,    45,    78,    -1,    46,    78,    -1,    46,    99,    78,
      -1,   129,    -1,   128,   129,    -1,   130,    -1,   100,    -1,
     101,   106,   131,   121,    -1,   101,   106,   121,    -1,   100,
      -1,   131,   100,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    51,    52,    53,    54,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    70,    71,    75,    76,
      77,    78,    79,    80,    84,    85,    86,    87,    88,    89,
      93,    94,    98,    99,   100,   101,   105,   106,   107,   111,
     112,   113,   117,   118,   119,   120,   121,   125,   126,   127,
     131,   132,   136,   137,   141,   142,   146,   147,   151,   152,
     156,   157,   161,   162,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   180,   181,   185,   186,   190,
     191,   195,   196,   200,   201,   205,   206,   207,   208,   209,
     210,   211,   215,   216,   220,   225,   226,   227,   228,   229,
     230,   231,   235,   239,   240,   244,   245,   246,   250,   251,
     255,   256,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   272,   273,   274,   278,   279,   280,   281,   285,   289,
     290,   294,   295,   299,   300,   301,   302,   303,   304,   308,
     309,   313,   314,   318,   319,   323,   324,   325,   329,   330,
     334,   335,   336,   340,   341,   342,   346,   347,   348,   349,
     353,   354,   358,   359,   363,   364,   368,   369
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
  "\"++\"", "\"--\"", "'.'", "'('", "')'", "'['", "']'", "'{'", "'}'",
  "','", "'&'", "'~'", "'^'", "'|'", "'?'", "':'", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "specifier_qualifier_list", "declarator", "direct_declarator",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", 0
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
      37,    33,   308,   309,    46,    40,    41,    91,    93,   123,
     125,    44,    38,   126,    94,   124,    63,    58,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   105,   105,   106,   107,   107,   107,   107,   107,
     107,   107,   108,   109,   109,   110,   110,   110,   111,   111,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   115,   115,   115,   115,   116,   117,
     117,   118,   118,   119,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     125,   125,   125,   126,   126,   126,   127,   127,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     1,     3,     2,     2,     1,     1,     3,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     3,     4,     1,     2,     3,     4,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     4,
       3,     2,     3,     1,     2,     2,     1,     1,     1,     2,
       5,     7,     5,     5,     7,     7,     2,     2,     2,     3,
       1,     2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    91,    86,    87,    88,    89,    90,    85,   163,     0,
      79,     0,   160,   162,    95,     0,    77,     0,    81,    83,
      94,    80,     1,   161,     0,     0,    78,     0,     0,   166,
       0,   165,     0,     0,     0,    96,    82,    83,     2,     3,
       4,     5,     0,     0,     0,    26,    27,    25,    29,     0,
       0,    24,    28,     7,    18,    30,     0,    32,    36,    39,
      42,    47,    50,    52,    54,    56,    58,    60,    62,   121,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,   148,    75,     0,   146,   147,   133,
     134,     0,   143,   135,   136,   137,   138,   167,   164,   108,
     101,   107,     0,   102,   103,     0,    98,     0,     0,    19,
      20,     0,    22,     0,    93,   110,     0,     0,     0,   124,
       0,     0,     0,   129,    12,    13,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    64,
       0,    30,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,   156,   157,   158,     0,     0,   149,   142,   144,     0,
       0,   105,   106,    99,     0,   100,     0,    97,     0,     0,
       6,    92,     0,   111,     0,   132,     0,   122,     0,   125,
     128,   130,    11,     9,     0,    16,     0,    63,    33,    34,
      35,    37,    38,    40,    41,    45,    46,    44,    43,    48,
      49,    51,    53,    55,    57,    59,     0,     0,   140,     0,
       0,     0,     0,     0,     0,   159,    76,   117,     0,     0,
     113,     0,     0,     0,   104,   109,     0,    23,     0,    31,
     131,   123,   126,     0,    10,     0,     8,     0,   139,     0,
       0,     0,     0,     0,     0,   118,   112,   114,   119,     0,
     115,     0,     0,   127,    17,    61,   150,     0,   152,   153,
       0,     0,   120,   116,    14,     0,     0,     0,     0,    15,
     151,   154,   155
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,    54,   204,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    85,   140,
      86,     8,   101,    17,    18,    10,   115,    24,    20,   238,
     103,   104,   105,   116,   239,   119,   120,   121,   122,   123,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    11,
      12,    13,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -194
static const yytype_int16 yypact[] =
{
     411,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,     2,
     411,   307,  -194,  -194,  -194,     7,  -194,   -39,  -194,    32,
     100,  -194,  -194,  -194,   -53,     7,  -194,   593,   239,  -194,
       2,  -194,    45,   175,   603,  -194,  -194,    -1,  -194,  -194,
    -194,  -194,   721,   721,   755,  -194,  -194,  -194,  -194,   479,
     561,  -194,  -194,  -194,   125,   427,   761,  -194,    96,    49,
     163,   277,   204,   -50,   -18,   -16,    66,    28,  -194,  -194,
    -194,    11,   761,    58,    20,   115,   122,   136,   360,   146,
      60,   145,   103,  -194,  -194,  -194,   -24,  -194,  -194,  -194,
    -194,   315,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,    26,   164,   154,  -194,     0,  -194,   189,   479,  -194,
    -194,   479,  -194,    73,   411,   126,   168,   262,   761,  -194,
     185,   593,   -14,  -194,  -194,  -194,   274,   635,   761,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
     761,  -194,  -194,   761,   761,   761,   761,   761,   761,   761,
     761,   761,   761,   761,   761,   761,   761,   761,   761,   761,
     761,   761,  -194,   222,   360,   761,   761,   761,   761,   284,
     403,  -194,  -194,  -194,   -20,   761,  -194,  -194,  -194,   166,
     675,  -194,   135,  -194,   411,  -194,   299,  -194,   249,   260,
    -194,  -194,   221,   135,   681,  -194,   259,  -194,   489,  -194,
    -194,  -194,  -194,  -194,    79,  -194,   -30,  -194,  -194,  -194,
    -194,    96,    96,    49,    49,   163,   163,   163,   163,   277,
     277,   204,   -50,   -18,   -16,    66,   -34,   360,  -194,    91,
      92,   111,   143,   263,   403,  -194,  -194,  -194,   264,     3,
    -194,   265,   232,   715,  -194,  -194,   272,   272,   561,  -194,
    -194,  -194,  -194,   593,  -194,   761,  -194,   761,  -194,   360,
     360,   360,   360,   761,   761,  -194,  -194,  -194,  -194,   266,
    -194,   286,   231,  -194,  -194,  -194,  -194,   295,  -194,  -194,
     149,   151,  -194,  -194,  -194,   521,   360,   285,   360,  -194,
    -194,  -194,  -194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,  -194,   -28,  -194,   -47,    90,   157,   141,
     159,   186,   205,   212,   215,   217,  -194,   -69,   -27,  -194,
     -25,    -7,     8,  -194,   350,    38,   267,     1,  -194,   -29,
    -194,   194,  -194,   -56,   -81,   -26,   131,  -193,  -194,   261,
     -76,  -194,    10,  -194,   291,  -153,  -194,  -194,  -194,  -194,
     375,  -194,  -194
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      69,    70,   169,   163,   102,   253,    14,   107,     9,   142,
      19,    14,    29,    35,   109,   110,   112,   234,    21,     9,
     182,    87,   156,    69,   113,    97,    37,    30,   141,    31,
      14,    37,    25,   200,   193,     1,    30,   175,   256,    26,
      30,   175,    98,   257,   141,   160,    27,   175,     1,   196,
     117,   175,   188,   118,   176,   189,   157,   174,   235,   158,
       2,     3,     4,     5,     6,     7,   185,    15,   242,   266,
     243,   186,    15,     2,     3,     4,     5,     6,     7,    27,
      16,   264,   159,   113,    87,   165,   113,   114,   228,   162,
     141,   179,   253,   180,    69,   199,   208,   209,   210,    30,
     205,    28,   181,   206,   161,   146,   147,    38,    39,    40,
      41,    42,    43,   207,    28,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   124,   125,   164,   226,    44,   171,   190,
     229,   230,   231,   232,   175,   254,   114,   249,   236,   114,
     255,   258,   114,   241,   143,   144,   145,   259,   260,    45,
      46,    47,   175,   175,    48,    33,   141,    34,    49,     1,
      14,    69,   252,   148,   149,    51,    52,   261,     1,    99,
     166,   173,   175,   276,   277,   278,   279,   167,   275,   126,
     127,   192,   128,   180,     2,     3,     4,     5,     6,     7,
     242,   168,   243,     2,     3,     4,     5,     6,     7,   262,
     290,   170,   292,   269,   175,   287,   271,   288,   154,   155,
     175,    69,   175,   172,     1,   184,    69,   273,   274,   141,
     183,   179,   237,   180,   194,     1,   211,   212,   280,   281,
      71,   100,     1,    38,    39,    40,    41,    42,    43,     2,
       3,     4,     5,     6,     7,   197,   198,   187,    69,   252,
       2,     3,     4,     5,     6,     7,   195,     2,     3,     4,
       5,     6,     7,    44,    72,    73,    74,    75,   202,    76,
      77,    78,    79,    80,    81,    82,   192,   237,   180,   150,
     151,   215,   216,   217,   218,    45,    46,    47,   268,   227,
      48,   284,   285,   245,    49,   213,   214,    22,    28,    83,
       1,    51,    52,   219,   220,   246,    71,    84,     1,    38,
      39,    40,    41,    42,    43,   233,   247,   250,   263,   152,
     265,   153,   282,   267,   286,     2,     3,     4,     5,     6,
       7,   248,   221,     2,     3,     4,     5,     6,     7,    44,
      72,    73,    74,    75,   283,    76,    77,    78,    79,    80,
      81,    82,   222,   291,    38,    39,    40,    41,    42,    43,
     223,    45,    46,    47,   224,    36,    48,   225,   244,   272,
      49,   191,   178,   201,    28,   177,    23,    51,    52,     0,
       0,     0,     0,    84,    44,    72,    73,    74,    75,     0,
      76,    77,    78,    79,    80,    81,    82,    38,    39,    40,
      41,    42,    43,     0,     1,     0,    45,    46,    47,     0,
       0,    48,     0,     0,     0,    49,     0,     0,     0,    28,
       0,     0,    51,    52,     0,     0,     0,    44,    84,     2,
       3,     4,     5,     6,     7,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     0,    45,
      46,    47,     0,     0,    48,     0,     0,     0,    49,     0,
       0,     0,     0,     0,   139,    51,    52,     0,     0,     0,
       0,    84,     1,    38,    39,    40,    41,    42,    43,     0,
       0,     0,     0,    38,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,    45,    46,    47,     0,     0,
      48,     0,     0,     0,    49,    45,    46,    47,     0,     0,
      48,    51,    52,   117,    49,    44,   118,     0,    50,   251,
       0,    51,    52,     0,     0,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    45,    46,    47,
       0,     0,    48,     0,     0,   117,    49,     0,   118,     0,
      50,   289,     0,    51,    52,    44,     0,    38,    39,    40,
      41,    42,    43,     0,     0,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,     0,     0,    45,    46,    47,
       0,     0,    48,     0,     0,   117,    49,    44,   118,     0,
      50,     0,     0,    51,    52,     0,     0,    44,     0,    38,
      39,    40,    41,    42,    43,     0,     0,     0,     0,    45,
      46,    47,     0,     0,    48,     0,     0,     0,    49,    45,
      46,    47,    50,     0,    48,    51,    52,     0,    49,    44,
       0,   106,     0,     0,     0,    51,    52,     0,     0,    38,
      39,    40,    41,    42,    43,    38,    39,    40,    41,    42,
      43,    45,    46,    47,     0,     0,    48,     0,     0,     0,
      49,   203,     0,     0,     0,     0,     0,    51,    52,    44,
       0,     0,     0,     0,     0,    44,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    38,    39,    40,    41,    42,
      43,    45,    46,    47,     0,     0,    48,    45,    46,    47,
      49,     0,    48,   240,     0,     0,    49,    51,    52,    44,
     248,     0,     0,    51,    52,    44,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    38,    39,    40,    41,    42,
      43,    45,    46,    47,     0,     0,    48,    45,    46,    47,
      49,     0,    48,   270,     0,     0,   108,    51,    52,    44,
       0,     0,     0,    51,    52,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    46,    47,     0,     0,    48,    45,    46,    47,
     111,     0,    48,     0,     0,     0,    49,    51,    52,     0,
       0,     0,     0,    51,    52
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-194))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      27,    27,    78,    72,    33,   198,     4,    34,     0,    56,
       9,     4,    19,    66,    42,    43,    44,   170,    10,    11,
     101,    28,    72,    50,    49,    32,    25,    19,    56,    19,
       4,    30,    71,    47,   115,     3,    28,    71,    68,    78,
      32,    71,    32,    77,    72,    17,    47,    71,     3,   118,
      64,    71,   108,    67,    78,   111,    74,    82,    78,    75,
      28,    29,    30,    31,    32,    33,    66,    65,    65,    66,
      67,    71,    65,    28,    29,    30,    31,    32,    33,    47,
      78,   234,    16,   108,    91,    65,   111,    49,   164,    78,
     118,    65,   285,    67,   121,   121,   143,   144,   145,    91,
     127,    69,   101,   128,    76,    56,    57,     4,     5,     6,
       7,     8,     9,   140,    69,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     8,     9,    77,   161,    34,    78,    66,
     165,   166,   167,   168,    71,    66,   108,   194,   175,   111,
      71,   227,   114,   180,    58,    59,    60,    66,    66,    56,
      57,    58,    71,    71,    61,    65,   194,    67,    65,     3,
       4,   198,   198,    10,    11,    72,    73,    66,     3,     4,
      65,    78,    71,   259,   260,   261,   262,    65,   257,    64,
      65,    65,    67,    67,    28,    29,    30,    31,    32,    33,
      65,    65,    67,    28,    29,    30,    31,    32,    33,    66,
     286,    65,   288,   242,    71,    66,   243,    66,    14,    15,
      71,   248,    71,    78,     3,    71,   253,   253,   255,   257,
      66,    65,    66,    67,    66,     3,   146,   147,   263,   264,
       1,    66,     3,     4,     5,     6,     7,     8,     9,    28,
      29,    30,    31,    32,    33,    70,    71,    68,   285,   285,
      28,    29,    30,    31,    32,    33,     4,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     4,    40,
      41,    42,    43,    44,    45,    46,    65,    66,    67,    12,
      13,   150,   151,   152,   153,    56,    57,    58,    66,    77,
      61,    70,    71,     4,    65,   148,   149,     0,    69,    70,
       3,    72,    73,   154,   155,    66,     1,    78,     3,     4,
       5,     6,     7,     8,     9,    41,    66,    68,    65,    52,
      66,    54,    66,    68,    39,    28,    29,    30,    31,    32,
      33,    69,   156,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    68,    40,    41,    42,    43,    44,
      45,    46,   157,    78,     4,     5,     6,     7,     8,     9,
     158,    56,    57,    58,   159,    25,    61,   160,   184,   248,
      65,   114,    91,   122,    69,    70,    11,    72,    73,    -1,
      -1,    -1,    -1,    78,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,     4,     5,     6,
       7,     8,     9,    -1,     3,    -1,    56,    57,    58,    -1,
      -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    -1,    -1,    -1,    34,    78,    28,
      29,    30,    31,    32,    33,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    47,    72,    73,    -1,    -1,    -1,
      -1,    78,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      61,    -1,    -1,    -1,    65,    56,    57,    58,    -1,    -1,
      61,    72,    73,    64,    65,    34,    67,    -1,    69,    70,
      -1,    72,    73,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,    -1,    61,    -1,    -1,    64,    65,    -1,    67,    -1,
      69,    70,    -1,    72,    73,    34,    -1,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,    -1,    61,    -1,    -1,    64,    65,    34,    67,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    34,    -1,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    61,    -1,    -1,    -1,    65,    56,
      57,    58,    69,    -1,    61,    72,    73,    -1,    65,    34,
      -1,    68,    -1,    -1,    -1,    72,    73,    -1,    -1,     4,
       5,     6,     7,     8,     9,     4,     5,     6,     7,     8,
       9,    56,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    73,    34,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,     4,
       5,     6,     7,     8,     9,     4,     5,     6,     7,     8,
       9,    56,    57,    58,    -1,    -1,    61,    56,    57,    58,
      65,    -1,    61,    68,    -1,    -1,    65,    72,    73,    34,
      69,    -1,    -1,    72,    73,    34,    -1,    -1,    -1,     4,
       5,     6,     7,     8,     9,     4,     5,     6,     7,     8,
       9,    56,    57,    58,    -1,    -1,    61,    56,    57,    58,
      65,    -1,    61,    68,    -1,    -1,    65,    72,    73,    34,
      -1,    -1,    -1,    72,    73,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    -1,    61,    56,    57,    58,
      65,    -1,    61,    -1,    -1,    -1,    65,    72,    73,    -1,
      -1,    -1,    -1,    72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,   100,   101,
     104,   128,   129,   130,     4,    65,    78,   102,   103,   106,
     107,   101,     0,   129,   106,    71,    78,    47,    69,   100,
     101,   121,   131,    65,    67,    66,   103,   106,     4,     5,
       6,     7,     8,     9,    34,    56,    57,    58,    61,    65,
      69,    72,    73,    80,    81,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     114,     1,    35,    36,    37,    38,    40,    41,    42,    43,
      44,    45,    46,    70,    78,    97,    99,   100,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   100,   121,     4,
      66,   101,   108,   109,   110,   111,    68,    97,    65,    83,
      83,    65,    83,    99,   104,   105,   112,    64,    67,   114,
     115,   116,   117,   118,     8,     9,    64,    65,    67,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    47,
      98,    83,    85,    58,    59,    60,    56,    57,    10,    11,
      12,    13,    52,    54,    14,    15,    72,    74,    75,    16,
      17,    76,    78,    96,    77,    65,    65,    65,    65,   119,
      65,    78,    78,    78,    99,    71,    78,    70,   123,    65,
      67,   106,   113,    66,    71,    66,    71,    68,   112,   112,
      66,   105,    65,   113,    66,     4,    96,    70,    71,   114,
      47,   118,     4,    66,    82,    97,    99,    97,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    88,    88,    89,
      89,    90,    91,    92,    93,    94,    99,    77,   119,    99,
      99,    99,    99,    41,   124,    78,    97,    66,   108,   113,
      68,    97,    65,    67,   110,     4,    66,    66,    69,    85,
      68,    70,   114,   116,    66,    71,    68,    77,   119,    66,
      66,    66,    66,    65,   124,    66,    66,    68,    66,   108,
      68,    97,   115,   114,    97,    96,   119,   119,   119,   119,
      99,    99,    66,    68,    70,    71,    39,    66,    66,    70,
     119,    78,   119
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
      

/* Line 1806 of yacc.c  */
#line 1817 "nyelv.tab.c"
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
#line 373 "nyelv.y"

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
  yydebug=1;
  ++argv, ++argc;
  yyin = fopen(argv[0], "r");
  yyparse(); 
}

