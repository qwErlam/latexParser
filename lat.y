%{
#include <stdio.h>
#include <ctype.h>
//#include <string.h>
#include <iostream> 
#include <vector>
#include <algorithm>
#include <regex>
#include "y.tab.h"
std::map <std::string,std::vector<std::string>> hardComands; 
std::vector <std::string> commands;
std::vector <std::pair <std::string, std::string>> specChar;
std::vector <std::string> specCommand = {
    "\\asd",
    "\\lolkek",
    "\\ast",
    "\\cdot",
    "\\forall",
    "\\in"
};
std::vector <std::string> hardCommand = {
    "\begin"
};

extern FILE *yyin;
int yyerror (char *error);
std::string removeWS (std::string str);
#define YYERROR_VERBOSE 1
extern int yylex();
%}


%union
{
    char str[255];
    int erro;
}


%start state
%token <str>    SIMPLCOMMAND HARDCOMMAND SPECTEXT
%type <erro> 	firsttreatment

%type <std::string> item;

%%
state: secondtreatment state
        | secondtreatment
;

secondtreatment:
    firsttreatment{
        if ($1 == 0 )
            yyerror("unknown command ");
    }

firsttreatment:
    SIMPLCOMMAND
    {
        bool isFind = false;
        std::string simplcom($1);
        //removeWS(simplcom);
        for(auto it : commands){
            size_t pos = simplcom.find(it);
            std::cout<<"Simp - "<<it<<"\n\n";
            if (pos != std::string::npos){
                std::cout << "Found at pos = " << pos << "\n";
                std::cout << "nahod\n";
                isFind = true;
                break;
            }
            else
                std::cout << "nenahod\n";
        }
        $$ = isFind ?  1 : 0;

        std::cout<<"Simple_very - "<<simplcom<<"\n\n";    
    }
    | HARDCOMMAND
    {
        int it =0;
        std::string s($1);
        std::cout<<"Hard_very - "<<s<<"\n\n";
        std::regex exp("([\\\\][a-zA-Z]+)\\s*[{]\\s*(.[a-zA-Z]*)\\s*[}]");
        bool isFind = false;
        std::smatch matches;
        std::string tempFuckingString;
        if(std::regex_search(s, matches, exp)) {
            std::cout << "Match found_LOL\n";
            std::cout<<"______________________________\t"<<matches[1].str()<<std::endl;
            //bool isFind = false;
            //std::string matches;
            tempFuckingString = matches[1].str();
            if (hardComands.find(tempFuckingString) != hardComands.end()) {
                tempFuckingString.clear();
                tempFuckingString = matches[(size_t)1].str();
                auto tmpVect = hardComands.at(tempFuckingString);
                tempFuckingString.clear();
                std::cout<<tmpVect.size()<<std::endl;
                if (tmpVect.size()) {
                    for (auto it : tmpVect) {
                        tempFuckingString = matches[(size_t)2].str();
                        std::cout<<it<<"\t"<<matches[(size_t)2].str()<<"\t"<<it.length()<<"\t"<<tempFuckingString.length()<<"\t"<<it.compare(tempFuckingString)<<(it.length() == tempFuckingString.length())<< (it.compare(tempFuckingString) == 0)<<std::endl;

                        if ((it.length() == tempFuckingString.length()) && (it.compare(tempFuckingString) == 0)) {
                                std::cout<<"im in\n";
                            isFind = true;
                        }
                    //}
                    }    
                }
                else{
                    isFind = true;
                }                
            }
        }
        if (isFind)
            std::cout<<"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
        $$ = isFind ?  1 : 0;
    }

    | SPECTEXT
    {
        std::string s($1);  
        bool isFind = false;
        std::regex exp("(\\\\[a-zA-Z]+)");
        for (std::sregex_iterator beg = std::sregex_iterator(s.begin(), s.end(), exp); beg != std::sregex_iterator();beg++) {
            for (auto it : specCommand){          
                size_t pos = beg->str().length() == it.length() ? beg->str().find(it) : std::string::npos;
                if (pos != std::string::npos){
                    std::cout<<"spec simp - "<<it<<"\t" <<beg->str()<< "\n\n";
                    isFind = true;
                    break;
                }
                else
                    std::cout << "spec nenahod\n";       
            }
        $$ = isFind ?  1 : 0;

        }
    }
;
%%

std::string removeWS (std::string str){
    std:: string res;
    str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());
    std::cout<<"-----ola---\t"<<str<<std::endl;

    return res;
}
int  yyerror(char *s)
{
    std::cout<<"-------\t"<<s<<std::endl;
    return 0;
}
int main(){
    std::vector <std::string> empty;
    std::vector <std::string> lol = {"aboba","lol","abobb"};
    hardComands["\\begin"] = lol;
    hardComands["\\item"] = empty;

    yyin = fopen("lat.txt", "r");
    commands.push_back("\\a");
    commands.push_back("\\b");
    commands.push_back("\\c");
    //std::cout << *commands.begin();
    return yyparse();
}