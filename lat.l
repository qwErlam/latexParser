%{
#include "y.tab.h"
#include<stdio.h>
#include<string.h>
#include<iostream>
void count();
int line=1;
int d_count=1;
int zipzap=0;
int line_count(); 
%}
%option noyywrap
%%

"{" {zipzap++;}
"}" {zipzap--;}
(\\\%|\\\$|\\\&|\\\-|\\\<|\\\>|\\\#|\\\{|\\\})			
\\[a-zA-Z]+[ \n\t\r*]*[{][ \n\t\r]*[a-zA-ZА-Яа-я]+[ \n\t\r]*[}]   {
    //std::cout<<"Hard - "<<yytext<<"\n\n";
    *yylval.str = '\0';
    int count = strlen(yytext);
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return HARDCOMMAND;
}
\\[a-zA-Z]+ {
	std::cout<<"Simple - "<<yytext<<"\n\n"; //std:: cout << d;
  int count = strlen(yytext);
	memset(yylval.str, 0, 255); 
  strncpy(yylval.str, yytext, 255);
	return SIMPLCOMMAND;
}


[$][^$]*[$] {
    std::cout<<"Spec - "<<yytext<<"\n\n"; //std:: cout << d;
    int count = strlen(yytext);
    memset(yylval.str, 0, 255); 
    strncpy(yylval.str, yytext, 255);
    return SPECTEXT;
}
\n {
    line++;
}




%%
int column = 0;

void count()
{
 int i;

 for (i = 0; yytext[i] != '\0'; i++)
  if (yytext[i] == '\n')
   column = 0;
  else if (yytext[i] == '\t')
   column += 8 - (column % 8);
  else
   column++;

 ECHO;


}
int line_count() 
{	
	ECHO;
	return line;	
}