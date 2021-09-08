%{
#include "y.tab.h"
#include<stdio.h>
#include<string.h>
#include<iostream>
void count();
int line=1;
int d_count=1;
int line_count(); 
%}
%option noyywrap
%%
\\[a-zA-Z]+[ \n\t\r*]{0,10}[{][ \n\t\r]{0,10}[a-zA-Z]+[ \n\t\r]{0,10}[}]   {
    //std::cout<<"Hard - "<<yytext<<"\n\n";

    int count = strlen(yytext);
    memset(yylval.str, 0, 32); 
    strncpy(yylval.str, yytext, 32);
    return HARDCOMMAND;
}
\\[a-zA-Z]+ {
	//std::cout<<"Simple - "<<yytext<<"\n\n"; //std:: cout << d;
  
  int count = strlen(yytext);
	memset(yylval.str, 0, 32); 
  strncpy(yylval.str, yytext, 32);
	return SIMPLCOMMAND;
}

[$].+[$] {
    std::cout<<"Spec - "<<yytext<<"\n\n"; //std:: cout << d;
    memset(yylval.str, 0, 32); 
    strncpy(yylval.str, yytext, 32);
    return SPECTEXT;
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