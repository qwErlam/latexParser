%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream> 
#include <vector>
#include <algorithm>
#include <regex>
std::vector <std::string> commands;
std::vector <std::pair <std::string, std::string>> specChar;
std::vector <std::string> specCommand = {
    "\\asd",
    "\\lolkek"
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
        removeWS(simplcom);
        //for ( std::vector<std::string>::iterator it = commands.begin(); it != commands.end(); ++it ) {
        for(auto it : commands){
            size_t pos = simplcom.find(it);
            std::cout<<"Simp - "<<it<<"\n\n";
            if (pos != std::string::npos){
                //std::string s2 = sd.substr(istr-sd+1, *(sd+(istr-sd+1)).find(' '));
                std::cout << "Found at pos = " << pos << "\n";

                std::cout << "nahod\n";
                //$$ = 0;
                isFind = true;
                break;
            }
            else
                std::cout << "nenahod\n";
        }
        $$ = isFind ?  1 : 0;

        std::cout<<"Simple_very - "<<simplcom<<"\n\n";   
             

       /*     istr = strstr(sd,*it);
            if (istr == NULL)
                printf ("nenahod\n");
            else
            {
                std::string s2 = sd.substr(istr-sd+1, *(sd+(istr-sd+1)).find(' '));
                //if(strlen(s2) == 1)//strlen(*it))
                if(s2.length() == *it.length())
                {
                    printf ("nahod\n");
                }
            }
        }*/  
    }
    | HARDCOMMAND
    {
        int it =0;
        std::string s($1);
        std::cout<<"Hard_very - "<<s<<"\n\n";
        std::regex exp("([\\\\][a-zA-Z]+)\\s*[{]\\s*(.[a-zA-Z]*)\\s*[}]");
        bool isFind;
        std::smatch matches;
        if(std::regex_search(s, matches, exp)) {
            std::cout << "Match found\n";
            for (size_t i = 0; i < matches.size(); ++i) {
            std::cout << i << ": '" << matches[i].str() << "'\n";
            }
        }
        //for (std::sregex_iterator beg = std::sregex_iterator(s.begin(), s.end(), exp); beg != std::sregex_iterator();beg++) {
        //            std::cout<<"hard simp - "<<it<<"\t" <<beg->str()<< "\n\n";
        //            size_t pos = beg->str().length();// == it.length() ? beg->str().find(it) : std::string::npos;
        //            if (pos != std::string::npos){
        //                
        //                isFind = true;
        //               break;
        //            }
        //            else
        //                std::cout << "spec nenahod\n";       
        //        //}
        //    $$ = isFind ?  1 : 0;
        //
        //    }
        
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
                        //$$ = 0;
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
    yyin = fopen("lat.txt", "r");
    commands.push_back("\\a");
    commands.push_back("\\b");
    commands.push_back("\\c");
    //std::cout << *commands.begin();
    return yyparse();
}