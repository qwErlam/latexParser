/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lat.y"

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
    "\\AE",                              
    "\\AtBeginDocument",                 
    "\\AtEndDocument",                   
    "\\AtEndOfClass",                    
    "\\AtEndOfPackage",                  
    "\\CheckCommand",                    
    "\\CurrentOption",                   
    "\\DeclareFixedFont",                
    "\\DeclareFontShape",                
    "\\DeclareMathVersion",              
    "\\DeclareOldFontCommand",           
    "\\DeclareRobustCommand",            
    "\\DeclareSymbolFont",               
    "\\DeclareSymbolFontAlphabet",       
    "\\DeclareTextFontCommand",          
    "\\DeclareTextSymbol",               
    "\\Huge",                            
    "\\LARGE",                           
    "\\LRmulticolcolumns",               
    "\\MakeLowercase",                   
    "\\MinusOne",                        
    "\\NeedsTeXFormat",                  
    "\\OT",                              
    "\\OptionNotUsed",                   
    "\\PackageError",                    
    "\\PackageInfo",                     
    "\\PackageWarning",                  
    "\\PassOptionsToClass",              
    "\\PassOptionsToPackage",            
    "\\ProvidesClass",                   
    "\\ProvidesFile",                    
    "\\RLmulticolcolumns",               
    "\\SetMathAlphabet",                 
    "\\SetSymbolFont",                   
    "\\ShellEscape",                     
    "\\TBerror",                         
    "\\Umathcode",                       
    "\\UseRawInputEncoding",             
    "\\XeTeX",                           
    "\\XeTeXintercharclass",             
    "\\XeTeXinterchartoks",              
    "\\advance",                         
    "\\ae",                              
    "\\alpha",                           
    "\\alphld",                          
    "\\babel",                           
    "\\baz",                             
    "\\begingroup",                      
    "\\bfdefault",                       
    "\\catcode",                         
    "\\catcodetable",                    
    "\\cfgguide",                        
    "\\check",                           
    "\\color",                           
    "\\columnsep",                       
    "\\crcr",                            
    "\\csname",                          
    "\\dimen",                           
    "\\docolaction",                     
    "\\ds",                              
    "\\edef",                            
    "\\eg",                              
    "\\encodingdefault",                 
    "\\endcsname",                       
    "\\enddocument",                     
    "\\endfoo",                          
    "\\evensidemargin",                  
    "\\expandafter",                     
    "\\f",                               
    "\\familydefault",                   
    "\\filename",                        
    "\\font",                            
    "\\fontencoding",                    
    "\\fontfamily",                      
    "\\fontseries",                      
    "\\fontshape",                       
    "\\fontsize",                        
    "\\foobar",                          
    "\\footnotesize",                    
    "\\footskip",                        
    "\\getfirstgithubissue",             
    "\\headheight",                      
    "\\headlinecolor",                   
    "\\headsep",                         
    "\\hfill",                           
    "\\hidewidth",                       
    "\\hmode",                           
    "\\href",                            
    "\\huge",                            
    "\\idxentry",                        
    "\\ifhmode",                         
    "\\inputencoding",                   
    "\\isanitize",                       
    "\\it",                              
    "\\itdefault",                       
    "\\lablst",                          
    "\\lablstclass",                     
    "\\lablstfile",                      
    "\\lablstpackages",                  
    "\\langle",                          
    "\\lessdot",                         
    "\\linespread",                      
    "\\lowercase",                       
    "\\luatexluafunction",               
    "\\marginpar",                       
    "\\marginparsep",                    
    "\\marginparwidth",                  
    "\\math",                            
    "\\mathalpha",                       
    "\\mathbin",                         
    "\\mathclose",                       
    "\\mathop",                          
    "\\mathopen",                        
    "\\mathord",                         
    "\\mathpunct",                       
    "\\mathrel",                         
    "\\maxbalancingoverflow",            
    "\\mddefault",                       
    "\\meaning",                         
    "\\modguide",                        
    "\\newattribute",                    
    "\\newcatcodetable",                 
    "\\newinsert",                       
    "\\newlabel",                        
    "\\newluafunction",                  
    "\\newmark",                         
    "\\newwhatsit",                      
    "\\newwrite",                        
    "\\nobreak",                         
    "\\nobreakspace",                    
    "\\nopagecolor",                     
    "\\normalcolor",                     
    "\\normalit",                        
    "\\normalshape",                     
    "\\nstex",                           
    "\\null",                            
    "\\ooalign",                         
    "\\oplus",                           
    "\\overfullrule",                    
    "\\paperheight",                     
    "\\paperwidth",                      
    "\\par",                             
    "\\paragraph",                       
    "\\parindent",                       
    "\\parshape",                        
    "\\parskip",                         
    "\\penalty",                         
    "\\phantom",                         
    "\\picturechar",                     
    "\\pkg",                             
    "\\protect",                         
    "\\protected",                       
    "\\ps",                              
    "\\qquad",                           
    "\\raise",                           
    "\\relax",                           
    "\\reserveinserts",                  
    "\\rmdefault",                       
    "\\romannumeral",                    
    "\\rotatebox",                       
    "\\scdefault",                       
    "\\scriptfont",                      
    "\\scriptsize",                      
    "\\selectfont",                      
    "\\seriesdefault",                   
    "\\setattribute",                    
    "\\setbox",                          
    "\\sf",                              
    "\\sfcode",                          
    "\\sfdefault",                       
    "\\shapedefault",                    
    "\\sl",                              
    "\\sldefault",                       
    "\\spacedallcaps",                   
    "\\spacedlowsmallcaps",              
    "\\sscdefault",                      
    "\\sscshape",                        
    "\\ssf",                             
    "\\string",                          
    "\\strip",                           
    "\\strut",                           
    "\\subsubsection",                   
    "\\sum",                             
    "\\swdefault",                       
    "\\swshape",                         
    "\\tabularx",                        
    "\\textcommaabove",                  
    "\\textfont",                        
    "\\textssc",                         
    "\\textsw",                          
    "\\textulc",                         
    "\\tf",                              
    "\\thanks",                          
    "\\tiny",                            
    "\\today",                           
    "\\topmargin",                       
    "\\topskip",                         
    "\\tracefloats",                     
    "\\tracefloatsoff",                  
    "\\tracefloatvals",                  
    "\\ttdefault",                       
    "\\twocolumn",                       
    "\\ulcdefault",                      
    "\\ulcshape",                        
    "\\unitlength",                      
    "\\unsetattribute",                  
    "\\unskip",                          
    "\\updefault",                       
    "\\uppercase",                       
    "\\usefont",                         
    "\\vbox",                            
    "\\vskip",                           
    "\\write",                           
    "\\xspace",                          
    "\\xtxHanGlue",                      
    "\\xtxHanSpace",                     
    "\\z",                                
    "\\maketitle",
    "\\bf",
    "\\lang",
    "\\large",
    "\\t",
    "\\title",
    "\\ne",
    "\\leq",
    "\\noindent",
    "\\textsection",
    "\\displaystyle",
    "\\normalsize",
    "\\item",
    "\\Lambda",
    "\\LaTeX",
    "\\glqq",
    "\\grqq",
    "\\ldots",
    "\\emph",
    "\\tableofcontents",
    "\\newpage",
    "\\centering",
    "\\AND",                                         
    "\\AW",                                          
    "\\AmSLaTeX",                                    
    "\\BooleanFalse",                                
    "\\BooleanTrue",                                 
    "\\Box",                                         
    "\\CheckSum",                                    
    "\\ConTeXt",                                     
    "\\DH",                                          
    "\\DJ",                                          
    "\\DeclareDocumentCommand",                      
    "\\DeclareDocumentEnvironment",                  
    "\\DeclareExpandableDocumentCommand",            
    "\\DeclareMathAlphabet",                         
    "\\DeclareMathDelimiter",                        
    "\\DeclareMathSizes",                            
    "\\DeclareMathSymbol",                           
    "\\DeclareOption",                               
    "\\DeclareTextCommandDefault",                   
    "\\Diamond",                                     
    "\\DoSomethingJustWithMandatoryArgument",        
    "\\DoSomethingWithBothArguments",                
    "\\DoSomethingWithStar",                         
    "\\DoSomethingWithoutStar",                      
    "\\EndIncludeInRelease",                         
    "\\ExecuteOptions",                              
    "\\GetDocumentCommandArgSpec",                   
    "\\GetDocumentEnvironmentArgSpec",               
    "\\Gp",                                          
    "\\IfBooleanF",                                  
    "\\IfBooleanT",                                  
    "\\IfBooleanTF",                                 
    "\\IfNoValueF",                                  
    "\\IfNoValueT",                                  
    "\\IfNoValueTF",                                 
    "\\IfValueF",                                    
    "\\IfValueT",                                    
    "\\IfValueTF",                                   
    "\\InputIfFileExists",                           
    "\\InternalFunctionOfThreeArguments",            
    "\\Join",                                        
    "\\LaTeXGcomp",                                  
    "\\LaTeXNews",                                   
    "\\LaTeXWcomp",                                  
    "\\LaTeXbook",                                   
    "\\LaTeXcomp",                                   
    "\\LaTeXe",                                      
    "\\Large",                                       
    "\\LoadClass",                                   
    "\\LoadClassWithOptions",                        
    "\\MakeUppercase",                               
    "\\MappingFunction",                             
    "\\NFSS",                                        
    "\\NG",                                          
    "\\NOT",                                         
    "\\NewDocumentCommand",                          
    "\\NewDocumentEnvironment",                      
    "\\NewExpandableDocumentCommand",                
    "\\OE",                                          
    "\\OR",                                          
    "\\OnlyDescription",                             
    "\\PSNFSS",                                      
    "\\ProcessList",                                 
    "\\ProcessOptions",                              
    "\\ProcessorA",                                  
    "\\ProcessorB",                                  
    "\\ProvideDocumentCommand",                      
    "\\ProvideDocumentEnvironment",                  
    "\\ProvideExpandableDocumentCommand",            
    "\\ProvidesPackage",                             
    "\\Ref",                                         
    "\\RenewDocumentCommand",                        
    "\\RenewDocumentEnvironment",                    
    "\\RenewExpandableDocumentCommand",              
    "\\RequirePackage",                              
    "\\RequirePackageWithOptions",                   
    "\\ReverseBoolean",                              
    "\\Rightarrow",                                  
    "\\SLiTeX",                                      
    "\\SS",                                          
    "\\ShowDocumentCommandArgSpec",                  
    "\\ShowDocumentEnvironmentArgSpec",              
    "\\SomeDocumentCommand",                         
    "\\SplitArgument",                               
    "\\SplitList",                                   
    "\\TH",                                          
    "\\TeX",                                         
    "\\TextOrMath",                                  
    "\\TrimSpaces",                                  
    "\\Vref",                                        
    "\\acro",                                        
    "\\addpenalty",                                  
    "\\backmatter",                                  
    "\\backslash",                                   
    "\\baselineskip",                                
    "\\begin",                                       
    "\\bezier",                                      
    "\\bfseries",                                    
    "\\bm",                                          
    "\\boldmath",                                    
    "\\boldsymbol",                                  
    "\\bullet",                                      
    "\\c",                                           
    "\\cal",                                         
    "\\cdot",                                        
    "\\chapter",                                     
    "\\cite",                                        
    "\\clearpage",                                   
    "\\clsguide",                                    
    "\\columnbreak",                                 
    "\\columnwidth",                                 
    "\\copyright",                                   
    "\\cs",                                          
    "\\ctan",                                        
    "\\ctanhttp",                                    
    "\\cyrguide",                                    
    "\\d",                                           
    "\\def",                                         
    "\\depth",                                       
    "\\dh",                                          
    "\\dj",                                          
    "\\document",                                    
    "\\documentstyle",                               
    "\\dots",                                        
    "\\dump",                                        
    "\\eTeX",                                        
    "\\else",                                        
    "\\elvbf",                                       
    "\\elvrm",                                       
    "\\elvsf",                                       
    "\\em",                                          
    "\\end",                                         
    "\\endtabularx",                                 
    "\\enlargethispage",                             
    "\\ensuremath",                                  
    "\\errorcontextlines",                           
    "\\example",                                     
    "\\extrafloats",                                 
    "\\fauxguillemet",                               
    "\\fi",                                          
    "\\fmbox",                                       
    "\\fmtversion",                                  
    "\\fnsymbol",                                    
    "\\fntguide",                                    
    "\\foo",                                         
    "\\framebox",                                    
    "\\frenchspacing",                               
    "\\frontmatter",                                 
    "\\fsf",                                         
    "\\gg",                                          
    "\\graphpaper",                                  
    "\\guillemotleft",                               
    "\\guillemotright",                              
    "\\guilsinglleft",                               
    "\\guilsinglright",                              
    "\\hbox",                                        
    "\\height",                                      
    "\\heightof",                                    
    "\\hologo",                                      
    "\\hspace",                                      
    "\\hyphenation",                                 
    "\\hyphenchar",                                  
    "\\i",                                           
    "\\ifcase",                                      
    "\\ifx",                                         
    "\\ignorespacesafterend",                        
    "\\include",                                     
    "\\includegraphics",                             
    "\\index",                                       
    "\\iniTeX",                                      
    "\\input",                                       
    "\\itshape",                                     
    "\\jobname",                                     
    "\\kern",                                        
    "\\l",                                           
    "\\label",                                       
    "\\labelformat",                                 
    "\\language",                                    
    "\\latex",                                       
    "\\lccode",                                      
    "\\leadsto",                                     
    "\\left",                                        
    "\\lefthyphenmin",                               
    "\\let",                                         
    "\\lhd",                                         
    "\\line",                                        
    "\\lineskiplimit",                               
    "\\linewidth",                                   
    "\\listfiles",                                   
    "\\ll",                                          
    "\\long",                                        
    "\\looseness",                                   
    "\\m",                                           
    "\\mainmatter",                                  
    "\\makeatletter",                                
    "\\makeatother",                                 
    "\\makebox",                                     
    "\\mark",                                        
    "\\mathbf",                                      
    "\\mathcal",                                     
    "\\mathchardef",                                 
    "\\mathcode",                                    
    "\\mathit",                                      
    "\\mathnormal",                                  
    "\\mathring",                                    
    "\\mathrm",                                      
    "\\mathsf",                                      
    "\\mathtt",                                      
    "\\maxof",                                       
    "\\mbox",                                        
    "\\mdseries",                                    
    "\\meta",                                        
    "\\mho",                                         
    "\\mid",                                         
    "\\minof",                                       
    "\\multicolumn",                                 
    "\\newXeTeXintercharclass",                      
    "\\newblock",                                    
    "\\newenvironment",                              
    "\\newline",                                     
    "\\newmarks",                                    
    "\\newmathalphabet",                             
    "\\ng",                                          
    "\\nobreakdashes",                               
    "\\nocorr",                                      
    "\\nofiles",                                     
    "\\normalfont",                                  
    "\\normalsfcodes",                               
    "\\o",                                           
    "\\oddsidemargin",                               
    "\\oe",                                          
    "\\oldstylenums",                                
    "\\package",                                     
    "\\pagebreak",                                   
    "\\parbox",                                      
    "\\part",                                        
    "\\path",                                        
    "\\patterns",                                    
    "\\providecommand",                              
    "\\qbezier",                                     
    "\\quad",                                        
    "\\quotedblbase",                                
    "\\quotesinglbase",                              
    "\\r",                                           
    "\\raggedright",                                 
    "\\raisefirstsection",                           
    "\\ref",                                         
    "\\reftextbefore",                               
    "\\reftextfaraway",                              
    "\\renewcommand",                                
    "\\renewenvironment",                            
    "\\rhd",                                         
    "\\right",                                       
    "\\righthyphenmin",                              
    "\\rm",                                          
    "\\rmfamily",                                    
    "\\rule",                                        
    "\\samepage",                                    
    "\\savebox",                                     
    "\\sbox",                                        
    "\\scshape",                                     
    "\\section",                                     
    "\\setcounter",                                  
    "\\setlength",                                   
    "\\setlongtables",                               
    "\\settodepth",                                  
    "\\settoheight",                                 
    "\\settototalheight",                            
    "\\settowidth",                                  
    "\\sffamily",                                    
    "\\showkeyslabelformat",                         
    "\\showtokens",                                  
    "\\slash",                                       
    "\\slshape",                                     
    "\\small",                                       
    "\\sqrt",                                        
    "\\sqsubset",                                    
    "\\sqsupset",                                    
    "\\ss",                                          
    "\\subsection",                                  
    "\\suppressfloats",                              
    "\\tabularnewline",                              
    "\\tenbf",                                       
    "\\tenrm",                                       
    "\\tensf",                                       
    "\\textasciicircum",                             
    "\\textasciitilde",                              
    "\\textbackslash",                               
    "\\textbar",                                     
    "\\textbf",                                      
    "\\textbrokenbar",                               
    "\\textbullet",                                  
    "\\textcommabelow",                              
    "\\textcompwordmark",                            
    "\\textcurrency",                                
    "\\textemdash",                                  
    "\\textendash",                                  
    "\\texteuro",                                    
    "\\textexclamdown",                              
    "\\textgreater",                                 
    "\\textheight",                                  
    "\\textit",                                      
    "\\textless",                                    
    "\\textmd",                                      
    "\\textnormal",                                  
    "\\textonehalf",                                 
    "\\textonequarter",                              
    "\\textperiodcentered",                          
    "\\textquestiondown",                            
    "\\textquotedbl",                                
    "\\textquotedblleft",                            
    "\\textquotedblright",                           
    "\\textquoteleft",                               
    "\\textquoteright",                              
    "\\textregistered",                              
    "\\textrm",                                      
    "\\textsc",                                      
    "\\textsf",                                      
    "\\textsl",                                      
    "\\textsubscript",                               
    "\\textsuperscript",                             
    "\\textthreequarters",                           
    "\\texttrademark",                               
    "\\texttt",                                      
    "\\textup",                                      
    "\\textvisiblespace",                            
    "\\textwidth",                                   
    "\\th",                                          
    "\\thicklines",                                  
    "\\thinlines",                                   
    "\\times",                                       
    "\\totalheight",                                 
    "\\totalheightof",                               
    "\\traceoff",                                    
    "\\traceon",                                     
    "\\tracingall",                                  
    "\\tt",                                          
    "\\ttfamily",                                    
    "\\twlbf",                                       
    "\\twlrm",                                       
    "\\twlsf",                                       
    "\\typein",                                      
    "\\typeout",                                     
    "\\typesetnormalchapter",                        
    "\\typesetstarchapter",                          
    "\\uccode",                                      
    "\\unlhd",                                       
    "\\unrhd",                                       
    "\\upshape",                                     
    "\\url",                                         
    "\\usebox",                                      
    "\\usrguide",                                    
    "\\v",                                           
    "\\value",                                       
    "\\verb",                                        
    "\\vfill",                                       
    "\\vpagerefnum",                                 
    "\\width",                                       
    "\\wlog",                                        
    "\\zzz"                                         
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
    "\\in",
    "\\beta",
    "\\max",
    "\\min",
    "\\seq",
    "\\lbrace",
    "\\ldots",
    "\\rbrace",
    "\\mathbf",
    "\\tilde",
    "\\times",
    "\\bullet",
    "\\backslash",
    "\\mid",
    "\\bf",
    "\\vdots",
    "\\text",
    "\\meta",
    "\\alpha",  
    "\\cdot3",  
    "\\cdot4",  
    "\\cdot9",  
    "\\int",    
    "\\mathcal",
    "\\mathit", 
    "\\mathrm", 
    "\\mathsf", 
    "\\mathtt", 
    "\\ne0",    
    "\\oplus",  
    "\\prod",   
    "\\sin",    
    "\\star",   
    "\\sum",    
    "\\to"     

    
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
    "amsmath",
    "fontenc",
    "url",
    "lmodern",
    "hologo",
    "ifthen",
    "lablstpackages",
    "mflogo",
    "multicol",
    "tabularx",
    "textcomp",
    "varioref"

};

std::vector <std::string> v_usepackageS = {
    "russian",
    "english",
    "all",
    "german",
    "utf8",
    "koi8",
    "T2A",
    "T1",
    "T2",
    "T3",
    "r"
};

std::vector <std::string> v_docclass = {
    "article",
    "report",
    "book",
    "letter",
    "slides",
    "beamer",
    "ltnews",
    "ltxguide"
}; 

std::vector <std::string> v_docclassS = {
    "12pt", // TODO
    "letterpaper",
    "twoside",
    "a5paper",
    "a4paper",
    "b5paper",
    "executivepaper",
    "legalpaper"
};

std::vector <std::string> outside_com = {
    "\\title",
    "\\author",
    "\\date",
    "\\thanks",
    "\\ConTeXt",
    "\\DeclareTextCommandDefault",
    "\\acro",
    "\\def",
    "\\else",
    "\\ifx",
    "\\makeatletter",
    "\\makeatother",
    "\\nofiles",
    "\\providecommand",
    "\\setlength",
    "\\textcommabelow",
    "\\CTAN",                
    "\\LuaTeX",              
    "\\MiKTeX",              
    "\\TL",                  
    "\\XeTeX",               
    "\\addtolength",         
    "\\cls",                 
    "\\crcr",                
    "\\csname",              
    "\\egroup",              
    "\\endcsname",           
    "\\endgroup",            
    "\\expandafter",         
    "\\fi",                  
    "\\fontdimen",           
    "\\foo",                 
    "\\gdef",                
    "\\getfirstgithubissue", 
    "\\hangindent",          
    "\\hidewidth",           
    "\\href",                
    "\\hyphenation",         
    "\\idxentry",            
    "\\iffalse",             
    "\\indexentry",          
    "\\input",               
    "\\isanitize",           
    "\\let",                 
    "\\newsavebox",          
    "\\nonfrenchspacing",    
    "\\null",                
    "\\par",                 
    "\\parindent",           
    "\\pdfTeX",              
    "\\pkg",                 
    "\\raggedright",         
    "\\rangle",              
    "\\relax",               
    "\\textcommaabove",      
    "\\textheight",          
    "\\thispage",            
    "\\tolerance",           
    "\\topmargin",           
    "\\ttfamily",            
    "\\undefined",           
    "\\vbadness",            
    "\\vskip"               
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
    ERROR_USEPACK,
    ERROR_OUT,
    ERROR_DOCCLASS  
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

#line 906 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DOCCLASS = 258,                /* DOCCLASS  */
    USEPAC = 259,                  /* USEPAC  */
    BEGINDOC = 260,                /* BEGINDOC  */
    COMMAND = 261,                 /* COMMAND  */
    INSQUAREBR = 262,              /* INSQUAREBR  */
    INCURLYBR = 263,               /* INCURLYBR  */
    NEWCOM = 264,                  /* NEWCOM  */
    SPECTEXT = 265,                /* SPECTEXT  */
    ENDDOC = 266,                  /* ENDDOC  */
    MATHSPEC = 267,                /* MATHSPEC  */
    COMMANDINER = 268,             /* COMMANDINER  */
    TITLE = 269,                   /* TITLE  */
    END = 270,                     /* END  */
    ERROR = 271,                   /* ERROR  */
    LBRACE = 272,                  /* LBRACE  */
    RBRACE = 273,                  /* RBRACE  */
    LSK = 274,                     /* LSK  */
    RSK = 275                      /* RSK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DOCCLASS 258
#define USEPAC 259
#define BEGINDOC 260
#define COMMAND 261
#define INSQUAREBR 262
#define INCURLYBR 263
#define NEWCOM 264
#define SPECTEXT 265
#define ENDDOC 266
#define MATHSPEC 267
#define COMMANDINER 268
#define TITLE 269
#define END 270
#define ERROR 271
#define LBRACE 272
#define RBRACE 273
#define LSK 274
#define RSK 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 838 "lat.y"

    char str[255];
    int num;
    struct S_ERROR* erro;

#line 1005 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DOCCLASS = 3,                   /* DOCCLASS  */
  YYSYMBOL_USEPAC = 4,                     /* USEPAC  */
  YYSYMBOL_BEGINDOC = 5,                   /* BEGINDOC  */
  YYSYMBOL_COMMAND = 6,                    /* COMMAND  */
  YYSYMBOL_INSQUAREBR = 7,                 /* INSQUAREBR  */
  YYSYMBOL_INCURLYBR = 8,                  /* INCURLYBR  */
  YYSYMBOL_NEWCOM = 9,                     /* NEWCOM  */
  YYSYMBOL_SPECTEXT = 10,                  /* SPECTEXT  */
  YYSYMBOL_ENDDOC = 11,                    /* ENDDOC  */
  YYSYMBOL_MATHSPEC = 12,                  /* MATHSPEC  */
  YYSYMBOL_COMMANDINER = 13,               /* COMMANDINER  */
  YYSYMBOL_TITLE = 14,                     /* TITLE  */
  YYSYMBOL_END = 15,                       /* END  */
  YYSYMBOL_ERROR = 16,                     /* ERROR  */
  YYSYMBOL_LBRACE = 17,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 18,                    /* RBRACE  */
  YYSYMBOL_LSK = 19,                       /* LSK  */
  YYSYMBOL_RSK = 20,                       /* RSK  */
  YYSYMBOL_YYACCEPT = 21,                  /* $accept  */
  YYSYMBOL_state = 22,                     /* state  */
  YYSYMBOL_lasttreatment = 23,             /* lasttreatment  */
  YYSYMBOL_newcomm = 24,                   /* newcomm  */
  YYSYMBOL_maintext = 25,                  /* maintext  */
  YYSYMBOL_main = 26,                      /* main  */
  YYSYMBOL_commandoutpall = 27,            /* commandoutpall  */
  YYSYMBOL_commandout = 28,                /* commandout  */
  YYSYMBOL_helpmeall = 29,                 /* helpmeall  */
  YYSYMBOL_helpme = 30,                    /* helpme  */
  YYSYMBOL_docclass = 31,                  /* docclass  */
  YYSYMBOL_usepall = 32,                   /* usepall  */
  YYSYMBOL_usep = 33                       /* usep  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   104

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  21
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  101

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   849,   849,   850,   853,   854,   855,   856,   857,   866,
     870,   876,   877,   880,   881,   887,   888,   889,   897,   904,
     911,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   962,   963,   966,   967,   968,   975,   976,   977,   983,
     989,   993,   994,   997,   998,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1018,  1022,  1023,  1026,  1027,  1028,  1034,  1035,
    1036,  1042
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DOCCLASS", "USEPAC",
  "BEGINDOC", "COMMAND", "INSQUAREBR", "INCURLYBR", "NEWCOM", "SPECTEXT",
  "ENDDOC", "MATHSPEC", "COMMANDINER", "TITLE", "END", "ERROR", "LBRACE",
  "RBRACE", "LSK", "RSK", "$accept", "state", "lasttreatment", "newcomm",
  "maintext", "main", "commandoutpall", "commandout", "helpmeall",
  "helpme", "docclass", "usepall", "usep", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275
};
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      21,    14,   -38,    26,    21,    34,   -38,   -38,   -38,   -38,
      18,    10,    27,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,    29,    66,    57,    51,   -38,   -38,   -38,   -38,   -38,
      28,   -38,   -38,    31,   -38,   -38,    -6,   -38,   -38,   -38,
     -38,    45,    10,   -38,    -6,    12,    50,    10,   -38,    10,
      59,   -38,   -38,   -38,   -38,   -38,   -38,    -7,    52,   -38,
      49,   -38,   -38,   -38,    55,    56,    58,    65,    69,    10,
      63,   -38,    64,    67,   -38,    60,    70,    71,   -38,   -38,
      72,   -38,   -38,    73,    76,    -6,    -6,   -38,    78,    68,
      74,    75,   -14,   -38,   -38,   -38,    81,   -38,    77,    79,
     -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     8,     0,     3,     0,    49,    45,     1,     2,
       0,     0,    38,    46,    51,    40,    39,    50,    52,    47,
      48,     0,    32,     0,    54,    56,    55,    23,    24,    22,
      19,    26,    25,    21,    14,    44,    29,    30,    27,    28,
      13,     0,    12,    15,    42,     0,     0,     0,    31,     0,
       0,    57,    60,    59,    61,    58,    53,     0,     0,    43,
       0,     7,    11,    41,    43,     0,     0,     0,     0,     0,
      43,    18,     0,     0,    16,    36,    35,     0,     6,     4,
       0,    20,    17,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,    37,    34,    33,     0,    10,     0,     0,
       9
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,    90,   -38,   -38,   -37,   -38,    38,   -38,   -36,   -38,
     -38,    80,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    40,    41,    42,    21,    22,    43,    44,
       5,    23,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      60,    70,    59,    96,    97,    62,    35,    35,    63,    65,
      67,    71,    68,    27,    28,    29,    30,    31,    32,    33,
      64,    72,    34,    35,     1,    35,     8,    36,    37,    38,
      39,     6,    80,     7,    47,    25,     2,    26,    10,    11,
      12,    13,    14,    15,    45,    57,    46,    16,    58,    90,
      91,    17,    18,    19,    20,    10,    61,    66,    51,    52,
      48,    50,    49,    12,    69,    73,    15,    74,    53,    54,
      16,    55,    12,    75,    76,    15,    78,    84,    77,    16,
      79,    81,    82,    87,    89,    83,    93,    85,    86,    98,
      88,    92,    94,    95,     9,    99,     0,   100,     0,     0,
       0,     0,     0,     0,    56
};

static const yytype_int8 yycheck[] =
{
      36,     8,     8,    17,    18,    42,    13,    13,    44,    45,
      47,    18,    49,     3,     4,     5,     6,     7,     8,     9,
       8,    57,    12,    13,     3,    13,     0,    17,    18,    19,
      20,    17,    69,    19,     5,    17,    15,    19,     4,     5,
       6,     7,     8,     9,    17,    17,    19,    13,    17,    85,
      86,    17,    18,    19,    20,     4,    11,     7,     7,     8,
      22,    23,     5,     6,     5,    13,     9,    18,    17,    18,
      13,    20,     6,    18,    18,     9,    11,    17,    20,    13,
      11,    18,    18,    11,     8,    18,    18,    17,    17,     8,
      17,    13,    18,    18,     4,    18,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    15,    22,    23,    31,    17,    19,     0,    22,
       4,     5,     6,     7,     8,     9,    13,    17,    18,    19,
      20,    27,    28,    32,    33,    17,    19,     3,     4,     5,
       6,     7,     8,     9,    12,    13,    17,    18,    19,    20,
      24,    25,    26,    29,    30,    17,    19,     5,    27,     5,
      27,     7,     8,    17,    18,    20,    32,    17,    17,     8,
      29,    11,    25,    29,     8,    29,     7,    25,    25,     5,
       8,    18,    29,    13,    18,    18,    18,    20,    11,    11,
      25,    18,    18,    18,    17,    17,    17,    11,    17,     8,
      29,    29,    13,    18,    18,    18,    17,    18,     8,    18,
      18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    21,    22,    22,    23,    23,    23,    23,    23,    24,
      24,    25,    25,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    27,    27,    28,    28,    28,    28,    28,    28,    28,
      28,    29,    29,    30,    30,    31,    31,    31,    31,    31,
      31,    31,    31,    32,    32,    33,    33,    33,    33,    33,
      33,    33
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     5,     6,     5,     4,     1,    10,
       7,     2,     1,     1,     1,     1,     3,     4,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     7,     7,     4,     4,     7,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* lasttreatment: docclass usepall BEGINDOC maintext ENDDOC  */
#line 853 "lat.y"
                                              {}
#line 2086 "y.tab.c"
    break;

  case 5: /* lasttreatment: docclass usepall commandoutpall BEGINDOC maintext ENDDOC  */
#line 854 "lat.y"
                                                               {}
#line 2092 "y.tab.c"
    break;

  case 6: /* lasttreatment: docclass commandoutpall BEGINDOC maintext ENDDOC  */
#line 855 "lat.y"
                                                       {}
#line 2098 "y.tab.c"
    break;

  case 7: /* lasttreatment: docclass BEGINDOC maintext ENDDOC  */
#line 856 "lat.y"
                                        {}
#line 2104 "y.tab.c"
    break;

  case 8: /* lasttreatment: END  */
#line 857 "lat.y"
          {
        if(begEnd.size()!=0)
            std::cout << "Expucted end " << std::endl;
        else
            std::cout << "Succes " << std::endl;
        exit(1);
    }
#line 2116 "y.tab.c"
    break;

  case 9: /* newcomm: NEWCOM LBRACE COMMANDINER RBRACE LBRACE COMMANDINER LBRACE INCURLYBR RBRACE RBRACE  */
#line 866 "lat.y"
                                                                                      {
        

    }
#line 2125 "y.tab.c"
    break;

  case 10: /* newcomm: NEWCOM LBRACE COMMANDINER RBRACE LBRACE COMMANDINER RBRACE  */
#line 870 "lat.y"
                                                                {
        std::cout << " IN VECTOR - COMMANDS ---" << (yyvsp[-4].str) << std::endl;
        std::cout << " PROVERIT' IN COMMANDS ---" << (yyvsp[-1].str) << std::endl;
    }
#line 2134 "y.tab.c"
    break;

  case 14: /* main: MATHSPEC  */
#line 881 "lat.y"
               {
        if (std::find(specCommand.begin(),specCommand.end(), std::string((yyvsp[0].str))) == specCommand.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SPEC,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2145 "y.tab.c"
    break;

  case 17: /* main: COMMAND LBRACE helpmeall RBRACE  */
#line 889 "lat.y"
                                       {
        std::string com((yyvsp[-3].str));
        S_ERROR *errMsg = new S_ERROR(ERROR_HARD,std::string((yyvsp[-3].str)));//TODO
        if (hardComands.find(com) != hardComands.end()) { }
        else {
            printError(errMsg);
        }
    }
#line 2158 "y.tab.c"
    break;

  case 18: /* main: COMMAND LBRACE RBRACE  */
#line 898 "lat.y"
    {
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[-2].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string((yyvsp[-2].str)));
            printError(errMsg);
        }
    }
#line 2169 "y.tab.c"
    break;

  case 19: /* main: COMMAND  */
#line 904 "lat.y"
              {  
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[0].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2180 "y.tab.c"
    break;

  case 20: /* main: COMMAND LBRACE INCURLYBR RBRACE  */
#line 911 "lat.y"
                                      {
        std::string com((yyvsp[-3].str));
        std::string incom((yyvsp[-1].str));
        S_ERROR *errMsg = new S_ERROR(ERROR_HARD,com + "\t" + incom);
        if (hardComands.find(com) != hardComands.end()) {
            auto tmpVect = hardComands.at(com);
            if(tmpVect.size()){
                if(com.compare("\\begin") == 0){
                    begEnd.push(incom);
                   // std::cout<<"push \t"<<incom<<std::endl;   
                }
                else if (com.compare("\\end") == 0){
                    if(begEnd.size()==0){
                        S_ERROR *errMsg1 = new S_ERROR(ERROR_HARD, com + "\t" + incom);
                        printError(errMsg1);
                    }
                    if (incom.compare(begEnd.top()) == 0){
                       // std::cout<<"pop \t"<<begEnd.top()<<std::endl;
                        begEnd.pop();

                    }
                    else {
                        //S_ERROR *errMsg1 = new S_ERROR(ERROR_HARD,"end command not found for " + incom);
                        std::cout<<"ERROR:\tCant find \\end{" << incom<< "}"<<std::endl;
                        //printError(errMsg1);
                        exit(-1);
                    }
                }
                if (std::find(tmpVect.begin(),tmpVect.end(), std::string((yyvsp[-1].str))) == tmpVect.end()) {
                    printError(errMsg);
                }
            }
        }
        else {
            printError(errMsg);
        }{}
        
    }
#line 2223 "y.tab.c"
    break;

  case 25: /* main: INCURLYBR  */
#line 953 "lat.y"
                {}
#line 2229 "y.tab.c"
    break;

  case 26: /* main: INSQUAREBR  */
#line 954 "lat.y"
                 {}
#line 2235 "y.tab.c"
    break;

  case 27: /* main: LSK  */
#line 955 "lat.y"
          {}
#line 2241 "y.tab.c"
    break;

  case 28: /* main: RSK  */
#line 956 "lat.y"
          {}
#line 2247 "y.tab.c"
    break;

  case 34: /* commandout: COMMAND LBRACE helpmeall RBRACE LBRACE helpmeall RBRACE  */
#line 967 "lat.y"
                                                             {}
#line 2253 "y.tab.c"
    break;

  case 35: /* commandout: COMMAND LBRACE helpmeall RBRACE  */
#line 968 "lat.y"
                                      { 
        if (std::find(outside_com.begin(),outside_com.end(), std::string((yyvsp[-3].str))) == outside_com.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_OUT,std::string((yyvsp[-3].str)));
            printError(errMsg);
        } 
        
    }
#line 2265 "y.tab.c"
    break;

  case 36: /* commandout: COMMAND LBRACE INCURLYBR RBRACE  */
#line 975 "lat.y"
                                      {}
#line 2271 "y.tab.c"
    break;

  case 37: /* commandout: COMMAND LBRACE INCURLYBR RBRACE LBRACE INCURLYBR RBRACE  */
#line 976 "lat.y"
                                                              {}
#line 2277 "y.tab.c"
    break;

  case 38: /* commandout: COMMAND  */
#line 977 "lat.y"
              {
         if (std::find(outside_com.begin(),outside_com.end(), std::string((yyvsp[0].str))) == outside_com.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_OUT,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2288 "y.tab.c"
    break;

  case 39: /* commandout: COMMANDINER  */
#line 983 "lat.y"
                  {
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[0].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_OUT,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2299 "y.tab.c"
    break;

  case 43: /* helpme: INCURLYBR  */
#line 997 "lat.y"
              { }
#line 2305 "y.tab.c"
    break;

  case 44: /* helpme: COMMANDINER  */
#line 998 "lat.y"
                  {
        if (std::find(commands.begin(),commands.end(), std::string((yyvsp[0].str))) == commands.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_SIMPL,std::string((yyvsp[0].str)));
            printError(errMsg);
        } 
    }
#line 2316 "y.tab.c"
    break;

  case 45: /* docclass: DOCCLASS LSK  */
#line 1006 "lat.y"
                 {}
#line 2322 "y.tab.c"
    break;

  case 46: /* docclass: docclass INSQUAREBR  */
#line 1007 "lat.y"
                          {}
#line 2328 "y.tab.c"
    break;

  case 47: /* docclass: docclass LSK  */
#line 1008 "lat.y"
                   {}
#line 2334 "y.tab.c"
    break;

  case 48: /* docclass: docclass RSK  */
#line 1009 "lat.y"
                   {}
#line 2340 "y.tab.c"
    break;

  case 49: /* docclass: DOCCLASS LBRACE  */
#line 1010 "lat.y"
                      {}
#line 2346 "y.tab.c"
    break;

  case 50: /* docclass: docclass LBRACE  */
#line 1011 "lat.y"
                      {}
#line 2352 "y.tab.c"
    break;

  case 51: /* docclass: docclass INCURLYBR  */
#line 1012 "lat.y"
                         {
        if (std::find(v_docclass.begin(),v_docclass.end(), std::string((yyvsp[0].str))) == v_docclass.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_DOCCLASS ,std::string((yyvsp[0].str)));
            printError(errMsg);
        }
    }
#line 2363 "y.tab.c"
    break;

  case 52: /* docclass: docclass RBRACE  */
#line 1018 "lat.y"
                     {}
#line 2369 "y.tab.c"
    break;

  case 55: /* usep: USEPAC LSK  */
#line 1026 "lat.y"
               { }
#line 2375 "y.tab.c"
    break;

  case 57: /* usep: usep INSQUAREBR  */
#line 1028 "lat.y"
                      {
        if (std::find(v_usepackageS.begin(),v_usepackageS.end(), std::string((yyvsp[0].str))) == v_usepackageS.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_USEPACK ,std::string((yyvsp[0].str)) + "\t\t\t\t\t[]");
            printError(errMsg);
        }
    }
#line 2386 "y.tab.c"
    break;

  case 58: /* usep: usep RSK  */
#line 1034 "lat.y"
               {}
#line 2392 "y.tab.c"
    break;

  case 59: /* usep: usep LBRACE  */
#line 1035 "lat.y"
                  {}
#line 2398 "y.tab.c"
    break;

  case 60: /* usep: usep INCURLYBR  */
#line 1036 "lat.y"
                     {
        if (std::find(v_usepackage.begin(),v_usepackage.end(), std::string((yyvsp[0].str))) == v_usepackage.end()){
            S_ERROR *errMsg = new S_ERROR(ERROR_USEPACK ,std::string((yyvsp[0].str)) + "\t\t\t\t\t{}");
            printError(errMsg);
        }
    }
#line 2409 "y.tab.c"
    break;

  case 61: /* usep: usep RBRACE  */
#line 1042 "lat.y"
                 {}
#line 2415 "y.tab.c"
    break;


#line 2419 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1045 "lat.y"



int printError(struct S_ERROR* yep)
{
    if (yep->num == 1 ) {
        yyerror("WARNING: Unknown complex command - " + yep->str_error);
    }
    else if (yep->num == 2 ) {
        yyerror("WARNING: Unknown command - " + yep->str_error );
    }
    else if (yep->num == 3) {
        yyerror("WARNING: Unknown MATH command - " + yep->str_error );
    }
    else if (yep->num == 4){
        yyerror("Lexical error - " + yep->str_error);
    }
    else if (yep->num == 5){
        yyerror("WARNING: Unknown usepackage arguments - " + yep->str_error);
    }
    else if (yep->num == 6){
        yyerror("WARNING: Unknown global command - " + yep->str_error);
    }
    else if (yep->num == 5){
        yyerror("WARNING: Unknown docclass arguments - " + yep->str_error);
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
    std::vector <std::string> v_begin = {"equation","verbatim","twice","minipage","description","decl","footnotesize","small","latexonly","flushright","htmlonly","verbatim", "citations","document","abstract","figure","em","verse","quotation","quote","enumerate","cases","gather","otherlanguage","tabular","equation","","center","itemize","large","flushleft","thebibliography","picture","lrbox","filecontents","verbatim","equation","lrbox", "verbatim",""};
    std::vector <std::string> v_documentclass = {"article","book","letter"};
    std::vector <std::string> v_languare = {"german","russian", "english"};
    hardComands["\\selectlanguage"] = v_languare;
    hardComands["\\foreignlanguage"] = v_languare;
    hardComands["\\begin"] = v_begin; hardComands["\\end"] = v_begin;
    hardComands["\\usepackage"] = v_usepackage;
    hardComands["\\author"]; hardComands["\\section"];
    hardComands["\\subsection"]; hardComands["\\subchapter"];
    hardComands["\\paragraph"]; hardComands["\\textbf"];
    hardComands["\\textit"]; hardComands["\\textsc"];
    hardComands["\\markright"]; hardComands["\\markboth"];
    hardComands["\\pagenumbering"]; hardComands["\\emph"];
    hardComands["\\mbox"]; hardComands["\\footnote"];
    hardComands["\\setcounter"]; hardComands["\\over"];
    hardComands["\\displaystyle"]; hardComands["\\sqrt"];
    hardComands["\\caption"]; hardComands["\\ref"];
    hardComands["\\label"]; hardComands["\\bar"];
    hardComands["\\filesection"];
    hardComands["\\def"];
    hardComands["\\InputIfFileExists"];
    hardComands["\\texttt"];
    hardComands["\\textsf"];
    hardComands["\\m"] = {"file","number","text","cmd","pos","inner-pos","option-list","class-name","release-date","package-name","N","package","command","num","default","file-contents","width","size","ENC","code","date","dimen","encoding","factorfamily","family","font-switches","format-name","math-alph","math-switch","option-name","options-list","release-info","series","shape","skip","slot","slot-1","slot-2","sym-font","sym-font-1","sym-font-2","sym-font-i","symbol","text-switch","type","version","factor","","",""};
    hardComands["\\fsf"];
    hardComands["\\input"];
    hardComands["\\file"];
    hardComands["\\url"];
    hardComands["\\AtEndOfClass"];
    hardComands["\\AtBeginDocument"];
    hardComands["\\everyjob"];
    hardComands["\\batchfile"];
    hardComands["\\parbox"];
    hardComands["\\latex"];
    hardComands["\\vspace"];
    hardComands["\\DeclareMathSizes"];
    hardComands["\\IncludeInRelease"];
    hardComands["\\rightskip"];
    hardComands["\\email"];
    hardComands["\\href"];
    hardComands["\\cite"];
    hardComands["\\NEWfeature"];
    hardComands["\\NEWdescription"];
    hardComands["\\framebox"];
    hardComands["\\newsavebox"];
    hardComands["\\put"];
    hardComands["\\bibitem"];
    hardComands["\\newblock"];
    hardComands["\\fbox"];
    hardComands["\\meta"] = {"environment","function","code","list","token","number","tokens","argument","beg-code","end-code","cmd","token1","token2","token3","default","defaults","command","encoding","","","","","","","","",""};
    hardComands["\\marg"] = {"environment","function","code","list","token","number","tokens","argument","beg-code","end-code","cmd","token1","token2","token3","default","defaults","processor","","","","","","","","","",""};
    hardComands["\\cs"] = {"NewDocumentEnvironment","NewDocumentCommand","protect","omit","ArgumentSpecification","ProcessorB","ProcessorA","BooleanTrue","BooleanFalse","ifblank","IfNoValueF","IfNoValueT","IfNoValueTF","newcommand","begin","end","addvspace","flushbottom","chapter","typesetnormalchapter","IfBooleanTF","New","Renew","Provide","Declare","RenewDocumentCommand","ProvideDocumentCommand","DeclareDocumentCommand","TrimSpaces","long","verb","SplitList","ProcessList","showhyphens","binom","genfrac","","IncludeInRelease","addtoreset","columnbreak","counterwithin","counterwithout","newcounter","removefromreset","","","","","","","","","","","","","","",""};
    hardComands["\\arg"] = {"text","letters","size","length-cmd","class","beg-def","end-def","environment","function","code","cmd","list","number","tokens","arg","","beg-code","end-code","env","width","definition","file-name","package-name","class-name","style","packages","file","num","baselineskip","encoding","factor","family","font-switches","format-name","math-alph","math-switch","option-name","options-list","series","shape","slot","slot-1","slot-2","sym-font","sym-font-1","sym-font-2","symbol","text-switch","type","version","","",""};
    hardComands["\\PassOptionsToClass"] = {"a4paper"};
    hardComands["\\ExecuteOptions"] = {"dvips","textures","dvips","textures",""};
    hardComands["\\pageref"] = {"fsfcode","addrs"};
    hardComands["\\fontencoding"] = {"T1"};
    hardComands["\\newenvironment"] = {"texteqn","fmpage","pageref","","","","","","","","","","","","","","",""};
    hardComands["\\foo"] = {"sm","arg1","arg2","arg3","om","","","","",""};
    hardComands["\\package"];
    hardComands["\\bm"] = {"f"};
    hardComands["\\u"] = {"a"};
    hardComands["\\NewDocumentEnvironment"] = {"twice"};
    hardComands["\\pkg"];
    hardComands["\\hologo"] = {"XeTeX","LuaTeX","LuaLaTeX","XeLaTeX","pdfTeX","eTeX","","","","","","","","","","",""};
    hardComands["\\class"] = {"slides"};
    hardComands["\\LoadClassWithOptions"] = {"\article","article","class-name"};
    hardComands["\\foobar"] = {"arg1","arg2","arg3",""};
    hardComands["\\IfNoValueTF"] = {"-NoValue-"};
    hardComands["\\widthof"] = {"text"};
    hardComands["\\heightof"] = {"text"};
    hardComands["\\depthof"] = {"text"};
    hardComands["\\r"] = {"text", "o"};
    hardComands["\\k"] = {"text"};
    hardComands["\\example"] = {"BBB"};
    hardComands["\\subsubsection"] = {"Tools"};
    hardComands["\\LaTeX"] = {"a","1",""};
    hardComands["\\LaTeXe"] = {"a"};
    hardComands["\\hspace"] = {"4em","-1em","12pt","1em","","","","","","",""};
    hardComands["\\oarg"] = {"default", "num","width","pos","height","inner-pos","options","option-list","release-date","placement","vertical-space","options-list","release-info",""};
    hardComands["\\baz"] = {"o",""};
    hardComands["\\chapter"] = {"title",""};
    hardComands["\\verb"] = {"and"};
    hardComands["\\textcircled"] = {"text","a"};
    hardComands["\\bezier"] = {"N"};
    hardComands["\\ExecuteOptions"] = {"oldlfont","newlfont","latexrelease","dvips","textures","color","ifthen",""};
    hardComands["\\RequirePackage"] = {"oldlfont","newlfont","latexrelease","dvips","textures","color","ifthen",""};
    hardComands["\\cal"] = {"A"};
    hardComands["\\extrafloats"];
    hardComands["\\vrefrange"] = {"eq-first"};
    hardComands["\\DeclareFixedFont"] = {""};
    hardComands["\\DeclareMathAlphabet"] = {""};
    hardComands["\\DeclareMathSymbol"] = {""};
    hardComands["\\DeclareMathVersion"] = {"normal"};
    hardComands["\\DeclareOldFontCommand"] = {""};
    hardComands["\\DeclareOption"] = {"a4paper","baz","code","draft","dvips","foo","green","landscape","onecolumn","option","twoside",""};
    hardComands["\\DeclareSymbolFont"] = {"largesymbols","letters","operators","symbols",""};
    hardComands["\\DeclareSymbolFontAlphabet"] = {""};
    hardComands["\\DeclareTextFontCommand"] = {""};
    hardComands["\\LoadClass"] = {"article"};
    hardComands["\\MakeUppercase"] = {""};
    hardComands["\\NeedsTeXFormat"] = {"LaTeX2e"};
    hardComands["\\PassOptionsToPackage"] = {""};
    hardComands["\\ProvidesClass"] = {"article","class-name","minimal","neplet","smplnews",""};
    hardComands["\\ProvidesFile"] = {""};
    hardComands["\\ProvidesPackage"] = {"ifthen","latexsym","package","",""};
    hardComands["\\RequirePackageWithOptions"] = {"graphics","package",""};
    hardComands["\\SetMathAlphabet"] = {""};
    hardComands["\\SetSymbolFont"] = {"letters","operators"};
    hardComands["\\URL"] = {""};
    hardComands["\\acro"] = {"CD-ROM","TUG","ascii",""};
    hardComands["\\begidn"] = {"figure"};
    hardComands["\\bibcite"] = {""};
    hardComands["\\c"] = {"g","G"};
    hardComands["\\directlua"] = {""};
    hardComands["\\ds"] = {""};
    hardComands["\\ends"] = {"document"};
    hardComands["\\expandafter"] = {""};
    hardComands["\\fontfamily"] = {"phv","ptm",""};
    hardComands["\\fontseries"] = {"b"};
    hardComands["\\fontshape"] = {"sl"};
    hardComands["\\"] = {""};
    hardComands["\\fontsize"] = {"12"};
    hardComands["\\hbox"] = {""};
    //hardComands["\\hologo"] = {"eTeX",""};
    hardComands["\\ip"] = {"A"};
    hardComands["\\k"];
    hardComands["\\lablst"] = {"toc"};
    hardComands["\\mathbf"] = {"math","vec",""};
    hardComands["\\mathcal"] = {"math"};
    hardComands["\\mathit"] = {"math"};
    hardComands["\\mathnormal"] = {"math"};
    hardComands["\\mathrm"] = {"math"};
    hardComands["\\mathsf"] = {"math","max"};
    hardComands["\\mathtt"] = {"math"};
    hardComands["\\mathversion"] = {"bold","version"};
    hardComands["\\multicolumn"];
    hardComands["\\newlabel"] = {""};
    hardComands["\\par"];
    hardComands["\\reasonsection"] = {""};
    hardComands["\\renewcommand"] = {"","oddfoot"};
    hardComands["\\setlength"] = {""};
    hardComands["\\sum"] = {"i"};
    hardComands["\\textcommaabove"];
    hardComands["\\textcommabelow"];
    hardComands["\\typeout"] = {""};
    hardComands["\\"] = {""};
    hardComands["\\"] = {""};
    hardComands["\\"] = {""};





    
    yyparse();
    return 0;
}
