//-----------------------------------------------------------------------------------------------------
// Copyright 2015 - See license file LICENSE.txt
//-----------------------------------------------------------------------------------------------------
#include <assert.h>
#include <stdio.h>
#include "parser.hh"

extern int yylex();
extern int yyparse();
extern int yylineno;
extern char* yytext;
extern FILE* yyin;
extern void yyerror(const char* s);
int shouldStop;
int main(int argc, const char** argv)
{
    assert(argc > 1);
    const char* file = argv[1];
    FILE* handle = fopen(file, "r");
    yyin = handle;
    do
    {
        yyparse();
    }
    while (!feof(yyin) && shouldStop < 1);
    return 0;
}

//-----------------------------------------------------------------------------------------------------
/**
*/
void
yyerror(const char* s)
{
    printf("line %d: %s\n", yylineno, s);
    if (shouldStop == -1) shouldStop = 1;
}
