%{
#include "y.tab.h"
#include<stdio.h>
#include<string.h>
#include<iostream>
bool documentScope = false;
int line=1;
%}
%option noyywrap
%x BRACEVALUE SKVALUE DOLLARHASL
%%

"{" {BEGIN(BRACEVALUE);
    
    return LBRACE;}
<BRACEVALUE>[-a-zA-Zа-яА-Я]+ {
    
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return INCURLYBR;
}
<BRACEVALUE>\\[a-zA-Z]+ {
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    
    return COMMANDINER;
}
<BRACEVALUE>"}" {BEGIN(0);
    return RBRACE;}
<BRACEVALUE>. {}


"[" {BEGIN(SKVALUE);return LSK;}
<SKVALUE>[a-zA-Z0-9]+ {
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return INSQUAREBR;
}
<SKVALUE>"]" {BEGIN(0); return RSK;}
<SKVALUE>. {}

"$" {BEGIN(DOLLARHASL);}
<DOLLARHASL>\\[a-zA-Z0-9]+ {
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return MATHSPEC;
}
<DOLLARHASL>"$" {BEGIN(0); }
<DOLLARHASL>. {}

"\\documentclass" {return DOCCLASS;}
"\\usepackage" {return USEPAC;}
"\\begin{document}" {
    if(documentScope)return ERROR;
    else documentScope = true;
    return BEGINDOC; 
    }
"\\title" {return TITLE;}
"\\end{document}" {return ENDDOC;}

\\[a-zA-Z]+ {
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return COMMAND;
}


%[^\n]*  {}
(\\\%|\\\$|\\\&|\\\-|\\\<|\\\>|\\\#|\\\{|\\\}|\\\,) {}
\n { line++;}
[ \\n] {}

.   {
    if(!documentScope && yytext[0]!='}' && yytext[0]!=13)
    {
        
        std::cout<<"LEX ERRROR"<<line<<std::endl;
    }
}
     
<<EOF>>     {return END;}

%%