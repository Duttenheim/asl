#!/bin/bash
yacc -d -v -r state -r solved -o grammar/parser.cc grammar/lang.par
lex -o grammar/lexer.cc grammar/lang.lex
#g++ grammar/parser.cc grammar/lexer.cc -lfl -o build/parser -std=c++11
