#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

<<<<<<< HEAD
static int yygrowstack(void);
#define YYPREFIX "yy"
=======
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
#line 1 "grammer.y"
 /* definition */
#include "proj2.h"
#include <stdio.h>
<<<<<<< HEAD
=======

#line 24 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb

#line 28 "y.tab.c"
#define ANDnum 257
#define ASSGNnum 258
#define DECLARATIONSnum 259
#define DOTnum 260
#define ENDDECLARATIONSnum 261
#define EQUALnum 262
#define GTnum 263
#define IDnum 264
#define INTnum 265
#define LBRACnum 266
#define LPARENnum 267
#define METHODnum 268
#define NEnum 269
#define ORnum 270
#define PROGRAMnum 271
#define RBRACnum 272
#define RPARENnum 273
#define SEMInum 274
#define VALnum 275
#define WHILEnum 276
#define CLASSnum 277
#define COMMAnum 278
#define DIVIDEnum 279
#define ELSEnum 280
#define EQnum 281
#define GEnum 282
#define ICONSTnum 283
#define IFnum 284
#define LBRACEnum 285
#define LEnum 286
#define LTnum 287
#define MINUSnum 288
#define NOTnum 289
#define PLUSnum 290
#define RBRACEnum 291
#define RETURNnum 292
#define SCONSTnum 293
#define TIMESnum 294
#define VOIDnum 295
#define ERRORnum 296
#define STRERRORnum 297
#define COMMERRORnum 298
#define IDERRORnum 299
#define BACKSLASHnum 300
#define EOFnum 301
#define YYERRCODE 256
<<<<<<< HEAD
short yylhs[] = {                                        -1,
    0,   31,   31,   32,   33,   33,   33,   34,   29,   29,
   29,   35,   35,   36,   36,   37,   37,   37,   38,   38,
   38,   38,   30,   28,   39,   39,   40,   40,   41,   41,
   41,   50,   50,   51,   51,   42,   43,   43,   44,   44,
   44,   44,   45,   45,   45,   45,   46,   46,   46,   47,
   47,   48,   48,   48,   48,   49,   49,   49,   14,   14,
=======
static const short yylhs[] = {                           -1,
    0,   32,   32,   33,   34,   34,   34,   35,   30,   30,
   30,   36,   36,   37,   37,   38,   39,   39,   39,   31,
   31,   31,   28,   29,   40,   40,   41,   41,   42,   42,
   42,   51,   51,   52,   52,   43,   44,   44,   45,   45,
   45,   45,   46,   46,   46,   46,   47,   47,   47,   48,
   48,   49,   49,   49,   49,   50,   50,   50,   14,   14,
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
   12,   12,   12,   13,   13,   15,   15,   16,   16,   10,
   10,    9,    5,    3,    3,    2,    2,   11,   11,    8,
    8,   17,   17,    7,    4,    4,    4,    4,    4,    4,
    4,    6,   19,   19,   19,   20,   20,   20,   20,   18,
   22,   22,   22,   22,   23,   23,   23,   24,   24,   24,
<<<<<<< HEAD
   21,   21,    1,   27,   27,   25,   25,   26,   26,   52,
};
short yylen[] = {                                         2,
    4,    1,    2,    3,    3,    2,    3,    1,    2,    1,
    1,    2,    3,    1,    2,    3,    4,    4,    2,    3,
    3,    2,    2,    2,    2,    1,    2,    3,    1,    1,
    1,    3,    3,    1,    3,    2,    3,    4,    6,    6,
    7,    7,    4,    3,    3,    2,    2,    3,    2,    2,
    1,    2,    2,    1,    1,    2,    3,    4,    3,    2,
    1,    2,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    3,    3,    4,    1,    3,    1,    2,    1,
    3,    3,    5,    3,    1,    3,    3,    3,    3,    3,
    3,    1,    2,    2,    1,    3,    3,    3,    1,    1,
    3,    3,    3,    1,    1,    3,    2,    1,    1,    1,
    1,    1,    2,    1,    1,    4,    3,    1,    3,    0,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    6,    0,    0,    8,   10,   12,    0,
    0,    0,   14,    0,    0,    0,    7,    9,    5,    0,
   52,   53,   13,   15,    0,    0,    0,    0,    0,    0,
    0,    0,   16,    0,    0,    0,    0,   57,   27,    0,
    0,    0,    0,  111,    0,    0,    0,    0,  112,    0,
  110,   29,    0,   95,   99,    0,  108,    0,  104,  105,
   23,   31,   30,   17,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   58,   28,    0,    0,  114,  113,  115,
    0,    0,    0,    0,    0,   94,  107,   93,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   24,   19,    0,    0,    0,   51,    0,   40,
    0,    0,   39,    0,    0,    0,    0,    0,    0,  106,
   32,    0,   33,   74,    0,    0,   87,   89,   88,   91,
   90,   86,   98,   97,   96,  103,  102,  101,   21,   20,
    0,    0,   45,    0,    0,   60,    0,    0,   66,   64,
   72,   70,   71,   69,   68,    0,    0,   65,   67,    0,
   50,    0,   42,   41,  117,    0,    0,   37,    0,   35,
   75,    0,   49,    0,    0,    0,   79,    0,   59,    0,
    0,   43,  119,  116,   38,   77,   48,   84,   82,   73,
   63,    0,   81,    0,   83,
};
short yydgoto[] = {                                       2,
   60,  135,   61,   62,  160,   63,  161,  162,  163,  164,
  165,  166,  167,  118,  168,  169,  170,   64,   65,   66,
   67,   68,   69,   70,   88,  127,   89,   75,   15,   44,
    6,    7,   11,   16,  119,   22,   23,   76,   36,   41,
   71,   72,   92,   18,   81,  153,  120,   24,   31,   73,
   95,   90,
};
short yysindex[] = {                                   -215,
 -245,    0, -191, -174, -151, -174,    0, -153,    0, -238,
    0,  -26, -210,    0, -201, -137,    0,    0,    0, -104,
 -104,   -5,    0, -107,  -74,  -65,    0,    0,    0,  -46,
    0,    0,    0,    0,  -25, -252,  -70,  -27,  -73,  -15,
  -20, -194,    0, -192,  -31,  -28,  -89,    0,    0,  -14,
  -41,  -18, -111,    0, -194, -109, -109, -109,    0,   -6,
    0,    0, -118,    0,    0, -204,    0, -242,    0,    0,
    0,    0,    0,    0, -107,  -57, -115,   -2, -228,    1,
  -10, -228,   -9,    0,    0,    4, -111,    0,    0,    0,
 -111,    5,   -8,  -22,  -90,    0,    0,    0, -123, -111,
 -111, -111, -111, -111, -111, -109, -109, -109, -109, -109,
 -109,    8,    0,    0,   -7, -160, -164,    0,  -13,    0,
    9, -228,    0, -228,  -41,   -4,    6,    7, -111,    0,
    0, -194,    0,    0,    2,   10,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -168,   12,    0, -111, -111,    0, -111, -150,    0,    0,
    0,    0,    0,    0,    0,  -11,   11,    0,    0,   -3,
    0, -160,    0,    0,    0, -111,  -41,    0,   14,    0,
    0, -111,    0, -160,  -13,  -13,    0, -111,    0, -103,
  -67,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -111,    0,  -13,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,  281,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   15,    0,    0,    0,   18,
   20,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -249,    0,    0,    0,   23,    0,
 -126,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -148,    0,    0,    0,    0,    0,    0,    0,    0, -246,
    0,    0,  -42,    0,    0,  -58,    0,  -78,    0,    0,
    0,    0,    0,    0,  -63,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -199,    0,   13,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   16,    0,    0,    0,   17,    0,    0,    0,    0,
    0,    0,    0,    0, -148,   21,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   19,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -193,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   22,    0,    0, -186,
    0,   24,    0,    0,    0,    0, -148,    0,    0,    0,
    0,    0,    0,   25,    0,    0,    0,    0,    0,   26,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
 -113,  107, -112,  -53,    0,  150,    0,    0,    0,    0,
    0,  105,    0, -117,    0,    0,    0,  -44,    0,    0,
    0,    0,  -51,    0,    0,    0, -116,    0,    0,  -69,
    0,  290,    0,    0,  289,    0,  278,    0,  -24,    0,
  -52,    0,    0,  286,  -45,   -1,  -75,    3,   72,    0,
    0,    0,
};
#define YYTABLESIZE 317
short yytable[] = {                                      93,
   83,  171,   94,  158,  159,   97,  123,  115,  175,   42,
  109,   96,   26,   98,  109,   26,  109,  109,    3,   77,
   12,   43,  109,  109,   26,  109,  109,  109,   26,   13,
   12,  109,  109,  126,  109,  109,  110,  128,  109,  109,
  109,  109,  149,  109,  109,  136,  173,  109,  174,   84,
  112,  111,   14,   20,   21,    1,  117,  146,  147,  148,
  194,  143,  144,  145,   36,  106,   13,  198,  199,   51,
   52,   35,   53,  203,   36,  179,  158,  159,   36,  180,
   78,   74,    4,  107,   25,  108,  205,   80,   54,   27,
   55,   36,   32,   56,   57,   58,   78,   78,   59,   51,
  185,  186,    5,  187,   80,  183,   80,  188,  120,  120,
   48,  154,    8,  151,  120,  120,   99,  152,  120,  155,
  120,  120,  193,  120,  120,  120,  156,  157,  136,  120,
  120,   10,  120,  120,  200,   25,  120,  120,  120,  120,
   51,  120,  120,   53,  100,  120,   42,   25,  204,  134,
  101,   25,   51,   29,   51,   53,   35,   53,  114,   54,
   51,   30,  102,  103,   56,   57,   58,  104,  105,   59,
  192,   54,  154,   54,   20,   21,   56,   57,   58,   57,
  155,   59,  197,   59,  100,  100,   47,  132,  157,   37,
  100,  100,   30,  100,  100,  100,   45,   18,   38,  100,
  133,   18,  100,  100,   92,   92,  100,  100,  100,  100,
   92,  100,  100,   92,   92,   92,  202,  117,   86,   92,
  113,   85,   92,   92,   87,   39,   92,   92,   92,   85,
   85,   85,   92,   78,   19,   85,   78,   20,   21,   46,
   40,   79,   85,   80,   82,   50,   80,   91,   85,  137,
  138,  139,  140,  141,  142,   33,   49,   85,   20,   21,
   99,  116,  122,  124,  130,  121,  150,  125,  131,   42,
  129,  117,  172,  176,  181,  184,  191,  177,  178,  189,
    1,   54,   11,   55,  190,  195,   56,  182,  196,   46,
   34,   76,  118,   22,  201,    9,   44,   47,   17,   34,
   28,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   61,    0,    0,    0,   62,
};
short yycheck[] = {                                      53,
   46,  119,   55,  117,  117,   57,   82,   77,  125,  262,
  257,   56,  262,   58,  257,   13,  263,  264,  264,   44,
  259,  274,  269,  270,  274,  272,  273,  274,  278,  268,
  259,  278,  279,   87,  281,  282,  279,   91,  285,  286,
  287,  288,  112,  290,  291,   99,  122,  294,  124,   47,
   75,  294,  291,  264,  265,  271,  285,  109,  110,  111,
  177,  106,  107,  108,  264,  270,  268,  185,  186,  264,
  265,  264,  267,  191,  274,  129,  190,  190,  278,  132,
  274,  274,  274,  288,  295,  290,  204,  274,  283,  291,
  285,  291,   21,  288,  289,  290,  265,  291,  293,  264,
  154,  155,  277,  157,  291,  151,  275,  258,  257,  258,
   39,  276,  264,  274,  263,  264,  267,  278,  267,  284,
  269,  270,  176,  272,  273,  274,  291,  292,  182,  278,
  279,  285,  281,  282,  188,  262,  285,  286,  287,  288,
  264,  290,  291,  267,  263,  294,  262,  274,  202,  273,
  269,  278,  264,  291,  264,  267,  264,  267,  274,  283,
  264,  266,  281,  282,  288,  289,  290,  286,  287,  293,
  172,  283,  276,  283,  264,  265,  288,  289,  290,  289,
  284,  293,  184,  293,  263,  264,  260,  278,  292,  264,
  269,  270,  266,  272,  273,  274,  267,  261,  264,  278,
  291,  265,  281,  282,  263,  264,  285,  286,  287,  288,
  269,  290,  291,  272,  273,  274,  284,  285,  260,  278,
  278,  264,  281,  282,  266,  272,  285,  286,  287,  272,
  273,  274,  291,  265,  261,  278,  265,  264,  265,  267,
  266,  273,  285,  275,  273,  266,  275,  266,  291,  100,
  101,  102,  103,  104,  105,  261,  272,  272,  264,  265,
  267,  264,  273,  273,  273,  265,  274,  264,  291,  262,
  266,  285,  264,  278,  273,  264,  280,  272,  272,  291,
    0,  264,  268,  264,  274,  272,  264,  278,  182,  273,
  278,  273,  272,  278,  190,    6,  273,  273,   10,   22,
   15,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  291,   -1,   -1,   -1,  291,
=======
   21,   21,    1,   27,   27,   25,   25,   26,   26,   53,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    2,    3,    1,    2,    1,
    1,    2,    3,    1,    2,    1,    3,    4,    4,    2,
    3,    3,    2,    2,    2,    1,    2,    3,    1,    1,
    1,    3,    3,    1,    3,    2,    3,    4,    6,    6,
    7,    7,    4,    3,    3,    2,    2,    3,    2,    2,
    1,    2,    2,    1,    1,    2,    3,    4,    3,    2,
    1,    2,    3,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    3,    3,    4,    1,    3,    1,    2,    1,
    3,    3,    5,    3,    1,    3,    3,    3,    3,    3,
    3,    1,    2,    2,    1,    3,    3,    3,    1,    1,
    3,    3,    3,    1,    1,    3,    2,    1,    1,    1,
    1,    1,    2,    1,    1,    4,    3,    1,    3,    0,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    6,    0,    0,    8,   10,   12,    0,
    0,    0,   14,   16,    0,    0,    0,    7,    9,    5,
    0,   52,   53,   13,   15,    0,    0,    0,    0,    0,
    0,    0,    0,   17,    0,    0,    0,    0,   57,   27,
    0,    0,    0,    0,  111,    0,    0,    0,    0,  112,
    0,  110,   29,    0,   95,   99,    0,  108,    0,  104,
  105,   23,   31,   30,   18,    0,   19,    0,    0,    0,
    0,    0,    0,   58,   28,    0,    0,  114,  113,  115,
    0,    0,    0,    0,    0,   94,  107,   93,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   24,    0,    0,    0,   51,    0,   40,    0,    0,
   39,    0,    0,    0,    0,    0,    0,  106,   32,    0,
   33,   74,    0,    0,   87,   89,   88,   91,   90,   86,
   98,   97,   96,  103,  102,  101,   20,    0,    0,    0,
   45,    0,    0,   60,    0,    0,   66,   64,   72,   70,
   71,   69,   68,    0,   61,   65,   67,    0,   50,    0,
   42,   41,  117,    0,    0,   37,    0,   35,   75,    0,
   21,   22,   49,    0,    0,    0,   79,    0,    0,   59,
    0,   43,  119,  116,   38,   77,   48,   84,   82,   73,
   63,    0,   81,    0,   83,
};
static const short yydgoto[] = {                          2,
   61,  133,   62,   63,  158,   64,  159,  160,  161,  162,
  163,  164,  165,  116,  166,  167,  168,   65,   66,   67,
   68,   69,   70,   71,   88,  125,   89,   45,   77,   15,
  112,    6,    7,   11,   16,  117,   22,   23,   24,   37,
   42,   72,   73,   92,   18,   81,  151,  118,   25,   32,
   74,   95,   90,
};
static const short yysindex[] = {                      -259,
 -236,    0, -257, -221, -124, -221,    0, -150,    0, -238,
    0,  -19, -246,    0, -239, -210,    0,    0,    0,  -89,
  -89,  -17,    0,    0, -122, -113,  -85,    0,    0,    0,
  -86,    0,    0,    0,    0,  -68, -169,  -99,  -61,  -35,
  -53,  -55, -198,    0,  -96,  -63,  -41,  -15,    0,    0,
  -29,  -31,  -45, -126,    0, -198, -181, -181, -181,    0,
  -39,    0,    0,  -64,    0,    0, -138,    0, -243,    0,
    0,    0,    0,    0,    0, -122,    0,  -11, -235,  -10,
  -16, -235,  -14,    0,    0,   -8, -126,    0,    0,    0,
 -126,  -12,  -13,  -30, -125,    0,    0,    0, -134, -126,
 -126, -126, -126, -126, -126, -181, -181, -181, -181, -181,
 -181,    0, -104,  -77, -147,    0,  -27,    0,   -2, -235,
    0, -235,  -31,   -9,   -7,   -5, -126,    0,    0, -198,
    0,    0,   -3,   -4,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -48, -129,   -1,
    0, -126, -126,    0, -126, -183,    0,    0,    0,    0,
    0,    0,    0, -209,    0,    0,    0,    1,    0,  -77,
    0,    0,    0, -126,  -31,    0,    3,    0,    0, -126,
    0,    0,    0,  -77,  -27,  -27,    0, -126, -204,    0,
  -33,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -126,    0,  -27,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  264,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    4,    0,    0,    0,    2,
    7,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -101,    0,    0,    0,    9,
    0,  -93,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -247,    0,    0,    0,    0,    0,    0,    0,    0,
 -163,    0,    0,  -58,    0,    0,  -78,    0,  -98,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -131,    0,    5,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    6,    0,    0,    0,    0,    0,    0,
    0,    0, -247,    8,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   11,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -178,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -177,    0,   12,
    0,    0,    0,    0, -247,    0,    0,    0,    0,    0,
    0,    0,    0,   13,    0,    0,    0,    0, -170,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
 -112,   88, -111,  -54,    0,  136,    0,    0,    0,    0,
    0,    0,   87, -115,    0,    0,    0,  -44,    0,    0,
    0,    0,  -52,    0,    0,    0, -114,  164,  130,    0,
    0,    0,  276,    0,    0,  277,    0,  266,    0,  213,
    0,  -51,    0,    0,  275,  -46, -116,  -74,   -6,   34,
    0,    0,    0,
};
#define YYTABLESIZE 290
static const short yytable[] = {                         93,
   83,  169,  156,  157,   94,   97,   27,  121,  173,  120,
  120,    1,   96,  109,   98,  120,    4,   20,   21,  120,
   12,  120,  120,   12,  120,  120,  120,    3,   13,   13,
  120,  120,  124,  120,  120,  110,  126,  120,  120,  120,
  120,   84,  120,  120,  134,  171,  120,  172,   26,  115,
  111,   28,   14,  192,   33,    5,  144,  145,  146,   52,
  194,  141,  142,  143,  189,   52,   53,  197,   54,  198,
  199,  152,  177,   49,  188,  203,  156,  157,  178,  153,
   30,  190,   52,   99,   55,   54,   56,  155,  205,   57,
   58,   59,   43,  109,   60,   78,   80,  185,  186,  109,
  187,   55,  183,   62,   44,  109,  109,   58,  109,  109,
  109,   60,   78,   80,  109,  109,   52,  109,  109,  193,
   62,  109,  109,  109,  109,  134,  109,  109,  152,   52,
  109,  106,   54,  200,   10,   78,  153,   52,  132,    8,
   54,   36,   36,  154,  155,   80,   36,  204,   55,  107,
   38,  108,  130,   57,   58,   59,   55,   43,   60,   36,
   26,   57,   58,   59,  100,  131,   60,   46,   25,  147,
  100,  100,   26,  100,  100,  100,   31,   75,   39,  100,
   25,   76,  100,  100,   92,   40,  100,  100,  100,  100,
   92,  100,  100,   92,   92,   92,  149,   41,  100,   92,
  150,   78,   92,   92,  101,   47,   92,   92,   92,   79,
   51,   80,   92,   85,   85,   85,  102,  103,   50,   85,
   91,  104,  105,   78,   48,  181,   85,   99,   86,   76,
   31,   82,   85,   80,   87,  135,  136,  137,  138,  139,
  140,   19,   85,   34,   20,   21,   20,   21,   20,   21,
  202,  115,  114,  127,  119,  123,  120,  115,  122,  128,
  129,  170,  184,    1,  175,   54,  176,  196,  174,  179,
   55,   11,   56,  180,  195,  201,  148,  182,   46,  118,
  191,    9,   34,   76,   44,   47,   17,   35,  113,   29,
};
static const short yycheck[] = {                         54,
   47,  117,  115,  115,   56,   58,   13,   82,  123,  257,
  258,  271,   57,  257,   59,  263,  274,  264,  265,  267,
  259,  269,  270,  259,  272,  273,  274,  264,  268,  268,
  278,  279,   87,  281,  282,  279,   91,  285,  286,  287,
  288,   48,  290,  291,   99,  120,  294,  122,  295,  285,
  294,  291,  291,  170,   21,  277,  109,  110,  111,  264,
  175,  106,  107,  108,  274,  264,  265,  184,  267,  185,
  186,  276,  127,   40,  258,  191,  189,  189,  130,  284,
  291,  291,  264,  267,  283,  267,  285,  292,  204,  288,
  289,  290,  262,  257,  293,  274,  274,  152,  153,  263,
  155,  283,  149,  274,  274,  269,  270,  289,  272,  273,
  274,  293,  291,  291,  278,  279,  264,  281,  282,  174,
  291,  285,  286,  287,  288,  180,  290,  291,  276,  264,
  294,  270,  267,  188,  285,  265,  284,  264,  273,  264,
  267,  264,  274,  291,  292,  275,  278,  202,  283,  288,
  264,  290,  278,  288,  289,  290,  283,  262,  293,  291,
  262,  288,  289,  290,  263,  291,  293,  267,  262,  274,
  269,  270,  274,  272,  273,  274,  266,  274,  264,  278,
  274,  278,  281,  282,  263,  272,  285,  286,  287,  288,
  269,  290,  291,  272,  273,  274,  274,  266,  263,  278,
  278,  265,  281,  282,  269,  267,  285,  286,  287,  273,
  266,  275,  291,  272,  273,  274,  281,  282,  272,  278,
  266,  286,  287,  265,  260,  274,  285,  267,  260,  278,
  266,  273,  291,  275,  266,  100,  101,  102,  103,  104,
  105,  261,  272,  261,  264,  265,  264,  265,  264,  265,
  284,  285,  264,  266,  265,  264,  273,  285,  273,  273,
  291,  264,  264,    0,  272,  264,  272,  180,  278,  273,
  264,  268,  264,  278,  272,  189,  113,  148,  273,  272,
  280,    6,  278,  273,  273,  273,   10,   22,   76,   15,
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 301
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ANDnum","ASSGNnum",
"DECLARATIONSnum","DOTnum","ENDDECLARATIONSnum","EQUALnum","GTnum","IDnum",
"INTnum","LBRACnum","LPARENnum","METHODnum","NEnum","ORnum","PROGRAMnum",
"RBRACnum","RPARENnum","SEMInum","VALnum","WHILEnum","CLASSnum","COMMAnum",
"DIVIDEnum","ELSEnum","EQnum","GEnum","ICONSTnum","IFnum","LBRACEnum","LEnum",
"LTnum","MINUSnum","NOTnum","PLUSnum","RBRACEnum","RETURNnum","SCONSTnum",
"TIMESnum","VOIDnum","ERRORnum","STRERRORnum","COMMERRORnum","IDERRORnum",
"BACKSLASHnum","EOFnum",
};
char *yyrule[] = {
"$accept : Program",
"Program : PROGRAMnum IDnum SEMInum ProgramB",
"ProgramB : ClassDecl",
"ProgramB : ProgramB ClassDecl",
"ClassDecl : CLASSnum IDnum ClassBody",
"ClassBody : LBRACEnum ClassBodyB RBRACEnum",
"ClassBody : LBRACEnum RBRACEnum",
"ClassBody : LBRACEnum ClassBodyC RBRACEnum",
"ClassBodyB : Decls",
"ClassBodyC : ClassBodyC MethodDecl",
"ClassBodyC : MethodDecl",
"ClassBodyC : ClassBodyB",
"Decls : DECLARATIONSnum ENDDECLARATIONSnum",
"Decls : DECLARATIONSnum DeclsB ENDDECLARATIONSnum",
"DeclsB : FieldDecl",
"DeclsB : DeclsB FieldDecl",
<<<<<<< HEAD
"FieldDecl : Type VariableDeclId SEMInum",
"FieldDecl : Type VariableDeclId FieldDeclC SEMInum",
"FieldDecl : Type VariableDeclId FieldDeclC FieldDeclD",
"FieldDeclB : VariableDeclId SEMInum",
"FieldDeclB : VariableDeclId FieldDeclC SEMInum",
"FieldDeclB : FieldDeclD VariableDeclId FieldDeclC",
"FieldDeclB : FieldDeclD VariableDeclId",
"FieldDeclC : EQUALnum VariableInitializer",
"FieldDeclD : FieldDeclB COMMAnum",
=======
"FieldDecl : FieldDeclB",
"FieldDeclB : Type VariableDeclId SEMInum",
"FieldDeclB : Type VariableDeclId FieldDeclD SEMInum",
"FieldDeclB : Type VariableDeclId FieldDeclD FieldDeclE",
"FieldDeclC : VariableDeclId SEMInum",
"FieldDeclC : VariableDeclId FieldDeclD SEMInum",
"FieldDeclC : VariableDeclId FieldDeclD FieldDeclE",
"FieldDeclD : EQUALnum VariableInitializer",
"FieldDeclE : COMMAnum FieldDeclC",
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
"VariableDeclId : IDnum VariableDeclIdB",
"VariableDeclId : IDnum",
"VariableDeclIdB : LBRACnum RBRACnum",
"VariableDeclIdB : VariableDeclIdB LBRACnum RBRACnum",
"VariableInitializer : Expression",
"VariableInitializer : ArrayInitializer",
"VariableInitializer : ArrayCreationExpression",
"ArrayInitializer : LBRACEnum VariableInitializer RBRACEnum",
"ArrayInitializer : LBRACEnum ArrayInitializerB RBRACEnum",
"ArrayInitializerB : VariableInitializer",
"ArrayInitializerB : ArrayInitializerB COMMAnum VariableInitializer",
"ArrayCreationExpression : INTnum ArrayCreationExpressionB",
"ArrayCreationExpressionB : LBRACnum Expression RBRACnum",
"ArrayCreationExpressionB : ArrayCreationExpressionB LBRACnum Expression RBRACnum",
"MethodDecl : METHODnum Type IDnum LPARENnum RPARENnum Block",
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum RPARENnum Block",
"MethodDecl : METHODnum Type IDnum LPARENnum FormalParameterList RPARENnum Block",
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum FormalParameterList RPARENnum Block",
"FormalParameterList : VALnum INTnum IDnum FormalParameterListC",
"FormalParameterList : VALnum INTnum IDnum",
"FormalParameterList : INTnum IDnum FormalParameterListC",
"FormalParameterList : INTnum IDnum",
"FormalParameterListC : COMMAnum IDnum",
"FormalParameterListC : COMMAnum IDnum FormalParameterListC",
"FormalParameterListC : SEMInum FormalParameterList",
"Block : Decls StatementList",
"Block : StatementList",
"Type : IDnum TypeB",
"Type : INTnum TypeB",
"Type : IDnum",
"Type : INTnum",
"TypeB : LBRACnum RBRACnum",
"TypeB : LBRACnum RBRACnum TypeB",
"TypeB : LBRACnum RBRACnum DOTnum Type",
"StatementList : LBRACEnum Statementsop RBRACEnum",
"StatementList : LBRACEnum RBRACEnum",
"Statementsop : Statement",
<<<<<<< HEAD
"Statementsop : Statement SEMInum",
"Statementsop : Statement SEMInum Statementsop",
=======
"Statementsop : Statementsop SEMInum",
"Statementsop : Statementsop SEMInum Statement",
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
"Statement : AssignmentStatement",
"Statement : Statements_Op",
"Statements_Op : MethodCallStatement",
"Statements_Op : Statements_Op2",
"Statements_Op2 : ReturnStatement",
"Statements_Op2 : Statements_Op3",
"Statements_Op3 : IfStatement",
"Statements_Op3 : Statements_Op4",
"Statements_Op4 : WhileStatement",
"AssignmentStatement : Variable ASSGNnum Expression",
"MethodCallStatement : Variable LPARENnum RPARENnum",
"MethodCallStatement : Variable LPARENnum Expre RPARENnum",
"Expre : Expression",
"Expre : Expression COMMAnum Expre",
"ReturnStatement : RETURNnum",
"ReturnStatement : RETURNnum Expression",
"IfStatement : IFState_Op",
"IfStatement : IFState_Op ELSEnum StatementList",
"IFState_Op : IFnum Expression StatementList",
"IFState_Op : IFState_Op ELSEnum IFnum Expression StatementList",
"WhileStatement : WHILEnum Expression StatementList",
"Expression : SimpleExpression",
"Expression : SimpleExpression LTnum SimpleExpression",
"Expression : SimpleExpression GTnum SimpleExpression",
"Expression : SimpleExpression EQnum SimpleExpression",
"Expression : SimpleExpression NEnum SimpleExpression",
"Expression : SimpleExpression LEnum SimpleExpression",
"Expression : SimpleExpression GEnum SimpleExpression",
"SimpleExpression : Simple_op2",
"Simple_op : PLUSnum Term",
"Simple_op : MINUSnum Term",
"Simple_op : Term",
"Simple_op2 : Simple_op2 PLUSnum Term",
"Simple_op2 : Simple_op2 MINUSnum Term",
"Simple_op2 : Simple_op2 ORnum Term",
"Simple_op2 : Simple_op",
"Term : Term_op",
"Term_op : Term_op TIMESnum Factor",
"Term_op : Term_op DIVIDEnum Factor",
"Term_op : Term_op ANDnum Factor",
"Term_op : Factor",
"Factor : Factor_op",
"Factor : LPARENnum Expression RPARENnum",
"Factor : NOTnum Factor",
"Factor_op : UnsignedConstant",
"Factor_op : Variable",
"Factor_op : MethodCallStatement",
"UnsignedConstant : ICONSTnum",
"UnsignedConstant : SCONSTnum",
"Variable : IDnum Variable_op",
"Variable_op : Variable_op2",
"Variable_op : epsilon",
"Variable_op2 : LBRACnum Variable_op3 RBRACnum Variable_op",
"Variable_op2 : DOTnum IDnum Variable_op",
"Variable_op3 : Expression",
"Variable_op3 : Expression COMMAnum Expression",
"epsilon :",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
<<<<<<< HEAD
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 211 "grammer.y"

=======
static YYSTACKDATA yystack;
#line 197 "grammer.y"
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
tree GlobalType = NULL; 
tree ReturnType = NULL;
int yycolumn, yyline;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"

<<<<<<< HEAD
#line 446 "y.tab.c"
=======
#line 470 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
<<<<<<< HEAD
#line 24 "grammer.y"
{yyval.tptr = MakeTree(ProgramOp, yyvsp[0].tptr, MakeLeaf(IDNode, yyvsp[-2].intg)); printtree(yyval.tptr, 0);}
break;
case 2:
#line 26 "grammer.y"
{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yyvsp[0].tptr);}
break;
case 3:
#line 27 "grammer.y"
{yyval.tptr = MakeTree(ClassOp, yyvsp[-1].tptr, yyvsp[0].tptr);}
break;
case 4:
#line 31 "grammer.y"
{yyval.tptr = MakeTree(ClassDefOp, yyvsp[0].tptr, MakeLeaf(IDNode, yyvsp[-1].intg));}
break;
case 5:
#line 35 "grammer.y"
{yyval.tptr = yyvsp[-1].tptr;}
break;
case 6:
#line 36 "grammer.y"
{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 7:
#line 37 "grammer.y"
{yyval.tptr = yyvsp[-1].tptr;}
break;
case 8:
#line 41 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 9:
#line 44 "grammer.y"
{ yyval.tptr = MakeTree(BodyOp, yyvsp[-1].tptr, yyvsp[0].tptr);}
break;
case 10:
#line 45 "grammer.y"
{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yyvsp[0].tptr);}
break;
case 11:
#line 45 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 12:
#line 49 "grammer.y"
{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 13:
#line 50 "grammer.y"
{yyval.tptr = yyvsp[-1].tptr;}
break;
case 14:
#line 52 "grammer.y"
{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yyvsp[0].tptr);}
break;
case 15:
#line 53 "grammer.y"
{yyval.tptr = MakeTree(BodyOp, yyvsp[-1].tptr, yyvsp[0].tptr);}
break;
case 16:
#line 74 "grammer.y"
{GlobalType = yyvsp[-2].tptr; yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yyvsp[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 17:
#line 75 "grammer.y"
{ GlobalType = yyvsp[-3].tptr; yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yyvsp[-2].tptr, MakeTree(CommaOp, GlobalType, yyvsp[-1].tptr)));}
break;
case 18:
#line 76 "grammer.y"
{GlobalType = yyvsp[-3].tptr; yyval.tptr = MakeTree(DeclOp, yyvsp[0].tptr, MakeTree(CommaOp, yyvsp[-2].tptr, MakeTree(CommaOp, GlobalType, yyvsp[-1].tptr)));}
break;
case 19:
#line 78 "grammer.y"
{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yyvsp[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 20:
#line 79 "grammer.y"
{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yyvsp[-2].tptr, MakeTree(CommaOp, GlobalType, yyvsp[-1].tptr)));}
break;
case 21:
#line 80 "grammer.y"
{yyval.tptr = MakeTree(DeclOp, yyvsp[-2].tptr, MakeTree(CommaOp, yyvsp[-1].tptr, MakeTree(CommaOp, GlobalType, yyvsp[0].tptr)));}
break;
case 22:
#line 81 "grammer.y"
{yyval.tptr = MakeTree(DeclOp, yyvsp[-1].tptr, MakeTree(CommaOp, yyvsp[0].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 23:
#line 83 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 24:
#line 85 "grammer.y"
{yyval.tptr = yyvsp[-1].tptr;}
break;
case 25:
#line 91 "grammer.y"
{yyval.tptr = MakeLeaf(IDNode, yyvsp[-1].intg);}
break;
case 26:
#line 92 "grammer.y"
{yyval.tptr = MakeLeaf(IDNode, yyvsp[0].intg);}
break;
case 27:
#line 94 "grammer.y"
{}
break;
case 28:
#line 95 "grammer.y"
{}
break;
case 29:
#line 100 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 30:
#line 101 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 31:
#line 102 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 32:
#line 107 "grammer.y"
{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yyvsp[-1].tptr), GlobalType);}
break;
case 33:
#line 108 "grammer.y"
{yyval.tptr = MakeTree(ArrayTypeOp, yyvsp[-1].tptr, GlobalType);}
break;
case 34:
#line 110 "grammer.y"
{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yyvsp[0].tptr);}
break;
case 35:
#line 111 "grammer.y"
{yyval.tptr = MakeTree(CommaOp, yyvsp[-2].tptr, yyvsp[0].tptr);}
break;
case 36:
#line 116 "grammer.y"
{yyval.tptr = MakeTree(ArrayTypeOp, yyvsp[0].tptr, MakeLeaf(INTEGERTNode, 0));}
break;
case 37:
#line 118 "grammer.y"
{yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yyvsp[-1].tptr);}
break;
case 38:
#line 119 "grammer.y"
{yyval.tptr = MakeTree(BoundOp, yyvsp[-3].tptr, yyvsp[-1].tptr);}
break;
case 39:
#line 124 "grammer.y"
{ReturnType = yyvsp[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yyvsp[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), yyvsp[0].tptr);}
break;
case 40:
#line 125 "grammer.y"
{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yyvsp[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), yyvsp[0].tptr);}
break;
case 41:
#line 126 "grammer.y"
{ReturnType = yyvsp[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yyvsp[-4].intg), MakeTree(SpecOp, yyvsp[-2].tptr, ReturnType)), yyvsp[0].tptr);}
break;
case 42:
#line 127 "grammer.y"
{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yyvsp[-4].intg), yyvsp[-2].tptr), yyvsp[0].tptr);}
break;
case 43:
#line 133 "grammer.y"
{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[-1].intg), MakeLeaf(INTEGERTNode, 0)), yyvsp[0].tptr);}
break;
case 44:
#line 134 "grammer.y"
{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 45:
#line 135 "grammer.y"
{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[-1].intg), MakeLeaf(INTEGERTNode, 0)), yyvsp[0].tptr);}
break;
case 46:
#line 136 "grammer.y"
{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 47:
#line 138 "grammer.y"
{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 48:
#line 139 "grammer.y"
{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[-1].intg), MakeLeaf(INTEGERTNode, 0)), yyvsp[0].tptr);}
break;
case 49:
#line 140 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 50:
#line 145 "grammer.y"
{yyval.tptr = MakeTree(BodyOp, yyvsp[-1].tptr, yyvsp[0].tptr);}
break;
case 51:
#line 146 "grammer.y"
{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yyvsp[0].tptr);}
break;
case 52:
#line 152 "grammer.y"
{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yyvsp[-1].intg), yyvsp[0].tptr);}
break;
case 53:
#line 153 "grammer.y"
{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), yyvsp[0].tptr);}
break;
case 54:
#line 154 "grammer.y"
{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yyvsp[0].intg), MakeLeaf(DUMMYNode, 0));}
break;
case 55:
#line 155 "grammer.y"
{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 56:
#line 157 "grammer.y"
{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 57:
#line 158 "grammer.y"
{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), yyvsp[0].tptr);}
break;
case 58:
#line 159 "grammer.y"
{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, yyvsp[0].tptr, MakeLeaf(DUMMYNode, 0)));}
break;
case 59:
#line 164 "grammer.y"
{yyval.tptr = yyvsp[-1].tptr;}
break;
case 60:
#line 164 "grammer.y"
{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));}
break;
case 61:
#line 165 "grammer.y"
{yyval.tptr =yyvsp[0].tptr;}
break;
case 62:
#line 165 "grammer.y"
{yyval.tptr =yyvsp[-1].tptr;}
break;
case 63:
#line 165 "grammer.y"
{yyval.tptr = MakeTree(StmtOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 64:
#line 167 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 65:
#line 167 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 66:
#line 168 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 67:
#line 168 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 68:
#line 169 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 69:
#line 169 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 70:
#line 170 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 71:
#line 170 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 72:
#line 171 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 73:
#line 173 "grammer.y"
{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yyvsp[-2].tptr),yyvsp[0].tptr);}
break;
case 74:
#line 175 "grammer.y"
{yyval.tptr = MakeTree(RoutineCallOp,yyvsp[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 75:
#line 175 "grammer.y"
{yyval.tptr = MakeTree(RoutineCallOp,yyvsp[-3].tptr,yyvsp[-1].tptr); }
break;
case 76:
#line 176 "grammer.y"
{yyval.tptr = MakeTree(CommaOp, yyvsp[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 77:
#line 176 "grammer.y"
{yyval.tptr = MakeTree(CommaOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 78:
#line 178 "grammer.y"
{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 79:
#line 178 "grammer.y"
{yyval.tptr=MakeTree(ReturnOp, yyvsp[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 80:
#line 180 "grammer.y"
{yyval.tptr= yyvsp[0].tptr;}
break;
case 81:
#line 180 "grammer.y"
{yyval.tptr = MakeTree(IfElseOp, yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 82:
#line 181 "grammer.y"
{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yyvsp[-1].tptr, yyvsp[0].tptr));}
break;
case 83:
#line 181 "grammer.y"
{yyval.tptr=MakeTree(IfElseOp, yyvsp[-4].tptr, MakeTree(CommaOp,yyvsp[-1].tptr,yyvsp[0].tptr));}
break;
case 84:
#line 183 "grammer.y"
{yyval.tptr= MakeTree(LoopOp,yyvsp[-1].tptr, yyvsp[0].tptr );}
break;
case 85:
#line 185 "grammer.y"
{yyval.tptr = yyvsp[0].tptr;}
break;
case 86:
#line 187 "grammer.y"
{ yyval.tptr=MakeTree(LTOp,yyvsp[-2].tptr,yyvsp[0].tptr); }
break;
case 87:
#line 188 "grammer.y"
{ yyval.tptr=MakeTree(GTOp,yyvsp[-2].tptr,yyvsp[0].tptr); }
break;
case 88:
#line 189 "grammer.y"
{ yyval.tptr=MakeTree(EQOp,yyvsp[-2].tptr,yyvsp[0].tptr); }
break;
case 89:
#line 190 "grammer.y"
{ yyval.tptr=MakeTree(NEOp,yyvsp[-2].tptr,yyvsp[0].tptr); }
break;
case 90:
#line 191 "grammer.y"
{ yyval.tptr=MakeTree(LEOp,yyvsp[-2].tptr,yyvsp[0].tptr); }
break;
case 91:
#line 192 "grammer.y"
{ yyval.tptr=MakeTree(GEOp,yyvsp[-2].tptr,yyvsp[0].tptr); }
break;
case 93:
#line 195 "grammer.y"
{yyval.tptr=MakeTree(AddOp,yyvsp[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 94:
#line 195 "grammer.y"
{yyval.tptr=MakeTree(UnaryNegOp,yyvsp[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 95:
#line 195 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 96:
#line 196 "grammer.y"
{yyval.tptr= MakeTree(AddOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 97:
#line 196 "grammer.y"
{yyval.tptr= MakeTree(UnaryNegOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 98:
#line 196 "grammer.y"
{yyval.tptr= MakeTree(OrOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 99:
#line 196 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 100:
#line 198 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 101:
#line 199 "grammer.y"
{yyval.tptr= MakeTree(MultOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 102:
#line 199 "grammer.y"
{yyval.tptr= yyval.tptr= MakeTree(DivOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 103:
#line 199 "grammer.y"
{yyval.tptr= MakeTree(AndOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
break;
case 104:
#line 199 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 105:
#line 201 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 106:
#line 201 "grammer.y"
{yyval.tptr=yyvsp[-1].tptr;}
break;
case 107:
#line 201 "grammer.y"
{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yyvsp[0].tptr); }
break;
case 108:
#line 202 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 109:
#line 202 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 110:
#line 202 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 111:
#line 204 "grammer.y"
{yyval.tptr= MakeLeaf(NUMNode, yyvsp[0].intg);}
break;
case 112:
#line 204 "grammer.y"
{yyval.tptr = MakeLeaf(STRINGNode, yyvsp[0].intg);}
break;
case 113:
#line 206 "grammer.y"
{yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yyvsp[-1].intg), yyvsp[0].tptr);}
break;
case 114:
#line 207 "grammer.y"
{yyval.tptr=yyvsp[0].tptr;}
break;
case 115:
#line 207 "grammer.y"
{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 116:
#line 208 "grammer.y"
{yyval.tptr=MakeTree(SelectOp, yyvsp[-2].tptr, yyvsp[0].tptr);}
break;
case 117:
#line 208 "grammer.y"
{yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yyvsp[-1].intg),MakeLeaf(DUMMYNode,0)), yyvsp[0].tptr);}
break;
case 118:
#line 209 "grammer.y"
{yyval.tptr = MakeTree(IndexOp, yyvsp[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 119:
#line 209 "grammer.y"
{yyval.tptr = MakeTree(IndexOp,yyvsp[-2].tptr ,MakeTree(IndexOp, yyvsp[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 120:
#line 210 "grammer.y"
{}
break;
#line 1103 "y.tab.c"
=======
#line 26 "grammer.y"
	{yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); printtree(yyval.tptr, 0);}
break;
case 2:
#line 28 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 3:
#line 29 "grammer.y"
	{yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 4:
#line 33 "grammer.y"
	{yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));}
break;
case 5:
#line 37 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 6:
#line 38 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode, 0);}
break;
case 7:
#line 39 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 8:
#line 43 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 9:
#line 46 "grammer.y"
	{ yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 10:
#line 47 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode,0), yystack.l_mark[0].tptr);}
break;
case 11:
#line 47 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 12:
#line 51 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 13:
#line 52 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 14:
#line 54 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 15:
#line 55 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 16:
#line 61 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 17:
#line 63 "grammer.y"
	{GlobalType = yystack.l_mark[-2].tptr; yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 18:
#line 64 "grammer.y"
	{ GlobalType = yystack.l_mark[-3].tptr; yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 19:
#line 65 "grammer.y"
	{GlobalType = yystack.l_mark[-3].tptr; yyval.tptr = MakeTree(DeclOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 20:
#line 67 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-1].tptr, MakeTree(CommaOp, GlobalType, MakeLeaf(DUMMYNode, 0))));}
break;
case 21:
#line 68 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, MakeLeaf(DUMMYNode, 0), MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 22:
#line 69 "grammer.y"
	{yyval.tptr = MakeTree(DeclOp, yystack.l_mark[0].tptr, MakeTree(CommaOp, yystack.l_mark[-2].tptr, MakeTree(CommaOp, GlobalType, yystack.l_mark[-1].tptr)));}
break;
case 23:
#line 71 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 24:
#line 73 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 25:
#line 79 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);}
break;
case 26:
#line 80 "grammer.y"
	{yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);}
break;
case 27:
#line 82 "grammer.y"
	{}
break;
case 28:
#line 83 "grammer.y"
	{}
break;
case 29:
#line 88 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 30:
#line 89 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 31:
#line 90 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 32:
#line 95 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr), GlobalType);}
break;
case 33:
#line 96 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, GlobalType);}
break;
case 34:
#line 98 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 35:
#line 99 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 36:
#line 104 "grammer.y"
	{yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, 0));}
break;
case 37:
#line 106 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[-1].tptr);}
break;
case 38:
#line 107 "grammer.y"
	{yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);}
break;
case 39:
#line 112 "grammer.y"
	{ReturnType = yystack.l_mark[-4].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , ReturnType)), yystack.l_mark[0].tptr);}
break;
case 40:
#line 113 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), MakeTree(SpecOp,MakeLeaf(DUMMYNode, 0) , MakeLeaf(DUMMYNode, 0))), yystack.l_mark[0].tptr);}
break;
case 41:
#line 114 "grammer.y"
	{ReturnType = yystack.l_mark[-5].tptr; yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), MakeTree(SpecOp, yystack.l_mark[-2].tptr, ReturnType)), yystack.l_mark[0].tptr);}
break;
case 42:
#line 115 "grammer.y"
	{yyval.tptr = MakeTree(MethodOp, MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr), yystack.l_mark[0].tptr);}
break;
case 43:
#line 121 "grammer.y"
	{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 44:
#line 122 "grammer.y"
	{yyval.tptr = MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 45:
#line 123 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 46:
#line 124 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 47:
#line 126 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0)), MakeLeaf(DUMMYNode, 0));}
break;
case 48:
#line 127 "grammer.y"
	{yyval.tptr = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), MakeLeaf(INTEGERTNode, 0)), yystack.l_mark[0].tptr);}
break;
case 49:
#line 128 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 50:
#line 132 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);}
break;
case 51:
#line 133 "grammer.y"
	{yyval.tptr = MakeTree(BodyOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 52:
#line 137 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 53:
#line 138 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), yystack.l_mark[0].tptr);}
break;
case 54:
#line 139 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(DUMMYNode, 0));}
break;
case 55:
#line 140 "grammer.y"
	{yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 56:
#line 142 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeLeaf(DUMMYNode, 0));}
break;
case 57:
#line 143 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), yystack.l_mark[0].tptr);}
break;
case 58:
#line 144 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, MakeLeaf(DUMMYNode, 0), MakeTree(FieldOp, yystack.l_mark[0].tptr, MakeLeaf(DUMMYNode, 0)));}
break;
case 59:
#line 149 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 60:
#line 149 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,MakeLeaf(DUMMYNode,0),MakeLeaf(DUMMYNode,0));}
break;
case 61:
#line 150 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp, MakeLeaf(DUMMYNode, 0),yystack.l_mark[0].tptr);}
break;
case 62:
#line 150 "grammer.y"
	{yyval.tptr = yystack.l_mark[-1].tptr;}
break;
case 63:
#line 150 "grammer.y"
	{yyval.tptr = MakeTree(StmtOp,yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 64:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 65:
#line 152 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 66:
#line 153 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 67:
#line 153 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 68:
#line 154 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 69:
#line 154 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 70:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 71:
#line 155 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 72:
#line 156 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 73:
#line 158 "grammer.y"
	{yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,MakeLeaf(DUMMYNode,0),yystack.l_mark[-2].tptr),yystack.l_mark[0].tptr);}
break;
case 74:
#line 160 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-2].tptr,MakeLeaf(DUMMYNode,0)); }
break;
case 75:
#line 160 "grammer.y"
	{yyval.tptr = MakeTree(RoutineCallOp,yystack.l_mark[-3].tptr,yystack.l_mark[-1].tptr); }
break;
case 76:
#line 161 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 77:
#line 161 "grammer.y"
	{yyval.tptr = MakeTree(CommaOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 78:
#line 163 "grammer.y"
	{yyval.tptr = MakeTree(ReturnOp,MakeLeaf(DUMMYNode,0), MakeLeaf(DUMMYNode,0) );}
break;
case 79:
#line 163 "grammer.y"
	{yyval.tptr=MakeTree(ReturnOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) ); }
break;
case 80:
#line 165 "grammer.y"
	{yyval.tptr= yystack.l_mark[0].tptr;}
break;
case 81:
#line 165 "grammer.y"
	{yyval.tptr = MakeTree(IfElseOp, yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 82:
#line 166 "grammer.y"
	{yyval.tptr= MakeTree(IfElseOp,MakeLeaf(DUMMYNode,0) ,MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr));}
break;
case 83:
#line 166 "grammer.y"
	{yyval.tptr=MakeTree(IfElseOp, yystack.l_mark[-4].tptr, MakeTree(CommaOp,yystack.l_mark[-1].tptr,yystack.l_mark[0].tptr));}
break;
case 84:
#line 168 "grammer.y"
	{yyval.tptr= MakeTree(LoopOp,yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr );}
break;
case 85:
#line 170 "grammer.y"
	{yyval.tptr = yystack.l_mark[0].tptr;}
break;
case 86:
#line 172 "grammer.y"
	{ yyval.tptr=MakeTree(LTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 87:
#line 173 "grammer.y"
	{ yyval.tptr=MakeTree(GTOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 88:
#line 174 "grammer.y"
	{ yyval.tptr=MakeTree(EQOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 89:
#line 175 "grammer.y"
	{ yyval.tptr=MakeTree(NEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 90:
#line 176 "grammer.y"
	{ yyval.tptr=MakeTree(LEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 91:
#line 177 "grammer.y"
	{ yyval.tptr=MakeTree(GEOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr); }
break;
case 93:
#line 180 "grammer.y"
	{yyval.tptr=MakeTree(AddOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 94:
#line 180 "grammer.y"
	{yyval.tptr=MakeTree(UnaryNegOp,yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0));}
break;
case 95:
#line 180 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 96:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(AddOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 97:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(UnaryNegOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 98:
#line 181 "grammer.y"
	{yyval.tptr= MakeTree(OrOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 99:
#line 181 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 100:
#line 183 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 101:
#line 184 "grammer.y"
	{yyval.tptr= MakeTree(MultOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 102:
#line 184 "grammer.y"
	{yyval.tptr= yyval.tptr= MakeTree(DivOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 103:
#line 184 "grammer.y"
	{yyval.tptr= MakeTree(AndOp,yystack.l_mark[-2].tptr,yystack.l_mark[0].tptr);}
break;
case 104:
#line 184 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 105:
#line 186 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 106:
#line 186 "grammer.y"
	{yyval.tptr=yystack.l_mark[-1].tptr;}
break;
case 107:
#line 186 "grammer.y"
	{yyval.tptr = MakeTree(NotOp, MakeLeaf(DUMMYNode,0),yystack.l_mark[0].tptr); }
break;
case 108:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 109:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 110:
#line 187 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 111:
#line 189 "grammer.y"
	{yyval.tptr= MakeLeaf(NUMNode, yystack.l_mark[0].intg);}
break;
case 112:
#line 189 "grammer.y"
	{yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);}
break;
case 113:
#line 191 "grammer.y"
	{yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);}
break;
case 114:
#line 192 "grammer.y"
	{yyval.tptr=yystack.l_mark[0].tptr;}
break;
case 115:
#line 192 "grammer.y"
	{yyval.tptr = MakeLeaf(DUMMYNode,0);}
break;
case 116:
#line 193 "grammer.y"
	{yyval.tptr=MakeTree(SelectOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);}
break;
case 117:
#line 193 "grammer.y"
	{yyval.tptr= MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yystack.l_mark[-1].intg),MakeLeaf(DUMMYNode,0)), yystack.l_mark[0].tptr);}
break;
case 118:
#line 194 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0) );}
break;
case 119:
#line 194 "grammer.y"
	{yyval.tptr = MakeTree(IndexOp,yystack.l_mark[-2].tptr ,MakeTree(IndexOp, yystack.l_mark[0].tptr,MakeLeaf(DUMMYNode,0)));}
break;
case 120:
#line 195 "grammer.y"
	{}
break;
#line 1148 "y.tab.c"
>>>>>>> ee65cb0696c5518c9759c20e51e4e91be85a4fbb
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
