/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DOCCLASS = 258,                /* DOCCLASS  */
    USEPAC = 259,                  /* USEPAC  */
    BEGINDOC = 260,                /* BEGINDOC  */
    COMMAND = 261,                 /* COMMAND  */
    INSQUAREBR = 262,              /* INSQUAREBR  */
    INCURLYBR = 263,               /* INCURLYBR  */
    NEWCOM = 264,                  /* NEWCOM  */
    SPECTEXT = 265,                /* SPECTEXT  */
    ENDDOC = 266,                  /* ENDDOC  */
    MATHSPEC = 267,                /* MATHSPEC  */
    COMMANDINER = 268,             /* COMMANDINER  */
    TITLE = 269,                   /* TITLE  */
    END = 270,                     /* END  */
    ERROR = 271,                   /* ERROR  */
    LBRACE = 272,                  /* LBRACE  */
    RBRACE = 273,                  /* RBRACE  */
    LSK = 274,                     /* LSK  */
    RSK = 275                      /* RSK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#line 838 "lat.y"

    char str[255];
    int num;
    struct S_ERROR* erro;

#line 113 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
