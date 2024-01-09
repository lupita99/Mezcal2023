/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "compiler/grammar.y" /* yacc.c:337  */

	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <memory>
	#include <string>
	using namespace std;
	extern char *yytext;
	std::string result;
	int yylex(void);	
	void yyerror(char const *);

#line 84 "grammar.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.tab.h".  */
#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "compiler/grammar.y" /* yacc.c:352  */

	#include <string>

#line 121 "grammar.tab.c" /* yacc.c:352  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    COLON = 259,
    RIGHT_ARROW = 260,
    LEFT_CURLY_BRACE = 261,
    RIGHT_CURLY_BRACE = 262,
    SEMICOLON = 263,
    LEFT_PARENTHESIS = 264,
    RIGHT_PARENTHESIS = 265,
    SINGLECOMMENT = 266,
    MULTILINECOMMENT = 267,
    SHOW = 268,
    LINEBREAK = 269,
    QUOTES = 270,
    CHARACTERS_BLOCK = 271,
    INT = 272,
    INTEGER_VALUE = 273,
    DECIMAL_VALUE = 274,
    LOAD = 275,
    STDIN = 276,
    DOLLAR_SIGN = 277,
    INCREMENTO = 278,
    DECREMENTO = 279,
    DEC = 280,
    BLN = 281,
    SET = 282,
    TRU = 283,
    FLS = 284,
    ITOB = 285,
    IF = 286,
    LEFT_BRACKET = 287,
    RIGHT_BRACKET = 288,
    EQ = 289,
    LE = 290,
    LT = 291,
    GT = 292,
    GE = 293,
    NE = 294,
    ELSE = 295,
    COMA = 296,
    STR = 297,
    DOBLE_COLON = 298,
    WHILE = 299,
    ANSWER = 300,
    PLUS = 301,
    SLASHI = 302,
    MINUS = 303,
    SLASH = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef  std::string  YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   459

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  274

#define YYUNDEFTOK  2
#define YYMAXUTOK   304

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    31,    33,    37,    46,    50,    54,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    80,
      82,    84,    86,    91,    93,    96,    99,   102,   105,   108,
     114,   117,   120,   122,   124,   128,   130,   132,   134,   136,
     138,   143,   145,   147,   149,   151,   153,   155,   157,   160,
     163,   166,   169,   172,   174,   176,   178,   180,   182,   185,
     187,   189,   191,   196,   200,   204,   206,   210,   214,   216,
     218,   220,   222,   224,   226,   230,   232,   236,   240,   242,
     244,   246,   248,   250,   252,   254,   258,   262,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "COLON", "RIGHT_ARROW",
  "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "SEMICOLON", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "SINGLECOMMENT", "MULTILINECOMMENT", "SHOW",
  "LINEBREAK", "QUOTES", "CHARACTERS_BLOCK", "INT", "INTEGER_VALUE",
  "DECIMAL_VALUE", "LOAD", "STDIN", "DOLLAR_SIGN", "INCREMENTO",
  "DECREMENTO", "DEC", "BLN", "SET", "TRU", "FLS", "ITOB", "IF",
  "LEFT_BRACKET", "RIGHT_BRACKET", "EQ", "LE", "LT", "GT", "GE", "NE",
  "ELSE", "COMA", "STR", "DOBLE_COLON", "WHILE", "ANSWER", "PLUS",
  "SLASHI", "MINUS", "SLASH", "$accept", "input", "function_list",
  "function", "statements", "statement", "bifurcation", "loop",
  "logical_eval", "comp_operator", "assignment", "integer_value",
  "decimal_value", "unitaryOperations", "std_input", "definition",
  "identifiers", "ids", "std_output", "expression", "characters_block",
  "name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -81

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   -70,    16,     6,   -37,   -70,   -70,     6,   -17,   -70,
     -10,    29,    20,    42,    35,    70,    65,   -70,    25,   -70,
     -70,    79,   105,   108,   -70,   -70,     2,   109,   110,   -70,
     -70,   -70,   115,   120,   121,   131,    77,   137,   139,    49,
      -8,   128,     6,     6,     6,   -70,     6,   104,    41,   146,
     -70,   -70,   -70,   -70,   -70,   -70,     6,   -70,   -70,   235,
     141,     3,   138,   132,   -15,   -70,     6,   140,   117,   -70,
     -70,   -70,   -70,   136,    10,   -70,   -70,   -70,   -70,   -70,
     -70,   138,    11,   226,   119,   134,   -70,     6,   -70,   -70,
      13,   -70,   -70,   -70,   -70,     6,   -70,   -70,     6,   -70,
     -70,   -70,   -70,   123,   169,     6,   159,   162,    33,   129,
     154,   180,   -70,     6,   142,   -70,     6,    64,    15,     6,
     147,   158,   160,    66,   -70,     6,     6,     6,   -70,   -70,
     -70,   185,   -70,   145,   172,   191,     6,   163,    67,   138,
     138,   178,   157,    75,   177,     9,     6,   -70,   161,   167,
     -70,   275,   -70,   289,   183,     6,   189,   174,   -70,     6,
     179,   -70,   -70,   -70,    78,     6,   182,     6,    89,   138,
     -70,   128,    41,   -70,   311,   -70,     6,    41,   -70,   -70,
     193,   -70,     6,   197,   198,   -70,   199,     6,   -70,   -70,
     -70,   194,   -70,    41,   116,   -70,   202,   -70,   -70,   -70,
     192,     6,   138,     6,   196,   -70,   214,   209,   200,   201,
       6,     6,   222,     6,     6,   241,   223,     6,   251,   255,
     238,   -70,   228,   240,   243,     6,   -70,     6,     6,    14,
      21,    58,   138,   138,   138,   138,   138,   138,   236,   237,
     246,   247,   248,   250,   224,   227,   249,   253,   260,   261,
     278,   279,   284,   285,   288,   300,   -70,   -70,   -70,   -70,
     -70,   -70,   325,   347,   361,   383,   397,   419,   -70,   -70,
     -70,   -70,   -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,    88,     0,     4,     0,     1,     2,     4,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     8,     0,    17,
      16,     0,     0,     0,    76,    76,     0,     0,     0,     7,
       9,    10,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,    65,    66,    63,     0,     0,     0,     0,
       8,     5,    11,    12,    13,    14,     0,    15,    18,     0,
       0,     0,     0,     0,     0,    87,     0,     0,    79,    81,
      67,    75,    77,     0,     0,    35,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,    64,     0,    54,    53,
       0,    55,    56,    57,    86,     0,    58,    59,     0,    71,
      74,    70,    73,     0,    77,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,    21,     0,     0,    60,     0,
       0,     0,     0,     0,    78,     0,     0,     0,    32,     8,
      19,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    82,     0,
      34,     0,     8,     0,     0,     0,     0,     0,    68,     0,
       0,    61,    62,    41,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    20,     0,    23,     0,     0,    72,    69,
       0,    46,     0,     0,     0,    42,     0,     0,    50,    51,
      83,     0,    22,     0,     0,    47,     0,    45,    44,    52,
      49,     0,     0,     0,     0,    43,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     8,     8,     8,
       8,     8,     0,     0,     0,     0,     0,     0,    24,    25,
      28,    29,    26,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   -70,   301,   310,   -38,   207,   -70,   -70,   -70,   -69,
     -70,    40,   170,   -70,   -70,   -70,   292,   -26,   -70,   -70,
     -40,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     6,     7,    18,    29,    30,    31,    47,    81,
      32,    48,    92,    33,    34,    35,    43,    36,    37,    38,
      68,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       4,    69,    99,     4,   108,     1,     8,     4,    65,     1,
     100,   101,    83,   168,    66,    10,     5,    71,    71,    93,
      45,    45,    67,    11,    46,    95,    49,   102,     1,    45,
      84,    45,   169,   113,    12,   119,    19,    20,    21,    22,
     103,   109,    70,    72,    72,    23,    73,   138,    24,    25,
     110,    45,    13,    59,   111,   127,    72,    26,    60,    14,
     232,   139,   233,   140,   141,    27,   104,   234,    15,   235,
      28,    17,    61,    62,    16,    75,    76,    77,    78,    79,
      80,    63,    45,    40,    45,    45,   136,   118,   146,   159,
     135,   151,    64,    45,   153,   121,    45,   165,   122,    91,
     182,    96,    97,   191,   236,   124,   237,    45,   194,    41,
     157,   187,    42,   133,   174,    50,    72,    51,    56,   142,
     170,   112,   114,    52,   202,   148,   149,   150,    53,    54,
     120,   190,     1,   180,    45,   129,    72,    74,   203,    55,
      19,    20,    21,    22,    65,    57,    72,    58,   128,    23,
      82,    94,    24,    25,    98,   177,    45,   137,   106,    72,
     116,    26,   105,   147,   123,   184,   117,   186,   107,    27,
      75,    76,    77,    78,    79,    80,   193,   -80,   160,   161,
     162,   125,   196,   166,   126,   131,   132,   200,   143,   134,
     144,   152,   154,   145,   155,   156,   158,    86,   164,   167,
     172,   207,   171,   209,   183,   176,   178,   179,   188,   189,
     215,   216,   181,   218,   219,   185,   201,   222,   262,   263,
     264,   265,   266,   267,   206,   229,   195,   230,   231,     1,
     197,   198,   199,   115,   204,   205,   211,    19,    20,    21,
      22,   212,   208,   210,   217,   220,    23,   213,   214,    24,
      25,    65,    85,    45,    86,   223,   221,    87,    26,   224,
     225,   226,   227,    88,    89,   228,    27,    90,   250,   244,
     245,   251,   238,   239,   240,   241,   242,   243,     1,   246,
     247,   248,   173,   249,   256,   257,    19,    20,    21,    22,
     258,   259,     1,   252,   260,    23,   175,   253,    24,    25,
      19,    20,    21,    22,   254,   255,   261,    26,     9,    23,
       3,   163,    24,    25,     1,    27,   130,    44,   192,     0,
       0,    26,    19,    20,    21,    22,     0,     0,     1,    27,
       0,    23,   268,     0,    24,    25,    19,    20,    21,    22,
       0,     0,     0,    26,     0,    23,     0,     0,    24,    25,
       1,    27,     0,     0,   269,     0,     0,    26,    19,    20,
      21,    22,     0,     0,     1,    27,     0,    23,   270,     0,
      24,    25,    19,    20,    21,    22,     0,     0,     0,    26,
       0,    23,     0,     0,    24,    25,     1,    27,     0,     0,
     271,     0,     0,    26,    19,    20,    21,    22,     0,     0,
       1,    27,     0,    23,   272,     0,    24,    25,    19,    20,
      21,    22,     0,     0,     0,    26,     0,    23,     0,     0,
      24,    25,     1,    27,     0,     0,   273,     0,     0,    26,
      19,    20,    21,    22,     0,     0,     0,    27,     0,    23,
       0,     0,    24,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
       0,    41,    17,     3,    73,     3,    43,     7,    16,     3,
      25,    26,    50,     4,    22,    32,     0,    43,    44,    59,
      18,    18,    30,    33,    22,    22,    26,    42,     3,    18,
      56,    18,    23,    22,     5,    22,    11,    12,    13,    14,
      66,    31,    42,    43,    44,    20,    46,    32,    23,    24,
      40,    18,    32,     4,    44,    22,    56,    32,     9,    17,
      46,    46,    48,    48,    49,    40,    66,    46,    33,    48,
      45,     6,    23,    24,     4,    34,    35,    36,    37,    38,
      39,    32,    18,     4,    18,    18,    22,    87,    22,    22,
     116,   129,    43,    18,   132,    95,    18,    22,    98,    59,
      22,    61,    62,   172,    46,   105,    48,    18,   177,     4,
     136,    22,     4,   113,   152,     6,   116,     7,    41,   119,
     146,    81,    82,     8,   193,   125,   126,   127,     8,     8,
      90,   171,     3,   159,    18,     6,   136,    33,    22,     8,
      11,    12,    13,    14,    16,     8,   146,     8,   108,    20,
       4,    10,    23,    24,    22,   155,    18,   117,    41,   159,
      41,    32,    22,   123,    41,   165,    32,   167,    32,    40,
      34,    35,    36,    37,    38,    39,   176,     8,   138,   139,
     140,    22,   182,   143,    22,    31,     6,   187,    41,    47,
      32,     6,    47,    33,    22,     4,    33,    19,    41,    22,
      33,   201,    41,   203,   164,    22,    17,    33,   168,   169,
     210,   211,    33,   213,   214,    33,    22,   217,   256,   257,
     258,   259,   260,   261,    32,   225,    33,   227,   228,     3,
      33,    33,    33,     7,   194,    33,    22,    11,    12,    13,
      14,    32,   202,    47,    22,     4,    20,    47,    47,    23,
      24,    16,    17,    18,    19,     4,    33,    22,    32,     4,
      22,    33,    22,    28,    29,    22,    40,    32,    44,    33,
      33,    44,   232,   233,   234,   235,   236,   237,     3,    33,
      33,    33,     7,    33,     6,     6,    11,    12,    13,    14,
       6,     6,     3,    44,     6,    20,     7,    44,    23,    24,
      11,    12,    13,    14,    44,    44,     6,    32,     7,    20,
       0,   141,    23,    24,     3,    40,   109,    25,     7,    -1,
      -1,    32,    11,    12,    13,    14,    -1,    -1,     3,    40,
      -1,    20,     7,    -1,    23,    24,    11,    12,    13,    14,
      -1,    -1,    -1,    32,    -1,    20,    -1,    -1,    23,    24,
       3,    40,    -1,    -1,     7,    -1,    -1,    32,    11,    12,
      13,    14,    -1,    -1,     3,    40,    -1,    20,     7,    -1,
      23,    24,    11,    12,    13,    14,    -1,    -1,    -1,    32,
      -1,    20,    -1,    -1,    23,    24,     3,    40,    -1,    -1,
       7,    -1,    -1,    32,    11,    12,    13,    14,    -1,    -1,
       3,    40,    -1,    20,     7,    -1,    23,    24,    11,    12,
      13,    14,    -1,    -1,    -1,    32,    -1,    20,    -1,    -1,
      23,    24,     3,    40,    -1,    -1,     7,    -1,    -1,    32,
      11,    12,    13,    14,    -1,    -1,    -1,    40,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    51,    53,    71,     0,    52,    53,    43,    52,
      32,    33,     5,    32,    17,    33,     4,     6,    54,    11,
      12,    13,    14,    20,    23,    24,    32,    40,    45,    55,
      56,    57,    60,    63,    64,    65,    67,    68,    69,    71,
       4,     4,     4,    66,    66,    18,    22,    58,    61,    71,
       6,     7,     8,     8,     8,     8,    41,     8,     8,     4,
       9,    23,    24,    32,    43,    16,    22,    30,    70,    70,
      71,    67,    71,    71,    33,    34,    35,    36,    37,    38,
      39,    59,     4,    54,    67,    17,    19,    22,    28,    29,
      32,    61,    62,    70,    10,    22,    61,    61,    22,    17,
      25,    26,    42,    67,    71,    22,    41,    32,    59,    31,
      40,    44,    61,    22,    61,     7,    41,    32,    71,    22,
      61,    71,    71,    41,    71,    22,    22,    22,    61,     6,
      55,    31,     6,    71,    47,    67,    22,    61,    32,    46,
      48,    49,    71,    41,    32,    33,    22,    61,    71,    71,
      71,    54,     6,    54,    47,    22,     4,    67,    33,    22,
      61,    61,    61,    62,    41,    22,    61,    22,     4,    23,
      67,    41,    33,     7,    54,     7,    22,    71,    17,    33,
      67,    33,    22,    61,    71,    33,    71,    22,    61,    61,
      70,    59,     7,    71,    59,    33,    71,    33,    33,    33,
      71,    22,    59,    22,    61,    33,    32,    71,    61,    71,
      47,    22,    32,    47,    47,    71,    71,    22,    71,    71,
       4,    33,    71,     4,     4,    22,    33,    22,    22,    71,
      71,    71,    46,    48,    46,    48,    46,    48,    61,    61,
      61,    61,    61,    61,    33,    33,    33,    33,    33,    33,
      44,    44,    44,    44,    44,    44,     6,     6,     6,     6,
       6,     6,    54,    54,    54,    54,    54,    54,     7,     7,
       7,     7,     7,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    62,    63,    63,    64,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    70,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,    13,     0,     2,     0,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     2,     5,
       7,     4,     8,     7,    21,    21,    22,    22,    22,    22,
       9,    13,     4,     3,     5,     1,     1,     1,     1,     1,
       1,     6,     7,     9,     8,     8,     7,     8,    12,     8,
       7,     7,     8,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     6,     1,     1,     2,     2,     3,     6,     7,
       3,     3,     7,     3,     3,     2,     0,     1,     5,     3,
       4,     3,     6,     8,     6,     7,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 27 "compiler/grammar.y" /* yacc.c:1652  */
    { result = std::string("#include <cstdio>\n #include <iostream>\n using namespace std;\n") + yyvsp[-1] + yyvsp[0]; }
#line 1477 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 31 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1483 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 33 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1489 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 38 "compiler/grammar.y" /* yacc.c:1652  */
    { 
		if(yyvsp[-12] == "main"){
			yyval = "int main(int argc, char *argv[]){\n" + yyvsp[-2] + "\n}\n";
		}else{
			yyval = std::string("\n void ") + "_" + yyvsp[-12] + "()" + "{\n" + yyvsp[-2] + "\n}\n";
		} 
	}
#line 1501 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 46 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1507 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 50 "compiler/grammar.y" /* yacc.c:1652  */
    { 
				yyval = yyvsp[-1] + yyvsp[0];
				}
#line 1515 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 54 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1521 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 58 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1527 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 60 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1533 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 62 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1539 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 64 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1545 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 66 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1551 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 68 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1557 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 70 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1563 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 72 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1569 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 74 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1575 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 76 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1]; }
#line 1581 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 80 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "if(" + yyvsp[-3] + "){\n" + yyvsp[0] + "}\n"; }
#line 1587 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 82 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "if(" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1593 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 84 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "else{\n" + yyvsp[-1] + "\n}\n";}
#line 1599 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 86 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "else if(" + yyvsp[-6] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1605 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 91 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "while(" + yyvsp[-5] + "){\n" + yyvsp[-1] +"}\n"; }
#line 1611 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 94 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for(int " + yyvsp[-19] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1617 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 97 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for(int " + yyvsp[-19] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1623 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 100 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-18] +  ";" + yyvsp[-15] + yyvsp[-14] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1629 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 103 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-18] +  ";" + yyvsp[-15] + yyvsp[-14] + yyvsp[-12] +";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1635 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 106 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-17] +  ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] + ";" + yyvsp[-10] + "=" + yyvsp[-7] + "+" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1641 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 109 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "for(int " + yyvsp[-20] + "=" + yyvsp[-17] + ";" + yyvsp[-14] + yyvsp[-13] + yyvsp[-12] + ";" + yyvsp[-10] + "=" + yyvsp[-7] + "-" + yyvsp[-5] + "){\n" + yyvsp[-1] + "}\n"; }
#line 1647 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 115 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + yyvsp[-2] + yyvsp[0]; }
#line 1653 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 118 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-11] + "[" + yyvsp[-8] + "]" + yyvsp[-6] + yyvsp[-4] + "[" + yyvsp[-1] + "]"; }
#line 1659 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 120 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1665 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 122 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0]; }
#line 1671 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 124 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + yyvsp[-2] + yyvsp[0]; }
#line 1677 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 128 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "=="; }
#line 1683 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 130 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "<="; }
#line 1689 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 132 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "<"; }
#line 1695 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 134 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ">"; }
#line 1701 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 136 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ">="; }
#line 1707 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 138 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "!="; }
#line 1713 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 143 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + "(float)" + yyvsp[-2] + "/" + yyvsp[0] + ";\n"; }
#line 1719 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 145 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1725 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 147 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-8] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1731 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 149 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1737 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 151 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[-1] + ";\n"; }
#line 1743 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 153 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "=" + yyvsp[-3] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1749 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 155 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1755 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 158 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-11] + "[" + yyvsp[-8] + "]" + "=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1761 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 161 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "[" + yyvsp[-4] + "]" + "=" + yyvsp[0] + ";\n"; }
#line 1767 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 164 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "=" + yyvsp[0] + ";\n"; }
#line 1773 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 167 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-6] + "[" + yyvsp[-3] + "]" + "+=" + yyvsp[0] + ";\n"; }
#line 1779 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 170 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-7] + "+=" + yyvsp[-4] + "[" + yyvsp[-1] + "]" + ";\n"; }
#line 1785 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 172 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=false; \n"; }
#line 1791 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 174 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=true; \n"; }
#line 1797 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 176 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1803 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 178 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1809 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 180 "compiler/grammar.y" /* yacc.c:1652  */
    {yyval = yyvsp[-2] + "=" + yyvsp[0] + ";\n";}
#line 1815 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 182 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "+=" + yyvsp[0] + ";\n";}
#line 1821 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 185 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-2] + "-=" + yyvsp[0] + ";\n";}
#line 1827 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 187 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-3] + "=" + yyvsp[0] + ";\n";}
#line 1833 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 189 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "+" + yyvsp[0] + ";\n";}
#line 1839 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 191 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-5] + "=" + yyvsp[-2] + "-" + yyvsp[0] + ";\n";}
#line 1845 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 196 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 1851 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 200 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 1857 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 204 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0] + "++;\n";}
#line 1863 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 206 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0] + "--;\n";}
#line 1869 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 210 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cin >> " + yyvsp[0] + ";\n"; }
#line 1875 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 214 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "int " + yyvsp[-5] + "[" + yyvsp[-1] + "];\n"; }
#line 1881 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 216 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "int " + yyvsp[-6] + "[" + yyvsp[-1] + "];\n"; }
#line 1887 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 218 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t bool " + yyvsp[-2] + ";\n"; }
#line 1893 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 220 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t int " + yyvsp[-2] + ";\n"; }
#line 1899 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 222 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t int " + yyvsp[-6] + "," + yyvsp[-4] + "," + yyvsp[-2] + ";\n"; }
#line 1905 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 224 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t string " + yyvsp[-2] + ";\n";}
#line 1911 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 226 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t float " + yyvsp[-2] + ";\n";}
#line 1917 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 230 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[-1] + yyvsp[0]; }
#line 1923 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 232 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = ""; }
#line 1929 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 236 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = yyvsp[0]; }
#line 1935 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 240 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "cout << ((" + yyvsp[0] + "==1) ? \"true\" : \"false\") << endl;"; }
#line 1941 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 242 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cout << " + yyvsp[0] + " << endl;\n"; }
#line 1947 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 244 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "cout << " + yyvsp[0] + " << endl;"; }
#line 1953 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 246 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "\t cout << " + yyvsp[0] + ";"; }
#line 1959 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 248 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "cout << " + yyvsp[-3] + " << " + yyvsp[0] + " << endl;"; }
#line 1965 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 250 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "cout << " + yyvsp[-5] + " << " + yyvsp[-2] + " << " + yyvsp[0] + " << endl;"; }
#line 1971 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 252 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "cout << " + yyvsp[-2] + "[" + yyvsp[0] + "]  << endl;\n"; }
#line 1977 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 254 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = "cout << " + yyvsp[-3] + "[" + yyvsp[0] + "]  << endl;\n"; }
#line 1983 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 258 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string("\t _") + yyvsp[-2] + "();\n"; }
#line 1989 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 262 "compiler/grammar.y" /* yacc.c:1652  */
    { yyval = std::string(yytext); }
#line 1995 "grammar.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 266 "compiler/grammar.y" /* yacc.c:1652  */
    {  
			yyval = std::string(yytext);
		}
#line 2003 "grammar.tab.c" /* yacc.c:1652  */
    break;


#line 2007 "grammar.tab.c" /* yacc.c:1652  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 271 "compiler/grammar.y" /* yacc.c:1918  */


void yyerror (char const *x){
	printf ("Error %s \n", x);
	exit(1);
}
