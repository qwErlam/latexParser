<<<<<<< HEAD
%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream> 
#include <vector>
#include <algorithm>
#include <stack>
#include <regex>
std::vector <std::string> commands = {
    "\\maketitle",
    "\\bf ",
    "\\section*",
    "\\subsection*",
    "\\lang"
};

//std::map <std::string, int> begEnd;
//static int i =0;
std::stack<std::string> begEnd;

std::map <std::string,std::vector<std::string>> hardComands; 
std::vector <std::pair <std::string, std::string>> specChar;
std::vector <std::string> specCommand = {
    "\\langle",
    "\\cdot",
    "\\ast",
    "\\rangle",
    "\\forall",
    "\\all",
    "\\in"
};

std::vector <std::string> hardCommand = {
     "\\begin",
    "\\usepackage",
    "\\documentclass",
    "\\definecolor",
    "\\hypersetup",
    "\\textbf",
    "\\end"
};

extern FILE *yyin;
extern int zipzap;
extern int line;
int yyerror (std::string error);
std::string removeWS (std::string str);
#define YYERROR_VERBOSE 1
extern int yylex();

enum ERROR
{
    ALL_GOOD,
    ERROR_HARD,
    ERROR_SIMPL, 
    ERROR_SPEC 
};

struct S_ERROR
{
    S_ERROR (ERROR _num,std::string strErr = ""){
        num = _num;
        str_error = strErr;
    }
    std::string str_error;
    ERROR num; 
};

%}



%union
{
    char str[255];
    struct S_ERROR* erro;
}


%start state
%token <str>    SIMPLCOMMAND HARDCOMMAND SPECTEXT 
%type <erro> 	firsttreatment


%%
state: secondtreatment state
        | secondtreatment
;

secondtreatment:
    firsttreatment{
        if ($1->num == 0 ){

        }
        else if ($1->num == 1 ) {
            yyerror("Unknown command ERROR_HARD - " + $1->str_error);
        }
        else if ($1->num == 2 ) {
            yyerror("Unknown command ERROR_SIMPL - " + $1->str_error);
        }
        else{
             yyerror("Unknown command ERROR_SPEC - " + $1->str_error);
        }
        $1->str_error.clear();
        delete $1;
    }
firsttreatment: 
    SIMPLCOMMAND
    {
        bool isFind = false;
        std::string simplcom($1);
        removeWS(simplcom);
        for(auto it : commands){
            size_t pos = simplcom.find(it);
            std::cout<<"Simp - "<<it<<"\n\n";
            if (pos != std::string::npos){
                std::cout << "nahod\n";
                isFind = true;
                $$->str_error = it;
                break;
            }
            else
                std::cout << "nenahod\n";
        }
        if(isFind == 1){
            //$$->num = ALL_GOOD;
            $$ = new S_ERROR(ALL_GOOD);
        }
        else{
            //$$->num = ERROR_SIMPL;
            //$$->str_error = simplcom;
            $$ = new S_ERROR(ERROR_SIMPL, simplcom);
        }
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
                            if(matches[1].compare("\\begin") == 0)
                                begEnd.push(it);
                            else if (matches[1].compare("\\ ") == 0)
                                if (it.compare(begEnd.top()) == 0)
                                    begEnd.pop();
                                else
                                    isFind = false;

                            break;
                        }
                    }    
                }
                else{
                    isFind = true;
                    printf("dasdada");
                }                
            }
        }
        if(isFind == 1){
        $$ = new S_ERROR(ALL_GOOD);
            //$$->num = ALL_GOOD;
        }
        else{
        $$ = new S_ERROR(ERROR_SPEC,s);
            //$$->num = ERROR_SPEC;
            //$$->str_error = s;
        }
        
    }
    | SPECTEXT
    {
        std::string s($1);
        std::cout<<"a"<<std::endl;  
        bool isFind = true;
        std::regex exp("(\\\\[a-zA-Z]+)");
        for (std::sregex_iterator beg = std::sregex_iterator(s.begin(), s.end(), exp); beg != std::sregex_iterator();beg++) {
            std::cout<<"a"<<std::endl;
            for (auto it : specCommand){
                size_t pos = beg->str().length() == it.length() ? beg->str().find(it) : std::string::npos;
                if (pos != std::string::npos){
                    std::cout<<"spec simp - "<<it<<"\t" <<beg->str()<< "\n\n";
                    isFind = true;
                    //$$->str_error = beg->str();
                    break;
                }
                else
                    std::cout << "spec nenahod\n";
                isFind = false;       
            }
            
        }
        if(isFind == 1){
                $$ = new S_ERROR(ALL_GOOD);
                //$$->num = ALL_GOOD;
            }
            else{
                $$ = new S_ERROR(ERROR_SPEC,s);
                //$$->num = ERROR_SPEC;
                //$$->str_error = s;
            }
    }
;
%%

std::string removeWS (std::string str){
    std:: string res;
    str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());
   // std::cout<<"-----ola---\t"<<str<<std::endl;

    return res;
}

int  yyerror(std::string s)
{
    std::cout<<"-------\t"<<s<<"\t in line: "<< line<<std::endl;
    return 0;
}

int main(){
    yyin = fopen("lat.txt", "r");
    std::vector <std::string> v_usepackage = {"amssymb","mathtext","physics","graphicx"};
    std::vector <std::string> v_begin = {"document","center","itemize","large","alah"};
    std::vector <std::string> v_documentclass = {"article","book","letter"};
    hardComands["\\begin"] = v_begin;
    hardComands["\\end"] = v_begin;
    hardComands["\\usepackage"] = v_usepackage;
    hardComands["\\documentclass"]; 
    hardComands["\\author"]; 
    hardComands["\\textbf"];
    yyparse();
    if(zipzap != 0)
        std::cout<<"Missing '{' or '}'"<<std::endl;
    else
        std::cout<<"Succes"<<std::endl;
    return 0;
=======
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
>>>>>>> e44f5d33d566d0868e8010cb3e29b90a23f38400
}