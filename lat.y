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
            //return -1;
            exit(-1);
        }
        else if ($1->num == 2 ) {
            yyerror("Unknown command ERROR_SIMPL - " + $1->str_error);
            //return -1;
            exit(-1);
        }
        else{
            yyerror("Unknown command ERROR_SPEC - " + $1->str_error);
            //return -1;
            exit(-1);
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
            if (pos != std::string::npos){
                isFind = true;
                $$->str_error = it;
                break;
            }
        }
        if(isFind == 1){
            $$ = new S_ERROR(ALL_GOOD);
        }
        else{
            $$ = new S_ERROR(ERROR_SIMPL, simplcom);
        }  
    }
    | HARDCOMMAND
    {
        std::string s($1);
        std::regex exp("([\\\\][a-zA-Z]+)\\s*[{]\\s*(.[a-zA-Z]*)\\s*[}]");
        bool isFind = false;
        std::smatch matches;
        if(std::regex_search(s, matches, exp)) {
            if (hardComands.find(matches[1]) != hardComands.end()) {
                auto tmpVect = hardComands.at(matches[1]);
                if (tmpVect.size()) {
                    for (auto it : tmpVect) {
                        if (it.compare(matches[2]) == 0) {
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
                }                
            }
        }
        if(isFind == 1){
            $$ = new S_ERROR(ALL_GOOD);
        }
        else{
            $$ = new S_ERROR(ERROR_SPEC,s);
        }
        
    }
    | SPECTEXT
    {
        std::string s($1);
        bool isFind = true;
        std::regex exp("(\\\\[a-zA-Z]+)");
        for (std::sregex_iterator beg = std::sregex_iterator(s.begin(), s.end(), exp); beg != std::sregex_iterator();beg++) {
            for (auto it : specCommand){
                size_t pos = beg->str().length() == it.length() ? beg->str().find(it) : std::string::npos;
                if (pos != std::string::npos){
                    isFind = true;
                    break;
                }
                isFind = false;       
            }
            
        }
        if(isFind == 1){
            $$ = new S_ERROR(ALL_GOOD);
        }
        else{
            $$ = new S_ERROR(ERROR_SPEC,s);
        }
    }
;
%%

std::string removeWS (std::string str){
    std:: string res;
    str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());

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
}