
%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream> 
#include <vector>
#include <algorithm>
#include <stack>
#include <regex>


std::stack<std::string> begEnd;
std::map <std::string,std::vector<std::string>> hardComands;
std::map <std::string,std::vector<std::string>> hardComandsSquare; 
std::vector <std::pair <std::string, std::string>> specChar;

std::vector <std::string> commands = {
    "\\maketitle",
    "\\bf",
    "\\lang",
    "\\t",
    "\\title",
    "\\ne",
    "\\leq",
    "\\noindent",
    "\\textsection",
    "\\item",
    "\\Lambda"
};

std::vector <std::string> specCommand = {
    "\\langle",
    "\\cdot",
    "\\ast",
    "\\rangle",
    "\\forall",
    "\\all",
    "\\leftarrow",
    "\\displaystyle",
    "\\over",
    "\\pm",
    "\\pi",
    "\\displaystyle",
    "\\ne",
    "\\bigg",
    "\\big",
    "\\leq",
    "\\geq",
    "\\sqrt",
    "\\in"
};

std::vector <std::string> v_usepackage = {
    "amssymb",
    "mathtext",
    "physics",
    "graphicx",
    "babel",
    "csquotes",
    "xy",
    "inputenc",
    "setspace",
    "amsmath"
};

std::vector <std::string> v_usepackageS = {
    "russian",
    "english",
    "all",
    "german",
    "utf8"
};

std::vector <std::string> v_docclass = {
    "article"
}; 

std::vector <std::string> v_docclassS = {
    "12pt",
    "letterpaper",
    "twoside"
};

std::vector <std::string> outside_com = {
    "\\title",
    "\\author",
    "\\date"
}; 


extern FILE *yyin;
extern int line;
int yyerror (std::string error);

#define YYERROR_VERBOSE 1
extern int yylex();


enum ERROR
{
    ALL_GOOD,
    ERROR_HARD,
    ERROR_SIMPL, 
    ERROR_SPEC,
    ERROR_LEX,
    ERROR_USEPACK  
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

int printError(struct S_ERROR* yep);

%}


%union
{
    char str[255];
    int num;
    struct S_ERROR* erro;
}


%start state
%token <str>    DOCCLASS USEPAC BEGINDOC COMMAND INSQUAREBR INCURLYBR SPECTEXT ENDDOC MATHSPEC COMMANDINER TITLE END ERROR 
%token <num>    LBRACE RBRACE LSK RSK
%type <erro>    main


%%
state: lasttreatment state
        | lasttreatment

lasttreatment:
    docclass usepall BEGINDOC maintext ENDDOC {}
    | docclass usepall commandoutpall BEGINDOC maintext ENDDOC {}
    | docclass commandoutpall BEGINDOC maintext ENDDOC {}
    | docclass BEGINDOC maintext ENDDOC {}
    | END
    {
        if(begEnd.size()!=0)
            std::cout << "Expucted end " << std::endl;
        else
            std::cout << "Succes " << std::endl;
        exit(1);
    }

maintext: main maintext 
    | main 

main:
    helpmeall
    |LBRACE helpmeall RBRACE 
    | COMMAND  LBRACE helpmeall RBRACE {
        
        std::string com($1);
        
        S_ERROR *errMsg = new S_ERROR(ERROR_HARD,std::string($1));//TODO
        if (hardComands.find(com) != hardComands.end()) {
            
        }
        else {
            printError(errMsg);
        }
    }
    | COMMAND{
        
        if (std::find(commands.begin(),commands.end(), std::string($1)) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string($1));
            printError(errMsg);
        } 
    }
    | MATHSPEC
    {
        
        if (std::find(specCommand.begin(),specCommand.end(), std::string($1)) == specCommand.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SPEC,std::string($1));
            printError(errMsg);
        } 
    }
    | COMMAND LBRACE INCURLYBR RBRACE {
        std::string com($1);
        std::string incom($3);
        
        S_ERROR *errMsg = new S_ERROR(ERROR_HARD,com+"\t"+incom);//TODO
        if (hardComands.find(com) != hardComands.end()) {
            auto tmpVect = hardComands.at(com);
            if(tmpVect.size()){
                if(com.compare("\\begin") == 0){
                    begEnd.push(incom);
                    
                   
                }
                else if (com.compare("\\end") == 0){
                    if(begEnd.size()==0){
                        S_ERROR *errMsg1 = new S_ERROR(ERROR_HARD, incom);
                        printError(errMsg1);
                    }

                    if (incom.compare(begEnd.top()) == 0)
                        
                        begEnd.pop();
                    else
                    {
                        S_ERROR *errMsg1 = new S_ERROR(ERROR_HARD, incom);
                        printError(errMsg1);
                    }
                }
                if (std::find(tmpVect.begin(),tmpVect.end(), std::string($3)) == tmpVect.end()) {
                    printError(errMsg);
                }

            }
            
        }
        else {
            printError(errMsg);
        }
        
    }

    | INCURLYBR {}
    | INSQUAREBR {}
    | LSK {}
    | RSK {}
    | LBRACE
    | RBRACE


commandoutpall : commandout commandoutpall
    |commandout

commandout:
    COMMAND LBRACE INCURLYBR RBRACE {
        printf("dasda111");
    }
    | COMMAND {
         if (std::find(outside_com.begin(),outside_com.end(), std::string($1)) == outside_com.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string($1));
            printError(errMsg);
        } 
    }
    | COMMAND  LBRACE helpmeall RBRACE { 
       
        if (std::find(outside_com.begin(),outside_com.end(), std::string($1)) == outside_com.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string($1));
            printError(errMsg);
        } 
        printf("dasda2222");
    }



helpmeall: helpme helpmeall
    |helpme

helpme:     
    INCURLYBR {
        
    }
    | COMMANDINER {
        if (std::find(commands.begin(),commands.end(), std::string($1)) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string($1));
            printError(errMsg);
        } 
    }
    
docclass: 
    DOCCLASS LSK {

    }
    | docclass INSQUAREBR {
        
    }
    | docclass RSK {

    }
    | DOCCLASS LBRACE
    | docclass LBRACE {}
    | docclass INCURLYBR {
        //std::cout<< $2<<"-------------"<<std::endl;
        if (std::find(v_docclass.begin(),v_docclass.end(), std::string($2)) == v_docclass.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_USEPACK ,std::string($2));
            printError(errMsg);
        }
    }
    |docclass RBRACE {}



usepall : usep usepall
    |usep

usep: 
    USEPAC LSK {

    }
    | USEPAC LBRACE
    | usep INSQUAREBR {
        if (std::find(v_usepackageS.begin(),v_usepackageS.end(), std::string($2)) == v_usepackageS.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_USEPACK ,std::string($2) + "\t[]");
            printError(errMsg);
        }
    }
    | usep RSK {

    }
    | usep LBRACE {}
    | usep INCURLYBR {
    //std::cout<< $2<<"-------------"<<std::endl;
        if (std::find(v_usepackage.begin(),v_usepackage.end(), std::string($2)) == v_usepackage.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_USEPACK ,std::string($2) + "\t{}");
            printError(errMsg);
        }
    }
    |usep RBRACE {}


;
%%


int printError(struct S_ERROR* yep)
{
    if (yep->num == 1 ) {
        yyerror("Unknown command ERROR_HARD - " + yep->str_error);
        //exit(-1);
    }
    else if (yep->num == 2 ) {
        yyerror("Unknown command ERROR_SIMPL - " + yep->str_error);
        //return -1;
        //exit(-1);
    }
    else if (yep->num == 3) {
        yyerror("Unknown command ERROR_SPEC - " + yep->str_error);
        //return -1;
        //exit(-1);
    }
    else if (yep->num == 4){
        yyerror("Lexical error - " + yep->str_error);
        //exit(-1);
    }
    else if (yep->num == 5){
        yyerror("usepackage arguments error - " + yep->str_error);
        //exit(-1);
    }
    return 0;
}

int  yyerror(std::string s)
{
    fflush(stdout);
    std::cout<<s<<"\t in line: "<< line<<std::endl;
    return 0;
}

int main(int argc, char *argv[]){
    std::vector<std::string> emptyVect = {};
    yyin = fopen(argv[1], "r");
    
    std::vector <std::string> v_usepackage = {"amssymb","mathtext","physics","graphicx", "babel"};
    std::vector <std::string> v_begin = {"document","enumerate","cases","gather","otherlanguage","tabular","equation","","center","itemize","large"};
    std::vector <std::string> v_documentclass = {"article","book","letter"};
    std::vector <std::string> v_usepackageS = {"russian", "english"};
    hardComands["\\begin"] = v_begin;
    hardComands["\\end"] = v_begin;
    hardComands["\\usepackage"] = v_usepackage;
    hardComands["\\author"];
    hardComands["\\section"];
    hardComands["\\subsection"];
    hardComands["\\subchapter"];
    hardComands["\\paragraph"];
    hardComands["\\textbf"];
    hardComands["\\textit"];
    hardComands["\\textsc"];
    hardComands["\\markright"];
    hardComands["\\markboth"];
    hardComands["\\pagenumbering"];



    yyparse();

  
    return 0;
}