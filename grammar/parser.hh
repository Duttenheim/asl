/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_GRAMMAR_PARSER_HH_INCLUDED
# define YY_YY_GRAMMAR_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 11 "grammar/lang.par" /* yacc.c:1909  */

#include "code/compiler.h"
using namespace ASL;

#line 49 "grammar/parser.hh" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT_LITERAL = 258,
    FLOAT_LITERAL = 259,
    CHAR_LITERAL = 260,
    STRING_LITERAL = 261,
    DOUBLE = 262,
    FLOAT = 263,
    INT = 264,
    UNSIGNED_INT = 265,
    LONG = 266,
    UNSIGNED_LONG = 267,
    VOID = 268,
    STRUCT = 269,
    CONST = 270,
    FOR = 271,
    WHILE = 272,
    BREAK = 273,
    CONTINUE = 274,
    IF = 275,
    ELSE = 276,
    RETURN = 277,
    IDENTIFIER = 278
  };
#endif
/* Tokens.  */
#define INT_LITERAL 258
#define FLOAT_LITERAL 259
#define CHAR_LITERAL 260
#define STRING_LITERAL 261
#define DOUBLE 262
#define FLOAT 263
#define INT 264
#define UNSIGNED_INT 265
#define LONG 266
#define UNSIGNED_LONG 267
#define VOID 268
#define STRUCT 269
#define CONST 270
#define FOR 271
#define WHILE 272
#define BREAK 273
#define CONTINUE 274
#define IF 275
#define ELSE 276
#define RETURN 277
#define IDENTIFIER 278

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "grammar/lang.par" /* yacc.c:1909  */

    int ival;
    float fval;
	char cval;
    char* sval;
    Expr* node;

#line 115 "grammar/parser.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_PARSER_HH_INCLUDED  */
