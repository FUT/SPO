#!/bin/sh
clear &&
rm -f nyelv.output nyelv.tab.c nyelv.tab.h nyelv.tab.o lex.yy.c nyelv &&
bison -dv nyelv.y &&
flex nyelv.lex &&
gcc -c nyelv.tab.c &&
gcc -c lex.yy.c -lfl &&
gcc -o nyelv nyelv.tab.o lex.yy.o -lm &&
chmod +x nyelv &&
clear &&
./nyelv test1.nlv &&
false &&
clear &&
./nyelv test2.nlv 
