/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "lat.y" /* yacc.c:339  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream> 
#include <vector>
#include <algorithm>
#include <stack>
#include <regex>


std::stack<std::string> begEnd;
std::map <std::string,std::vector<std::string>> hardComands;
std::map <std::string,std::vector<std::string>> hardComandsSquare; 
std::vector <std::pair <std::string, std::string>> specChar;

std::vector <std::string> commands = {
    "\\maketitle",
    "\\bf",
    "\\lang",
    "\\large",
    "\\t",
    "\\title",
    "\\ne",
    "\\leq",
    "\\noindent",
    "\\textsection",
    "\\displaystyle",
    "\\normalsize",
    "\\item",
    "\\Lambda",
    "\\LaTeX",
    "\\glqq",
    "\\grqq",
    "\\ldots",
    "\\emph",
    "\\tableofcontents",
    "\\newpage",
    "\\centering",
    "\\AND",                                         
    "\\AW",                                          
    "\\AmSLaTeX",                                    
    "\\BooleanFalse",                                
    "\\BooleanTrue",                                 
    "\\Box",                                         
    "\\CheckSum",                                    
    "\\ConTeXt",                                     
    "\\DH",                                          
    "\\DJ",                                          
    "\\DeclareDocumentCommand",                      
    "\\DeclareDocumentEnvironment",                  
    "\\DeclareExpandableDocumentCommand",            
    "\\DeclareMathAlphabet",                         
    "\\DeclareMathDelimiter",                        
    "\\DeclareMathSizes",                            
    "\\DeclareMathSymbol",                           
    "\\DeclareOption",                               
    "\\DeclareTextCommandDefault",                   
    "\\Diamond",                                     
    "\\DoSomethingJustWithMandatoryArgument",        
    "\\DoSomethingWithBothArguments",                
    "\\DoSomethingWithStar",                         
    "\\DoSomethingWithoutStar",                      
    "\\EndIncludeInRelease",                         
    "\\ExecuteOptions",                              
    "\\GetDocumentCommandArgSpec",                   
    "\\GetDocumentEnvironmentArgSpec",               
    "\\Gp",                                          
    "\\IfBooleanF",                                  
    "\\IfBooleanT",                                  
    "\\IfBooleanTF",                                 
    "\\IfNoValueF",                                  
    "\\IfNoValueT",                                  
    "\\IfNoValueTF",                                 
    "\\IfValueF",                                    
    "\\IfValueT",                                    
    "\\IfValueTF",                                   
    "\\InputIfFileExists",                           
    "\\InternalFunctionOfThreeArguments",            
    "\\Join",                                        
    "\\LaTeXGcomp",                                  
    "\\LaTeXNews",                                   
    "\\LaTeXWcomp",                                  
    "\\LaTeXbook",                                   
    "\\LaTeXcomp",                                   
    "\\LaTeXe",                                      
    "\\Large",                                       
    "\\LoadClass",                                   
    "\\LoadClassWithOptions",                        
    "\\MakeUppercase",                               
    "\\MappingFunction",                             
    "\\NFSS",                                        
    "\\NG",                                          
    "\\NOT",                                         
    "\\NewDocumentCommand",                          
    "\\NewDocumentEnvironment",                      
    "\\NewExpandableDocumentCommand",                
    "\\OE",                                          
    "\\OR",                                          
    "\\OnlyDescription",                             
    "\\PSNFSS",                                      
    "\\ProcessList",                                 
    "\\ProcessOptions",                              
    "\\ProcessorA",                                  
    "\\ProcessorB",                                  
    "\\ProvideDocumentCommand",                      
    "\\ProvideDocumentEnvironment",                  
    "\\ProvideExpandableDocumentCommand",            
    "\\ProvidesPackage",                             
    "\\Ref",                                         
    "\\RenewDocumentCommand",                        
    "\\RenewDocumentEnvironment",                    
    "\\RenewExpandableDocumentCommand",              
    "\\RequirePackage",                              
    "\\RequirePackageWithOptions",                   
    "\\ReverseBoolean",                              
    "\\Rightarrow",                                  
    "\\SLiTeX",                                      
    "\\SS",                                          
    "\\ShowDocumentCommandArgSpec",                  
    "\\ShowDocumentEnvironmentArgSpec",              
    "\\SomeDocumentCommand",                         
    "\\SplitArgument",                               
    "\\SplitList",                                   
    "\\TH",                                          
    "\\TeX",                                         
    "\\TextOrMath",                                  
    "\\TrimSpaces",                                  
    "\\Vref",                                        
    "\\acro",                                        
    "\\addpenalty",                                  
    "\\backmatter",                                  
    "\\backslash",                                   
    "\\baselineskip",                                
    "\\begin",                                       
    "\\bezier",                                      
    "\\bfseries",                                    
    "\\bm",                                          
    "\\boldmath",                                    
    "\\boldsymbol",                                  
    "\\bullet",                                      
    "\\c",                                           
    "\\cal",                                         
    "\\cdot",                                        
    "\\chapter",                                     
    "\\cite",                                        
    "\\clearpage",                                   
    "\\clsguide",                                    
    "\\columnbreak",                                 
    "\\columnwidth",                                 
    "\\copyright",                                   
    "\\cs",                                          
    "\\ctan",                                        
    "\\ctanhttp",                                    
    "\\cyrguide",                                    
    "\\d",                                           
    "\\def",                                         
    "\\depth",                                       
    "\\dh",                                          
    "\\dj",                                          
    "\\document",                                    
    "\\documentstyle",                               
    "\\dots",                                        
    "\\dump",                                        
    "\\eTeX",                                        
    "\\else",                                        
    "\\elvbf",                                       
    "\\elvrm",                                       
    "\\elvsf",                                       
    "\\em",                                          
    "\\end",                                         
    "\\endtabularx",                                 
    "\\enlargethispage",                             
    "\\ensuremath",                                  
    "\\errorcontextlines",                           
    "\\example",                                     
    "\\extrafloats",                                 
    "\\fauxguillemet",                               
    "\\fi",                                          
    "\\fmbox",                                       
    "\\fmtversion",                                  
    "\\fnsymbol",                                    
    "\\fntguide",                                    
    "\\foo",                                         
    "\\framebox",                                    
    "\\frenchspacing",                               
    "\\frontmatter",                                 
    "\\fsf",                                         
    "\\gg",                                          
    "\\graphpaper",                                  
    "\\guillemotleft",                               
    "\\guillemotright",                              
    "\\guilsinglleft",                               
    "\\guilsinglright",                              
    "\\hbox",                                        
    "\\height",                                      
    "\\heightof",                                    
    "\\hologo",                                      
    "\\hspace",                                      
    "\\hyphenation",                                 
    "\\hyphenchar",                                  
    "\\i",                                           
    "\\ifcase",                                      
    "\\ifx",                                         
    "\\ignorespacesafterend",                        
    "\\include",                                     
    "\\includegraphics",                             
    "\\index",                                       
    "\\iniTeX",                                      
    "\\input",                                       
    "\\itshape",                                     
    "\\jobname",                                     
    "\\kern",                                        
    "\\l",                                           
    "\\label",                                       
    "\\labelformat",                                 
    "\\language",                                    
    "\\latex",                                       
    "\\lccode",                                      
    "\\leadsto",                                     
    "\\left",                                        
    "\\lefthyphenmin",                               
    "\\let",                                         
    "\\lhd",                                         
    "\\line",                                        
    "\\lineskiplimit",                               
    "\\linewidth",                                   
    "\\listfiles",                                   
    "\\ll",                                          
    "\\long",                                        
    "\\looseness",                                   
    "\\m",                                           
    "\\mainmatter",                                  
    "\\makeatletter",                                
    "\\makeatother",                                 
    "\\makebox",                                     
    "\\mark",                                        
    "\\mathbf",                                      
    "\\mathcal",                                     
    "\\mathchardef",                                 
    "\\mathcode",                                    
    "\\mathit",                                      
    "\\mathnormal",                                  
    "\\mathring",                                    
    "\\mathrm",                                      
    "\\mathsf",                                      
    "\\mathtt",                                      
    "\\maxof",                                       
    "\\mbox",                                        
    "\\mdseries",                                    
    "\\meta",                                        
    "\\mho",                                         
    "\\mid",                                         
    "\\minof",                                       
    "\\multicolumn",                                 
    "\\newXeTeXintercharclass",                      
    "\\newblock",                                    
    "\\newenvironment",                              
    "\\newline",                                     
    "\\newmarks",                                    
    "\\newmathalphabet",                             
    "\\ng",                                          
    "\\nobreakdashes",                               
    "\\nocorr",                                      
    "\\nofiles",                                     
    "\\normalfont",                                  
    "\\normalsfcodes",                               
    "\\o",                                           
    "\\oddsidemargin",                               
    "\\oe",                                          
    "\\oldstylenums",                                
    "\\package",                                     
    "\\pagebreak",                                   
    "\\parbox",                                      
    "\\part",                                        
    "\\path",                                        
    "\\patterns",                                    
    "\\providecommand",                              
    "\\qbezier",                                     
    "\\quad",                                        
    "\\quotedblbase",                                
    "\\quotesinglbase",                              
    "\\r",                                           
    "\\raggedright",                                 
    "\\raisefirstsection",                           
    "\\ref",                                         
    "\\reftextbefore",                               
    "\\reftextfaraway",                              
    "\\renewcommand",                                
    "\\renewenvironment",                            
    "\\rhd",                                         
    "\\right",                                       
    "\\righthyphenmin",                              
    "\\rm",                                          
    "\\rmfamily",                                    
    "\\rule",                                        
    "\\samepage",                                    
    "\\savebox",                                     
    "\\sbox",                                        
    "\\scshape",                                     
    "\\section",                                     
    "\\setcounter",                                  
    "\\setlength",                                   
    "\\setlongtables",                               
    "\\settodepth",                                  
    "\\settoheight",                                 
    "\\settototalheight",                            
    "\\settowidth",                                  
    "\\sffamily",                                    
    "\\showkeyslabelformat",                         
    "\\showtokens",                                  
    "\\slash",                                       
    "\\slshape",                                     
    "\\small",                                       
    "\\sqrt",                                        
    "\\sqsubset",                                    
    "\\sqsupset",                                    
    "\\ss",                                          
    "\\subsection",                                  
    "\\suppressfloats",                              
    "\\tabularnewline",                              
    "\\tenbf",                                       
    "\\tenrm",                                       
    "\\tensf",                                       
    "\\textasciicircum",                             
    "\\textasciitilde",                              
    "\\textbackslash",                               
    "\\textbar",                                     
    "\\textbf",                                      
    "\\textbrokenbar",                               
    "\\textbullet",                                  
    "\\textcommabelow",                              
    "\\textcompwordmark",                            
    "\\textcurrency",                                
    "\\textemdash",                                  
    "\\textendash",                                  
    "\\texteuro",                                    
    "\\textexclamdown",                              
    "\\textgreater",                                 
    "\\textheight",                                  
    "\\textit",                                      
    "\\textless",                                    
    "\\textmd",                                      
    "\\textnormal",                                  
    "\\textonehalf",                                 
    "\\textonequarter",                              
    "\\textperiodcentered",                          
    "\\textquestiondown",                            
    "\\textquotedbl",                                
    "\\textquotedblleft",                            
    "\\textquotedblright",                           
    "\\textquoteleft",                               
    "\\textquoteright",                              
    "\\textregistered",                              
    "\\textrm",                                      
    "\\textsc",                                      
    "\\textsf",                                      
    "\\textsl",                                      
    "\\textsubscript",                               
    "\\textsuperscript",                             
    "\\textthreequarters",                           
    "\\texttrademark",                               
    "\\texttt",                                      
    "\\textup",                                      
    "\\textvisiblespace",                            
    "\\textwidth",                                   
    "\\th",                                          
    "\\thicklines",                                  
    "\\thinlines",                                   
    "\\times",                                       
    "\\totalheight",                                 
    "\\totalheightof",                               
    "\\traceoff",                                    
    "\\traceon",                                     
    "\\tracingall",                                  
    "\\tt",                                          
    "\\ttfamily",                                    
    "\\twlbf",                                       
    "\\twlrm",                                       
    "\\twlsf",                                       
    "\\typein",                                      
    "\\typeout",                                     
    "\\typesetnormalchapter",                        
    "\\typesetstarchapter",                          
    "\\uccode",                                      
    "\\unlhd",                                       
    "\\unrhd",                                       
    "\\upshape",                                     
    "\\url",                                         
    "\\usebox",                                      
    "\\usrguide",                                    
    "\\v",                                           
    "\\value",                                       
    "\\verb",                                        
    "\\vfill",                                       
    "\\vpagerefnum",                                 
    "\\width",                                       
    "\\wlog",                                        
    "\\zzz"                                         
};

std::vector <std::string> specCommand = {
    "\\langle",
    "\\cdot",
    "\\ast",
    "\\rangle",
    "\\forall",
    "\\all",
    "\\leftarrow",
    "\\displaystyle",
    "\\over",
    "\\pm",
    "\\pi",
    "\\displaystyle",
    "\\ne",
    "\\bigg",
    "\\big",
    "\\leq",
    "\\geq",
    "\\sqrt",
    "\\in",
    "\\beta",
    "\\max",
    "\\min",
    "\\seq",
    "\\lbrace",
    "\\ldots",
    "\\rbrace",
    "\\mathbf",
    "\\tilde",
    "\\times",
    "\\bullet",
    "\\backslash",
    "\\mid",
    "\\bf",
    "\\vdots",
    "\\text",
    "\\meta"

    
};

std::vector <std::string> v_usepackage = {
    "amssymb",
    "mathtext",
    "physics",
    "graphicx",
    "babel",
    "csquotes",
    "xy",
    "inputenc",
    "setspace",
    "amsmath",
    "fontenc",
    "url",
    "lmodern",
    "hologo"
};

std::vector <std::string> v_usepackageS = {
    "russian",
    "english",
    "all",
    "german",
    "utf8",
    "koi8",
    "T2A",
    "T1",
    "T2",
    "T3"
};

std::vector <std::string> v_docclass = {
    "article",
    "report",
    "book",
    "letter",
    "slides",
    "beamer",
    "ltnews",
    "ltxguide"
}; 

std::vector <std::string> v_docclassS = {
    "12pt", // TODO
    "letterpaper",
    "twoside",
    "a5paper",
    "a4paper",
    "b5paper",
    "executivepaper",
    "legalpaper"
};

std::vector <std::string> outside_com = {
    "\\title",
    "\\author",
    "\\date",
    "\\thanks",
    "\\ConTeXt",
    "\\DeclareTextCommandDefault",
    "\\acro",
    "\\def",
    "\\else",
    "\\ifx",
    "\\makeatletter",
    "\\makeatother",
    "\\nofiles",
    "\\providecommand",
    "\\setlength",
    "\\textcommabelow",
}; 

extern FILE *yyin;
extern int line;
int yyerror (std::string error);

#define YYERROR_VERBOSE 1
extern int yylex();

enum ERROR
{
    ALL_GOOD,
    ERROR_HARD,
    ERROR_SIMPL, 
    ERROR_SPEC,
    ERROR_LEX,
    ERROR_USEPACK,
    ERROR_OUT,
    ERROR_DOCCLASS  
};

struct S_ERROR
{
    S_ERROR (ERROR _num,std::string strErr = ""){
        num = _num;
        str_error = strErr;
    }
    std::string str_error;
    ERROR num; 
};

int printError(struct S_ERROR* yep);

#line 611 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOCCLASS = 258,
    USEPAC = 259,
    BEGINDOC = 260,
    COMMAND = 261,
    INSQUAREBR = 262,
    INCURLYBR = 263,
    NEWCOM = 264,
    SPECTEXT = 265,
    ENDDOC = 266,
    MATHSPEC = 267,
    COMMANDINER = 268,
    TITLE = 269,
    END = 270,
    ERROR = 271,
    LBRACE = 272,
    RBRACE = 273,
    LSK = 274,
    RSK = 275
  };
#endif
/* Tokens.  */
#define DOCCLASS 258
#define USEPAC 259
#define BEGINDOC 260
#define COMMAND 261
#define INSQUAREBR 262
#define INCURLYBR 263
#define NEWCOM 264
#define SPECTEXT 265
#define ENDDOC 266
#define MATHSPEC 267
#define COMMANDINER 268
#define TITLE 269
#define END 270
#define ERROR 271
#define LBRACE 272
#define RBRACE 273
#define LSK 274
#define RSK 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 548 "lat.y" /* yacc.c:355  */

    char str[255];
    int num;
    struct S_ERROR* erro;

#line 697 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 714 "y.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   104

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  101

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   559,   559,   560,   563,   564,   565,   566,   567,   576,
     580,   586,   587,   590,   591,   597,   598,   599,   607,   614,
     621,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   670,   671,   674,   675,   676,   683,   684,   685,   691,
     697,   701,   702,   705,   706,   714,   715,   716,   717,   718,
     719,   720,   726,   730,   731,   734,   735,   736,   742,   743,
     744,   750
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCCLASS", "USEPAC", "BEGINDOC",
  "COMMAND", "INSQUAREBR", "INCURLYBR", "NEWCOM", "SPECTEXT", "ENDDOC",
  "MATHSPEC", "COMMANDINER", "TITLE", "END", "ERROR", "LBRACE", "RBRACE",
  "LSK", "RSK", "$accept", "state", "lasttreatment", "newcomm", "maintext",
  "main", "commandoutpall", "commandout", "helpmeall", "helpme",
  "docclass", "usepall", "usep", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275
};
# endif

#define YYPACT_NINF -38

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      21,    14,   -38,    26,    21,    34,   -38,   -38,   -38,   -38,
      18,    10,    27,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,    29,    66,    57,    51,   -38,   -38,   -38,   -38,   -38,
      28,   -38,   -38,    31,   -38,   -38,    -6,   -38,   -38,   -38,
     -38,    45,    10,   -38,    -6,    12,    50,    10,   -38,    10,
      59,   -38,   -38,   -38,   -38,   -38,   -38,    -7,    52,   -38,
      49,   -38,   -38,   -38,    55,    56,    58,    65,    69,    10,
      63,   -38,    64,    67,   -38,    60,    70,    71,   -38,   -38,
      72,   -38,   -38,    73,    76,    -6,    -6,   -38,    78,    68,
      74,    75,   -14,   -38,   -38,   -38,    81,   -38,    77,    79,
     -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     8,     0,     3,     0,    49,    45,     1,     2,
       0,     0,    38,    46,    51,    40,    39,    50,    52,    47,
      48,     0,    32,     0,    54,    56,    55,    23,    24,    22,
      19,    26,    25,    21,    14,    44,    29,    30,    27,    28,
      13,     0,    12,    15,    42,     0,     0,     0,    31,     0,
       0,    57,    60,    59,    61,    58,    53,     0,     0,    43,
       0,     7,    11,    41,    43,     0,     0,     0,     0,     0,
      43,    18,     0,     0,    16,    36,    35,     0,     6,     4,
       0,    20,    17,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,    37,    34,    33,     0,    10,     0,     0,
       9
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,    90,   -38,   -38,   -37,   -38,    38,   -38,   -36,   -38,
     -38,    80,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    40,    41,    42,    21,    22,    43,    44,
       5,    23,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      60,    70,    59,    96,    97,    62,    35,    35,    63,    65,
      67,    71,    68,    27,    28,    29,    30,    31,    32,    33,
      64,    72,    34,    35,     1,    35,     8,    36,    37,    38,
      39,     6,    80,     7,    47,    25,     2,    26,    10,    11,
      12,    13,    14,    15,    45,    57,    46,    16,    58,    90,
      91,    17,    18,    19,    20,    10,    61,    66,    51,    52,
      48,    50,    49,    12,    69,    73,    15,    74,    53,    54,
      16,    55,    12,    75,    76,    15,    78,    84,    77,    16,
      79,    81,    82,    87,    89,    83,    93,    85,    86,    98,
      88,    92,    94,    95,     9,    99,     0,   100,     0,     0,
       0,     0,     0,     0,    56
};

static const yytype_int8 yycheck[] =
{
      36,     8,     8,    17,    18,    42,    13,    13,    44,    45,
      47,    18,    49,     3,     4,     5,     6,     7,     8,     9,
       8,    57,    12,    13,     3,    13,     0,    17,    18,    19,
      20,    17,    69,    19,     5,    17,    15,    19,     4,     5,
       6,     7,     8,     9,    17,    17,    19,    13,    17,    85,
      86,    17,    18,    19,    20,     4,    11,     7,     7,     8,
      22,    23,     5,     6,     5,    13,     9,    18,    17,    18,
      13,    20,     6,    18,    18,     9,    11,    17,    20,    13,
      11,    18,    18,    11,     8,    18,    18,    17,    17,     8,
      17,    13,    18,    18,     4,    18,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    15,    22,    23,    31,    17,    19,     0,    22,
       4,     5,     6,     7,     8,     9,    13,    17,    18,    19,
      20,    27,    28,    32,    33,    17,    19,     3,     4,     5,
       6,     7,     8,     9,    12,    13,    17,    18,    19,    20,
      24,    25,    26,    29,    30,    17,    19,     5,    27,     5,
      27,     7,     8,    17,    18,    20,    32,    17,    17,     8,
      29,    11,    25,    29,     8,    29,     7,    25,    25,     5,
       8,    18,    29,    13,    18,    18,    18,    20,    11,    11,
      25,    18,    18,    18,    17,    17,    17,    11,    17,     8,
      29,    29,    13,    18,    18,    18,    17,    18,     8,    18,
      18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    21,    22,    22,    23,    23,    23,    23,    23,    24,
      24,    25,    25,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    27,    27,    28,    28,    28,    28,    28,    28,    28,
      28,    29,    29,    30,    30,    31,    31,    31,    31,    31,
      31,    31,    31,    32,    32,    33,    33,    33,    33,    33,
      33,    33
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     5,     6,     5,     4,     1,    10,
       7,     2,     1,     1,     1,     1,     3,     4,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     7,     7,     4,     4,     7,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
| yyreduce -- Do a reduction.  |
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
        case 4:
#line 563 "lat.y" /* yacc.c:1646  */
    {}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 564 "lat.y" /* yacc.c:1646  */
    {}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 565 "lat.y" /* yacc.c:1646  */
    {}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 566 "lat.y" /* yacc.c:1646  */
    {}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 567 "lat.y" /* yacc.c:1646  */
    {
        if(begEnd.size()!=0)
            std::cout << "Expucted end " << std::endl;
        else
            std::cout << "Succes " << std::endl;
        exit(1);
    }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 576 "lat.y" /* yacc.c:1646  */
    {
        

    }
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 580 "lat.y" /* yacc.c:1646  */
    {
        std::cout << " IN VECTOR - COMMANDS ---" << (yyvsp[-4].str) << std::endl;
        std::cout << " PROVERIT' IN COMMANDS ---" << (yyvsp[-1].str) << std::endl;
    }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 591 "lat.y" /* yacc.c:1646  */
    {
        if (std::find(specCommand.begin(),specCommand.end(), std::string((yyvsp[0].str))) == specCommand.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SPEC,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 599 "lat.y" /* yacc.c:1646  */
    {
        std::string com((yyvsp[-3].str));
        S_ERROR *errMsg = new S_ERROR(ERROR_HARD,std::string((yyvsp[-3].str)));//TODO
        if (hardComands.find(com) != hardComands.end()) { }
        else {
            printError(errMsg);
        }
    }
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 608 "lat.y" /* yacc.c:1646  */
    {
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[-2].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string((yyvsp[-2].str)));
            printError(errMsg);
        }
    }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 614 "lat.y" /* yacc.c:1646  */
    {  
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[0].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 621 "lat.y" /* yacc.c:1646  */
    {
        std::string com((yyvsp[-3].str));
        std::string incom((yyvsp[-1].str));
        S_ERROR *errMsg = new S_ERROR(ERROR_HARD,com + "\t\t\tALAH\t\t\t\t" + incom);
        if (hardComands.find(com) != hardComands.end()) {
            auto tmpVect = hardComands.at(com);
            if(tmpVect.size()){
                if(com.compare("\\begin") == 0){
                    begEnd.push(incom);
                   // std::cout<<"push \t"<<incom<<std::endl;   
                }
                else if (com.compare("\\end") == 0){
                    if(begEnd.size()==0){
                        S_ERROR *errMsg1 = new S_ERROR(ERROR_HARD, com + "\t\t\tlolkek\t\t\t\t" + incom);
                        printError(errMsg1);
                    }
                    if (incom.compare(begEnd.top()) == 0){
                       // std::cout<<"pop \t"<<begEnd.top()<<std::endl;
                        begEnd.pop();

                    }
                    else {
                        S_ERROR *errMsg1 = new S_ERROR(ERROR_HARD, com + "\t\t\t\talaht\t\t\t" + incom);
                        printError(errMsg1);
                    }
                }
                if (std::find(tmpVect.begin(),tmpVect.end(), std::string((yyvsp[-1].str))) == tmpVect.end()) {
                    printError(errMsg);
                }
            }
        }
        else {
            printError(errMsg);
        }{}
        
    }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 661 "lat.y" /* yacc.c:1646  */
    {}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 662 "lat.y" /* yacc.c:1646  */
    {}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 663 "lat.y" /* yacc.c:1646  */
    {}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 664 "lat.y" /* yacc.c:1646  */
    {}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 675 "lat.y" /* yacc.c:1646  */
    {}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 676 "lat.y" /* yacc.c:1646  */
    { 
        if (std::find(outside_com.begin(),outside_com.end(), std::string((yyvsp[-3].str))) == outside_com.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_OUT,std::string((yyvsp[-3].str)));
            printError(errMsg);
        } 
        
    }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 683 "lat.y" /* yacc.c:1646  */
    {}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 684 "lat.y" /* yacc.c:1646  */
    {}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 685 "lat.y" /* yacc.c:1646  */
    {
         if (std::find(outside_com.begin(),outside_com.end(), std::string((yyvsp[0].str))) == outside_com.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_OUT,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 691 "lat.y" /* yacc.c:1646  */
    {
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[0].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_OUT,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 705 "lat.y" /* yacc.c:1646  */
    { }
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 706 "lat.y" /* yacc.c:1646  */
    {
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[0].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 714 "lat.y" /* yacc.c:1646  */
    {}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 715 "lat.y" /* yacc.c:1646  */
    {}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 716 "lat.y" /* yacc.c:1646  */
    {}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 717 "lat.y" /* yacc.c:1646  */
    {}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 718 "lat.y" /* yacc.c:1646  */
    {}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 719 "lat.y" /* yacc.c:1646  */
    {}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 720 "lat.y" /* yacc.c:1646  */
    {
        if (std::find(v_docclass.begin(),v_docclass.end(), std::string((yyvsp[0].str))) == v_docclass.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_DOCCLASS ,std::string((yyvsp[0].str)));
            printError(errMsg);
        }
    }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 726 "lat.y" /* yacc.c:1646  */
    {}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 734 "lat.y" /* yacc.c:1646  */
    { }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 736 "lat.y" /* yacc.c:1646  */
    {
        if (std::find(v_usepackageS.begin(),v_usepackageS.end(), std::string((yyvsp[0].str))) == v_usepackageS.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_USEPACK ,std::string((yyvsp[0].str)) + "\t\t\t\t\t[]");
            printError(errMsg);
        }
    }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 742 "lat.y" /* yacc.c:1646  */
    {}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 743 "lat.y" /* yacc.c:1646  */
    {}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 744 "lat.y" /* yacc.c:1646  */
    {
        if (std::find(v_usepackage.begin(),v_usepackage.end(), std::string((yyvsp[0].str))) == v_usepackage.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_USEPACK ,std::string((yyvsp[0].str)) + "\t\t\t\t\t{}");
            printError(errMsg);
        }
    }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 750 "lat.y" /* yacc.c:1646  */
    {}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2188 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 753 "lat.y" /* yacc.c:1906  */



int printError(struct S_ERROR* yep)
{
    if (yep->num == 1 ) {
        yyerror("WARNING: Unknown complex command - " + yep->str_error);
    }
    else if (yep->num == 2 ) {
        yyerror("WARNING: Unknown command - " + yep->str_error);
    }
    else if (yep->num == 3) {
        yyerror("WARNING: Unknown MATH command - " + yep->str_error);
    }
    else if (yep->num == 4){
        yyerror("Lexical error - " + yep->str_error);
    }
    else if (yep->num == 5){
        yyerror("WARNING: Unknown usepackage arguments - " + yep->str_error);
    }
    else if (yep->num == 6){
        yyerror("WARNING: Unknown global command - " + yep->str_error);
    }
    else if (yep->num == 5){
        yyerror("WARNING: Unknown docclass arguments - " + yep->str_error);
    }

    return 0;
}

int  yyerror(std::string s)
{
    fflush(stdout);
    std::cout<<s<<"\t\t in line: "<< line<<std::endl;
    return 0;
}

int main(int argc, char *argv[]){
    std::vector<std::string> emptyVect = {};
    yyin = fopen(argv[1], "r");
    
    std::vector <std::string> v_usepackage = {"amssymb","mathtext","physics","graphicx", "babel"};
    std::vector <std::string> v_begin = {"equation","verbatim","twice","minipage","description","decl","footnotesize","small","latexonly","flushright","htmlonly","verbatim", "citations","document","abstract","figure","em","verse","quotation","quote","enumerate","cases","gather","otherlanguage","tabular","equation","","center","itemize","large","flushleft","thebibliography","picture","lrbox","filecontents","verbatim","equation","lrbox", "verbatim",""};
    std::vector <std::string> v_documentclass = {"article","book","letter"};
    std::vector <std::string> v_languare = {"german","russian", "english"};
    hardComands["\\selectlanguage"] = v_languare;
    hardComands["\\foreignlanguage"] = v_languare;
    hardComands["\\begin"] = v_begin; hardComands["\\end"] = v_begin;
    hardComands["\\usepackage"] = v_usepackage;
    hardComands["\\author"]; hardComands["\\section"];
    hardComands["\\subsection"]; hardComands["\\subchapter"];
    hardComands["\\paragraph"]; hardComands["\\textbf"];
    hardComands["\\textit"]; hardComands["\\textsc"];
    hardComands["\\markright"]; hardComands["\\markboth"];
    hardComands["\\pagenumbering"]; hardComands["\\emph"];
    hardComands["\\mbox"]; hardComands["\\footnote"];
    hardComands["\\setcounter"]; hardComands["\\over"];
    hardComands["\\displaystyle"]; hardComands["\\sqrt"];
    hardComands["\\caption"]; hardComands["\\ref"];
    hardComands["\\label"]; hardComands["\\bar"];
    hardComands["\\filesection"];
    hardComands["\\def"];
    hardComands["\\InputIfFileExists"];
    hardComands["\\texttt"];
    hardComands["\\textsf"];
    hardComands["\\m"] = {"file","number","text","cmd","pos","inner-pos","option-list","class-name","release-date","package-name","N","package","command","num","default","file-contents","width","size","","","","","","","",""};
    hardComands["\\fsf"];
    hardComands["\\input"];
    hardComands["\\file"];
    hardComands["\\url"];
    hardComands["\\AtEndOfClass"];
    hardComands["\\AtBeginDocument"];
    hardComands["\\everyjob"];
    hardComands["\\batchfile"];
    hardComands["\\parbox"];
    hardComands["\\latex"];
    hardComands["\\vspace"];
    hardComands["\\DeclareMathSizes"];
    hardComands["\\IncludeInRelease"];
    hardComands["\\rightskip"];
    hardComands["\\email"];
    hardComands["\\href"];
    hardComands["\\cite"];
    hardComands["\\NEWfeature"];
    hardComands["\\NEWdescription"];
    hardComands["\\framebox"];
    hardComands["\\newsavebox"];
    hardComands["\\put"];
    hardComands["\\bibitem"];
    hardComands["\\newblock"];
    hardComands["\\fbox"];
    hardComands["\\meta"] = {"environment","function","code","list","token","number","tokens","argument","beg-code","end-code","cmd","token1","token2","token3","default","defaults","","","","","","","","","","",""};
    hardComands["\\marg"] = {"environment","function","code","list","token","number","tokens","argument","beg-code","end-code","cmd","token1","token2","token3","default","defaults","processor","","","","","","","","","",""};
    hardComands["\\cs"] = {"NewDocumentEnvironment","NewDocumentCommand","protect","omit","ArgumentSpecification","ProcessorB","ProcessorA","BooleanTrue","BooleanFalse","ifblank","IfNoValueF","IfNoValueT","IfNoValueTF","newcommand","begin","end","addvspace","flushbottom","chapter","typesetnormalchapter","IfBooleanTF","New","Renew","Provide","Declare","RenewDocumentCommand","ProvideDocumentCommand","DeclareDocumentCommand","TrimSpaces","long","verb","SplitList","ProcessList","showhyphens","binom","genfrac","","IncludeInRelease",""};
    hardComands["\\arg"] = {"text","letters","size","length-cmd","class","beg-def","end-def","environment","function","code","cmd","list","number","tokens","arg","","beg-code","end-code","env","width","definition","file-name","package-name","class-name","style","packages","file","num","","","","","","","","",""};
    hardComands["\\PassOptionsToClass"] = {"a4paper"};
    hardComands["\\ExecuteOptions"] = {"dvips","textures","dvips","textures",""};
    hardComands["\\pageref"] = {"fsfcode","addrs"};
    hardComands["\\fontencoding"] = {"T1"};
    hardComands["\\newenvironment"] = {"texteqn","fmpage","pageref","","","","","","","","","","","","","","",""};
    hardComands["\\foo"] = {"sm","arg1","arg2","arg3","om","","","","",""};
    hardComands["\\package"];
    hardComands["\\bm"] = {"f"};
    hardComands["\\u"] = {"a"};
    hardComands["\\NewDocumentEnvironment"] = {"twice"};
    hardComands["\\pkg"];
    hardComands["\\hologo"] = {"XeTeX","LuaTeX","LuaLaTeX","XeLaTeX","pdfTeX",""};
    hardComands["\\class"] = {"slides"};
    hardComands["\\LoadClassWithOptions"] = {"\article"};
    hardComands["\\foobar"] = {"arg1","arg2","arg3",""};
    hardComands["\\IfNoValueTF"] = {"-NoValue-"};
    hardComands["\\widthof"] = {"text"};
    hardComands["\\heightof"] = {"text"};
    hardComands["\\depthof"] = {"text"};
    hardComands["\\r"] = {"text", "o"};
    hardComands["\\k"] = {"text"};
    hardComands["\\example"] = {"BBB"};
    hardComands["\\subsubsection"] = {"Tools"};
    hardComands["\\LaTeX"] = {"a"};
    hardComands["\\LaTeXe"] = {"a"};
    hardComands["\\hspace"] = {"4em"};
    hardComands["\\oarg"] = {"default", "num","width","pos","height","inner-pos","options","option-list","release-date","placement","vertical-space",""};
    hardComands["\\baz"] = {"o",""};
    hardComands["\\chapter"] = {""};
    hardComands["\\verb"] = {"and"};
    hardComands["\\textcircled"] = {"text","a"};
    hardComands["\\bezier"] = {"N"};
    hardComands["\\ExecuteOptions"] = {"oldlfont","newlfont","latexrelease"};
    hardComands["\\RequirePackage"] = {"oldlfont","newlfont","latexrelease"};
    hardComands["\\cal"] = {"A"};
    hardComands["\\LoadClassWithOptions"] = {"article"};
    hardComands["\\extrafloats"];
    hardComands["\\vrefrange"] = {"eq-first"};
    hardComands["\\"] = {""};
    hardComands["\\"] = {""};
    hardComands["\\"] = {""};
    hardComands["\\"] = {""};
    hardComands["\\"] = {""};



    
    yyparse();
    return 0;
}
