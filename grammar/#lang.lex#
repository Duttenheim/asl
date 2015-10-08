%{
#include "parser.hh"
#include <stdio.h>
void comment_multiline();
void comment_singleline();
%}
%option yylineno
C						[a-zA-Z]
ID                      {C}([a-zA-Z0-9])*
D                       [0-9]
E                       [DEde][+-]?{D}+
FS						(f|F|l|L)
IS						(u|U|l|L)*
%%
"/*"					{ comment_multiline(); }
"//"					{ comment_singleline(); }
"double"				{ return DOUBLE; }
"float"					{ return FLOAT; }
"int"					{ return INT; }
"uint"					{ return UNSIGNED_INT; }
"long"					{ return LONG; }
"ulong"					{ return UNSIGNED_LONG; }
"void"					{ return VOID; }
"struct"				{ return STRUCT; }
"const"					{ return CONST; }
"for"					{ return FOR; }
"while"					{ return WHILE; }
"break"					{ return BREAK; }
"continue"				{ return CONTINUE; }
"if"					{ return IF; }
"else"					{ return ELSE; }
"return"				{ return RETURN; }
"("						{ return '('; }
")"						{ return ')'; }
"{"						{ return '{'; }
"}"						{ return '}'; }
"="						{ return '='; }
";"						{ return ';'; }
","						{ return ','; }
"+"						{ return '+'; }
"-"						{ return '-'; }
"*"						{ return '*'; }
"/"						{ return '/'; }
"!"						{ return '!'; }
"?"						{ return '?'; }
"|"						{ return '|'; }
"%"						{ return '%'; }
">"						{ return '>'; }
"<"						{ return '<'; }
"^"						{ return '^'; }
"."						{ return '.'; }
"&"						{ return '&'; }
"~"						{ return '~'; }
[ \t\v\n\f]				{ /* do nothing... */ }
{D}+                     { yylval.ival = atoi(yytext); return INT_LITERAL; }
{C}						 { yylval.cval = yytext[0]; return CHAR_LITERAL; } 
{D}+"."{D}+({E})?({FS})? { yylval.fval = atof(yytext); return FLOAT_LITERAL; }
{ID}                     { char* str = new char[strlen(yytext) + 1]; strcpy(str, yytext); yylval.sval = str; return IDENTIFIER;}
'"'{C}({C}|{D})*'"'		 { char* str = new char[strlen(yytext) + 1]; strcpy(str, yytext); yylval.sval = str; return STRING_LITERAL;}
%%

void
comment_multiline()
{
    char c, c1;
loop:
    while ((c = yyinput()) != '*' && c != 0)
		putchar(c);

    if ((c1 = yyinput()) != '/' && c != 0)
    {
		unput(c);
		goto loop;
    }

    if (c != 0)
		putchar(c1);
}

void
comment_singleline()
{
    char c;
    while ((c == yyinput()) != '\n' && c != 0)
		putchar(c);

    if (c != 0)
		putchar(c);
}
