%{
#include "y.tab.h"
#include<stdio.h>
#include<string.h>
#include<iostream>
bool documentScope = false;
int line=1;
%}
%option noyywrap
%x BRACEVALUE SKVALUE DOLLARHASL DOLLAR
%%

"{" {BEGIN(BRACEVALUE);
    
    return LBRACE;}
<BRACEVALUE>[-a-zA-Zа-яА-Я0-9]+ {
    //if(yyleng>100)
    //std::cout<<"lollollollol\t\t"<<yyleng<<std::endl;
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);

    //std::cout << "----" << yytext <<std::endl;
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
<BRACEVALUE>\n { line++;}


"[" {BEGIN(SKVALUE);return LSK;}
<SKVALUE>[a-zA-Z0-9]+ {
    //if(yyleng>100)
    //std::cout<<"lollollollol\t\t"<<yyleng<<std::endl;
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    //std::cout << "----" << yytext <<std::endl;
    return INSQUAREBR;
}
<SKVALUE>"]" {BEGIN(0); return RSK;}
<SKVALUE>. {}
<SKVALUE>\n { line++;}

"$" {BEGIN(DOLLARHASL);}
<DOLLARHASL>\\[a-zA-Z0-9]+ {
    //if(yyleng>100)
    //std::cout<<"lollollollol\t\t"<<yyleng<<std::endl;
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return MATHSPEC;
}
<DOLLARHASL>"$" {BEGIN(0); }
<DOLLARHASL>. {}
<DOLLARHASL>\n { line++;}

"\\begin{case}" {BEGIN(DOLLAR);}
<DOLLAR>\\[a-zA-Z0-9]+ {
    //if(yyleng>100)
    //std::cout<<"lollollollol\t\t"<<yyleng<<std::endl;
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return MATHSPEC;
}
<DOLLAR>"\\end{case}" {BEGIN(0); }
<DOLLAR>. {}
<DOLLAR>\n { line++;}

"\\documentclass" {return DOCCLASS;}
"\\usepackage" {return USEPAC;}
"\\begin{document}" {
    if(documentScope){}
    else documentScope = true;
    return BEGINDOC; 
    }
"\\end{document}" {return ENDDOC;}
"\\newcommand" { return NEWCOM;}


\\[a-zA-Z]+ {
    //if(yyleng>100)
    //std::cout<<"lollollollol\t\t"<<yyleng<<std::endl;
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
        
        std::cout<<"Some text or command out of \"begin{document}\" scope"<<line<<std::endl;
        //exit(-1);
    }
}
     
<<EOF>>     {return END;}

%%
