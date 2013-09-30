%% This is openetcs.cls
%% A LaTeX class based on:

%% LaTeX Style For Technical Information Reports of the
%%	       Engineer Research and Development Center
%%		      US Army Corps of Engineers
%%			   2009/07/22 v1.1
%% Copyright 2008, Boris Veytsman
%% This work may be distributed and/or modified under the
%% conditions of the LaTeX Project Public License, either
%% version 1.3 of this license or (at your option) any 
%% later version.

%% For openETCS ITEA2 Project (To Do: Verify consistency with cc-by-sa
%% 3.0)


%%
%% This is based on file `erdc.cls',
%% generated with the docstrip utility.
%%
%% The original source files were:
%%
%% erdc.dtx  (with options: `class')
%% 
%% IMPORTANT NOTICE:
%% 
%% For the copyright see the source file.
%% 
%% Any modified versions of this file must be renamed
%% with new filenames distinct from erdc.cls.
%% 
%% For distribution of the original source see the terms
%% for copying and modification in the file erdc.dtx.
%% 
%% This generated file may be distributed as long as the
%% original source files, as listed above, are part of the
%% same distribution. (The sources need not necessarily be
%% in the same archive or directory.)
%% \CharacterTable
%%  {Upper-case    \A\B\C\D\E\F\G\H\I\J\K\L\M\N\O\P\Q\R\S\T\U\V\W\X\Y\Z
%%   Lower-case    \a\b\c\d\e\f\g\h\i\j\k\l\m\n\o\p\q\r\s\t\u\v\w\x\y\z
%%   Digits        \0\1\2\3\4\5\6\7\8\9
%%   Exclamation   \!     Double quote  \"     Hash (number) \#
%%   Dollar        \$     Percent       \%     Ampersand     \&
%%   Acute accent  \'     Left paren    \(     Right paren   \)
%%   Asterisk      \*     Plus          \+     Comma         \,
%%   Minus         \-     Point         \.     Solidus       \/
%%   Colon         \:     Semicolon     \;     Less than     \<
%%   Equals        \=     Greater than  \>     Question mark \?
%%   Commercial at \@     Left bracket  \[     Backslash     \\
%%   Right bracket \]     Circumflex    \^     Underscore    \_
%%   Grave accent  \`     Left brace    \{     Vertical bar  \|
%%   Right brace   \}     Tilde         \~}
\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{openetcs}
[2012/08/03 v0.1 Typesetting Technical Information Reports of
openETCS project based on ERDC class v1.1]
% \long\def\erdc@size@warning#1{%
%   \ClassWarning{erdc}{Size-changing option #1 will not be
%     honored}}%
% \DeclareOption{8pt}{\erdc@size@warning{\CurrentOption}}%
% \DeclareOption{9pt}{\erdc@size@warning{\CurrentOption}}%
% \DeclareOption{10pt}{\erdc@size@warning{\CurrentOption}}%
% \DeclareOption{11pt}{\erdc@size@warning{\CurrentOption}}%
% \DeclareOption{12pt}{\erdc@size@warning{\CurrentOption}}%
\DeclareOption*{\PassOptionsToClass{\CurrentOption}{report}}
\ProcessOptions\relax
\LoadClass[11pt,twoside]{report}
\RequirePackage{graphicx,color,caption,longtable}
\RequirePackage{dcolumn}
\RequirePackage{natbib}
\renewcommand{\bibfont}{\fontsize{10pt}{12pt}\selectfont}
\setlength{\bibhang}{0.5in}
\setlength{\bibsep}{12pt}
\RequirePackage{amsmath}
%\RequirePackage[originalcommands]{ragged2e}
%\setlength\RaggedRightParindent{\parindent}
%\RaggedRight
\RequirePackage{microtype}
%\renewcommand\normalsize{%
%   \@setfontsize\normalsize\@xiipt{16}%
%   \abovedisplayskip 16\p@ \@plus3\p@ \@minus7\p@
%   \abovedisplayshortskip \z@ \@plus3\p@
%   \belowdisplayshortskip 6.5\p@ \@plus3.5\p@ \@minus3\p@
%   \belowdisplayskip \abovedisplayskip
%   \let\@listi\@listI}
\normalsize

% Original fonts (à tester sur miktex)
%\usepackage{mathgifg}
%\usepackage{courier}

% PdfLaTeX Choix 1 "times Helvet et math" http://www.cuk.ch/articles/4237
\usepackage[T1]{fontenc}
\usepackage{txfonts}

% PdfLaTeX Choix 2 http://www.cuk.ch/articles/4237
% \usepackage{fourier}
% \usepackage[scaled=0.875]{helvet}
% \usepackage{courier}

% XeLaTeX
%\usepackage{fontspec}
%\usepackage{xltxtra}
%\defaultfontfeatures{Mapping=tex-text}
%\setmainfont{Georgia}
%\setmathrm{Georgia}
%\setsansfont{Verdana}
%\setmathsf{Verdana}
%\setmonofont{Courier New}

\def\@projectfont{%
  \sffamily\itshape\bfseries\fontsize{22pt}{25pt}\selectfont}
\def\@reportnumfont{%
  \sffamily\bfseries\fontsize{18pt}{22pt}\selectfont}
\def\@wpfont{%
  \sffamily\fontseries{k}\itshape\normalsize\selectfont}
\def\@titlefont{%
  \sffamily\fontseries{h}\fontsize{20pt}{25pt}\selectfont}
\def\@distributionfont{%
  \sffamily\fontseries{k}\fontsize{9pt}{11pt}\selectfont}
\def\@eqtagfont{\sffamily\bfseries\footnotesize}
\RequirePackage[a4paper, top=1in, bottom=0.7in,
  left=1.25in, right=1.25in]{geometry}
\setlength{\parindent}{0pt}
\setlength{\parskip}{\baselineskip}
\setlength\labelwidth{1em}
\setlength\leftmargini\z@
\addtolength\leftmargini\labelwidth
\addtolength\leftmargini\labelsep
\def\itemize{%
  \ifnum \@itemdepth >\thr@@\@toodeep\else
    \advance\@itemdepth\@ne
    \edef\@itemitem{labelitem\romannumeral\the\@itemdepth}%
    \expandafter
    \list
    \csname\@itemitem\endcsname
      {\def\makelabel##1{##1}}%
  \fi}
\def\enumerate{%
  \ifnum \@enumdepth >\thr@@\@toodeep\else
    \advance\@enumdepth\@ne
    \edef\@enumctr{enum\romannumeral\the\@enumdepth}%
      \expandafter
      \list
        \csname label\@enumctr\endcsname
        {\usecounter\@enumctr\def\makelabel##1{##1}}%
      \fi}
\widowpenalty=10000
\clubpenalty=10000
\raggedbottom
\RequirePackage{fancyhdr}
\renewcommand{\headrulewidth}{0.5pt}
\renewcommand{\footrulewidth}{0pt}
\fancyhfoffset{35pt}
\pagestyle{fancy}
\lhead{\textsf{\textbf{\footnotesize\@reportnum}}}
\rhead{\textsf{\textbf{\footnotesize\thepage}}}
\chead{}
\lfoot{}
\cfoot{\color{blue}\textsf{\textbf{\textit{openETCS}}}\color{black} - \includegraphics[width=3em]{ccbysa.png}}
\rfoot{}
\newif\if@frontmatter
\@frontmatterfalse
\newif\if@appendix
\@appendixfalse
\def\frontmatter{%
  \pagenumbering{roman}%
  \@frontmattertrue
  \@appendixfalse}
\def\mainmatter{%
  \cleardoublepage
  \pagenumbering{arabic}%
  \@frontmatterfalse
  \@appendixfalse}
\def\appendix{%
  \clearpage
  \@frontmatterfalse
  \@appendixtrue
  \@addtoreset{table}{chapter}%
  \@addtoreset{equation}{chapter}%
  \@addtoreset{figure}{chapter}%
  \setcounter{chapter}{0}%
  \setcounter{section}{0}%
  \gdef\@chapapp{\appendixname}%
  \gdef\thechapter{\@Alph\c@chapter}%
  \gdef\thefigure{\@Alph\c@chapter\@arabic\c@figure}%
  \gdef\thetable{\@Alph\c@chapter\@arabic\c@table}%
  \gdef\theequation{\@Alph\c@chapter\@arabic\c@equation}}
\def\project#1{\gdef\@project{#1}}
\project{openETCS}
\def\reportnum#1{\gdef\@reportnum{#1}}
\reportnum{OETCS TK-01-01}
\def\wp#1{\gdef\@wp{#1}}
\wp{}
\newcommand{\subtitle}[1]{\gdef\@subtitle{#1}}
\def\@subtitle{}
\newcommand{\xandlist}[4]{\@andlista{{#1}{#2}{#3}}#4\and\and}
\def\@andlista#1#2\and#3\and{\@andlistc{#2}\@ifnotempty{#3}{%
  \@andlistb#1{#3}}}
\def\@andlistb#1#2#3#4#5\and{%
  \@ifempty{#5}{%
    \@andlistc{#2#4}%
  }{%
    \@andlistc{#1#4}\@andlistb{#1}{#3}{#3}{#5}%
  }}
\let\@andlistc\@iden
\newcommand{\nxandlist}[4]{%
  \def\@andlistc##1{\toks@\@xp{\the\toks@##1}}%
  \toks@{\toks@\@emptytoks \@andlista{{#1}{#2}{#3}}}%
  \the\@xp\toks@#4\and\and
  \edef#4{\the\toks@}%
  \let\@andlistc\@iden}
\def\@@and{and}
\newcommand{\andify}{%
  \nxandlist{\unskip, }{\unskip{} \@@and~}{\unskip, \@@and~}}
\def\and{\unskip{ }\@@and{ }\ignorespaces}
\let\@xp\expandafter\relax
\let\@nx=\noexpand
\def\@oparg#1[#2]{\@ifnextchar[{#1}{#1[#2]}}
\long\def\@ifempty#1{\@xifempty#1@@..\@nil}
\long\def\@xifempty#1#2@#3#4#5\@nil{%
  \ifx#3#4\@xp\@firstoftwo\else\@xp\@secondoftwo\fi}
\long\def\@ifnotempty#1{\@ifempty{#1}{}}
\def\setboxz@h{\setbox\z@\hbox}
\def\@addpunct#1{%
  \relax\ifhmode
    \ifnum\spacefactor>\@m \else#1\fi
  \fi}
\newtoks\@emptytoks
\def\authors{}
\def\addresses{}
\def\author#1{%
  \ifx\@empty\authors\gdef\authors{#1}\else
  \g@addto@macro{\authors}{\and#1}\fi
  \ifx\@empty\@addresses\gdef\addresses{\author{#1}}\else
  \g@addto@macro{\addresses}{\par\author{#1}}\fi}
\def\affiliation#1{%
  \ifx\@empty\@addresses\gdef\addresses{#1\par}\else
  \g@addto@macro{\addresses}{#1\par\vspace{\baselineskip}}\fi}
\def\today{\ifcase\month\or
  January\or February\or March\or April\or May\or June\or
  July\or August\or September\or October\or November\or December\fi
  \space \number\year}
\newcommand{\coverart}[2][]{%
  \def\@tempa{#1}%
  \ifx\@empty\@tempa
     \gdef\@coverart{\centering\includegraphics[width=435\p@]{#2}}\else
     \gdef\@coverart{\centering\includegraphics[#1]{#2}}\fi}
\def\@coverart{}%
\def\reporttype#1{\gdef\@reporttype{#1}}
\reporttype{}
\def\distribution#1{\gdef\@distribution{#1}}
\distribution{This work is licensed under a Creative Commons
  Attribution-ShareAlike 3.0 Unported License.\\ \includegraphics[width=40pt]{ccbysabig.png}}
\def\preparedfor#1{\gdef\@preparedfor{#1}}
\preparedfor{ITEA2 openETCS consortium\\ Europa}
\def\contractnum#1{\gdef\@contractnum{#1}}
\contractnum{}
\def\monitoredby#1{\gdef\@monitoredby{#1}}
\monitoredby{}
\def\additionalinfo#1{\gdef\@additionalinfo{#1}}
\additionalinfo{}
\newbox\abstractbox
\renewenvironment{abstract}{%
  \global\setbox\abstractbox=\vtop \bgroup
    \normalfont
    \list{}{\labelwidth\z@
      \leftmargin\z@ \rightmargin\leftmargin
      \listparindent\z@ \itemindent\z@
      \parsep16\p@ \topsep\z@
      \let\fullwidthdisplay\relax
    }%
    \item[\hskip\labelsep\bfseries Abstract:]% 
}{% 
 \endlist\egroup}
      \long\def\disclaimer#1{\long\gdef\@disclaimer{#1}}
      \disclaimer{
\textbf{This work is licensed under a Creative Commons
  Attribution-ShareAlike 3.0 -- (cc by-sa 3.0)}

THE WORK IS PROVIDED UNDER THE TERMS OF THIS CREATIVE COMMONS PUBLIC
LICENSE ("CCPL" OR "LICENSE"). THE WORK IS PROTECTED BY COPYRIGHT
AND/OR OTHER APPLICABLE LAW. ANY USE OF THE WORK OTHER THAN AS
AUTHORIZED UNDER THIS LICENSE OR COPYRIGHT LAW IS PROHIBITED.

BY EXERCISING ANY RIGHTS TO THE WORK PROVIDED HERE, YOU ACCEPT AND
AGREE TO BE BOUND BY THE TERMS OF THIS LICENSE. TO THE EXTENT THIS
LICENSE MAY BE CONSIDERED TO BE A CONTRACT, THE LICENSOR GRANTS YOU
THE RIGHTS CONTAINED HERE IN CONSIDERATION OF YOUR ACCEPTANCE OF SUCH
TERMS AND CONDITIONS.

\url{http://creativecommons.org/licenses/by-sa/3.0/}
}
\newenvironment{@coverlist}{\begin{list}{}{%
      \leftmargin40\p@\rightmargin-85\p@%
      \topsep\z@\partopsep\z@\labelwidth\z@\labelsep\z@}\item{}}{%
    \end{list}}
\newenvironment{@titlelist}{\begin{list}{}{%
      \leftmargin-20\p@\rightmargin100\p@%
      \topsep\z@\partopsep\z@\labelwidth\z@\labelsep\z@}\item{}}{%
    \end{list}}
\newif\if@titleblock
\newenvironment{@titleblock}{%
  \list{}{\labelwidth80\p@\labelsep10\p@ \leftmargin70\p@
    \rightmargin-150\p@
    \let\makelabel\@titleblocklabel}}{\endlist}
\newcommand*{\@titleblocklabel}[1]{\hfill\small#1}
\def\maketitle{%
  \thispagestyle{empty}%
  \enlargethispage{0.34in}%
  \vspace*{-0.95in}
     \makebox[0cm][r]{%
       \raisebox{-780\p@}[\z@][\z@]{%
         \rotatebox{90}{\makebox[\z@][l]{%
             \colorbox{blue}{\color{white}\parbox{780\p@}{%
                 \rule{0\p@}{85\p@}%
                 \hspace{28\p@}\raisebox{40\p@}{%
                   \parbox[c]{350\p@}{\@projectfont\@project}%
                   \hspace{10\p@}%
                   \parbox[c]{300\p@}{\hfill\@reportnumfont\@reportnum}}}}}}}%
     \hspace*{-14\p@}}%
%     \makebox[0cm][r]{\raisebox{-720\p@}[\z@][\z@]{\rule{8\p@}{726\p@}%
%       \hspace{-26.75\p@}}}%
   \begin{@coverlist}%
     \sffamily\fontseries{k}\selectfont%
     \hfill\parbox{145\p@}{\centering
       \includegraphics[width=145\p@]{itea}\\
       {\bfseries
         ITEA2 Project\\2012 -- 2015}}\\
       \par
     \vspace{0.5cm}%
     {\@wpfont\@wp\par}%
     \vspace{0.3cm}%
     {\raggedright\@titlefont\@title\par
       \vspace{0.3cm}%
       \normalsize\bfseries\@subtitle\par}%
     \vspace{0.3cm}%
     \begin{minipage}[t]{300\p@}\raggedright
       \nxandlist{\unskip, }{\unskip{} \@@and~}{\unskip{} \@@and~}\authors
       \authors\end{minipage}%
     \begin{minipage}[t]{135\p@}\flushright\@date\end{minipage}\par
     \vspace{2cm}%
     \@coverart
   \end{@coverlist}%
   \vfill
   \begin{@coverlist}%
     \@distributionfont\@distribution
   \end{@coverlist}%
   \newpage\thispagestyle{empty}\hbox{}\newpage
  \thispagestyle{empty}%
  \setcounter{page}{1}%
  \vspace*{-1.5in}%
  \vspace*{-\topmargin}%
  \begin{@titlelist}%
    \sffamily\fontseries{k}\selectfont
    \begin{minipage}[t]{275\p@}%
      \bfseries\@wp
    \end{minipage}%
    \begin{minipage}[t]{175\p@}%
      \bfseries\flushright\@reportnum\\\@date
    \end{minipage}\rule[-0.5in]{\z@}{0.625in}\par
    \begin{minipage}{\textwidth}
      \vspace*{1cm}%
      {\@titlefont\raggedright\@title\par}
      \vspace*{3\p@}%
      \bfseries\@subtitle\par
  \end{minipage}\rule[-0.7in]{\z@}{1in}\par
     \def\author##1{%
       \def\@tempa{##1}%
       \nxandlist{\unskip, }{\unskip{} \@@and~}{\unskip{} \@@and~}\@tempa
       {\upshape\normalsize\@tempa}\par\vspace{6\p@}}%
     \begin{minipage}{\textwidth}
     \textit{\footnotesize\addresses}\par
   \end{minipage}\rule[-2.7in]{\z@}{3.7in}\par
   \begin{minipage}{\textwidth}
     \@reporttype\par\vspace*{3\p@}%
     {\@distributionfont\@distribution\par}%
   \end{minipage}
 \end{@titlelist}%
  \vfill
  \begin{@titlelist}%
    \sffamily\normalsize\fontseries{k}\selectfont
    \ifx\@additionalinfo\@empty\else\@additionalinfo\par\fi
    \@titleblockfalse
    \ifx\@empty\@preparedfor\relax\else\@titleblocktrue\fi
    \ifx\@empty\@contractnum\relax\else\@titleblocktrue\fi
    \ifx\@empty\@monitoredby\relax\else\@titleblocktrue\fi
    \if@titleblock
       \begin{@titleblock}%
             \ifx\@empty\@preparedfor\else
                \item[Prepared for]\@preparedfor
             \fi
             \ifx\@empty\@contractnum\else
                \item[Under]\@contractnum
             \fi
             \ifx\@empty\@monitoredby\else
                \item[Monitored by]\@monitoredby
             \fi
       \end{@titleblock}
    \fi
  \end{@titlelist}%
  \clearpage
  \ifvoid\abstractbox
  \else
    \box\abstractbox
    \prevdepth\z@
  \fi
  \vfill
  \bgroup
  \setlength{\fboxsep}{5\p@}%
  \makebox[\textwidth]{\fbox{\parbox{6.5in}{%
        \fontsize{8.5\p@}{9.5\p@}\selectfont
        \parskip\baselineskip
        \textbf{Disclaimer:} \@disclaimer}}}%
  \egroup
  \clearpage}
\def\cl@chapter{}
\@addtoreset{section}{chapter}%
\@addtoreset{subsection}{chapter}%
\@addtoreset{subsection}{section}%
\renewcommand\chapter{%
  \clearpage
  \global\@topnum\z@
  \@afterindentfalse
  \secdef\@chapter\@schapter}
\def\@chapter[#1]#2{%
  \if@frontmatter
      \addcontentsline{toc}{chapter}{#1}%
      \@makechapterhead{#2}%
  \else
      \refstepcounter{chapter}%
      \typeout{\@chapapp\space\thechapter.}%
      \if@appendix
         \addcontentsline{toc}{chapter}%
             {\@chapapp\space\thechapter: #1}%
         \@makechapterhead{\@chapapp\space\thechapter: #2}%
      \else
         \addcontentsline{toc}{chapter}%
             {\protect\numberline{\thechapter}#1}%
         \@makechapterhead{\makebox[35\p@]{\thechapter\hfill}#2}%
      \fi
  \fi
  \@afterheading}
\def\@schapter#1{%
  \if@appendix
     \addcontentsline{toc}{chapter}{\@chapapp: #1}%
     \@makeschapterhead{\@chapapp: #1}%
  \else
    \addcontentsline{toc}{chapter}{#1}%
    \@makeschapterhead{#1}%
  \fi
  \@afterheading}
\def\@makechapterhead#1{%
  \vspace*{5\p@}%
  {\hskip-35\p@%
      \parindent\z@\raggedright
      \interlinepenalty\@M
      \@titlefont #1\par\nobreak
    \vspace*{10\p@}%
  }}
\def\@makeschapterhead#1{%
  \vspace*{5\p@}%
  {%
      \parindent\z@\raggedright
      \interlinepenalty\@M
      \leftskip-35\p@\@titlefont #1\par\nobreak
    \vspace*{10\p@}%
  }}
\renewcommand \theequation {\@arabic\c@equation}
\setcounter{tocdepth}{2}
\renewcommand\section{%
  \addpenalty\@secpenalty\nobreak
  \secdef\@section\@ssection}
\def\@section[#1]#2{%
  \ifnum1>\c@secnumdepth
     \addcontentsline{toc}{section}{#1}%
  \else
    \refstepcounter{section}%
     \addcontentsline{toc}{section}{\protect\numberline{\thesection}#1}%
  \fi
  {\hskip-35\p@\raggedright\interlinepenalty\@M
   \large\sffamily\bfseries
     \ifnum1>\c@secnumdepth\else\makebox[35\p@]{\thesection\hfill}\fi#2\nobreak\par}
   \@afterheading
   \nobreak\par}
\def\@ssection#1{
  \addcontentsline{toc}{section}{#1}%
  {\raggedright\interlinepenalty\@M
   \large\sffamily\bfseries\leftskip-35\p@#1\nobreak\par}
   \@afterheading
   \nobreak\par}
\renewcommand\subsection{\par
  \addpenalty\@secpenalty\nobreak
  \secdef\@subsection\@ssubsection}
\def\@subsection[#1]#2{%
  \ifnum2>\c@secnumdepth
     \addcontentsline{toc}{subsection}{\itshape#1}%
  \else
    \refstepcounter{subsection}%
    \addcontentsline{toc}{subsection}{\itshape\fontsize{9}{12}\selectfont
      \protect\numberline{\thesubsection}%
      #1}%
  \fi
  {\noindent\raggedright\interlinepenalty\@M
   \normalsize\sffamily\bfseries
   \ifnum2>\c@secnumdepth\else\thesubsection\hspace{1em}\fi#2}\nobreak\par}
\def\@ssubsection#1{%
  \addcontentsline{toc}{subsection}{\itshape\fontsize{9}{12}\selectfont#1}%
  {\noindent\raggedright\interlinepenalty\@M
   \normalsize\sffamily\bfseries#1}\nobreak\par}
\def\specialchapter#1{%
  \clearpage
  \global\@topnum\z@
  \@afterindentfalse
  \@makeschapterhead{#1}\par
  \@afterheading}
\def\@dotsep{0.5}
\renewcommand\l@chapter[2]{%
  \def\numberline##1{\makebox[1.9em]{##1\hfill}}%
  \addpenalty{-\@highpenalty}%
  \vskip5\p@
  \bgroup
    \parindent\z@\rightskip\@pnumwidth
    \parfillskip-\@pnumwidth
    \leavevmode\bfseries
    \leftskip1.9em%
    \hskip-\leftskip
    #1\nobreak\leaders\hbox{$\m@th\mkern\@dotsep
      mu\hbox{.}\mkern\@dotsep
      mu$}\hfill\nobreak{\hfil\,#2}\par
    \vskip5\p@
      \penalty\@highpenalty
  \egroup}
\def\@dottedtocline#1#2#3#4#5{%
  \bgroup
  \def\numberline##1{\makebox[#3]{##1\hfill}}%
  \ifnum #1>\c@tocdepth \else
    \vskip \z@ \@plus.2\p@
    {\leftskip #2\relax \rightskip \@tocrmarg \parfillskip -\rightskip
     \parindent #2\relax\@afterindenttrue
     \interlinepenalty\@M
     \leavevmode
     \@tempdima #3\relax
     \advance\leftskip \@tempdima \null\nobreak\hskip -\leftskip
     #4\nobreak
     \leaders\hbox{$\m@th
        \mkern \@dotsep mu\hbox{.}\mkern \@dotsep
        mu$}\hfill
     \nobreak
     {\hfil \normalcolor \,#5}%
     \par}%
  \fi
  \egroup}
\def\@dottedtoclineLF#1#2#3#4#5{%
  \bgroup
  \ifnum #1>\c@tocdepth \else
    \vskip \z@ \@plus.2\p@
    {\leftskip #2\relax \rightskip \@tocrmarg \parfillskip -\rightskip
     \parindent #2\relax\@afterindenttrue
     \interlinepenalty\@M
     \leavevmode
     \@tempdima #2\relax
     \advance\leftskip \@tempdima \null\nobreak\hskip -\@tempdima
     #4\nobreak
     \leaders\hbox{$\m@th
        \mkern \@dotsep mu\hbox{.}\mkern \@dotsep
        mu$}\hfill
     \nobreak
     {\hfil \normalcolor \,#5}%
     \par}%
  \fi
  \egroup}
\renewcommand*\l@section{\@dottedtocline{1}{2em}{2.5em}}
\renewcommand*\l@subsection{\@dottedtocline{2}{4.7em}{3em}}
\renewcommand*\l@figure{\@dottedtoclineLF{1}{0em}{2.3em}}
\let\l@table\l@figure
\renewcommand\contentsname{Table of Contents}
\renewcommand\tableofcontents{%
  \specialchapter{\contentsname}%
  \def\numberline##1{\hb@xt@\@pnumwidth{##1\hfill}}%
  {\parskip2.5\p@\footnotesize\sffamily\fontseries{k}\selectfont\raggedright
    \@starttoc{toc}}}
\renewcommand\listoffigures{%
  \chapter{\listfigurename}%
  \def\numberline##1{Figure ##1. }%
  {\parskip2.5\p@\footnotesize\sffamily\fontseries{k}\selectfont\raggedright
    \@starttoc{lof}}}
\renewcommand\listoftables{%
  \chapter{\listtablename}%
  \def\numberline##1{Table ##1. }%
  {\parskip2.5\p@\footnotesize\sffamily\fontseries{k}\selectfont\raggedright
    \@starttoc{lot}}}
\def\listfiguretablename{Figures and Tables}
\newcommand\listoffiguresandtables{%
  \chapter{\listfiguretablename}
  {\sffamily\bfseries\normalsize Figures\par}%
  \vspace*{10pt}%
  \def\numberline##1{Figure ##1. }%
  {\parskip2.5\p@\footnotesize\sffamily\fontseries{k}\selectfont\raggedright
    \@starttoc{lof}}%
  {\sffamily\bfseries\normalsize Tables\par}%
  \vspace*{10pt}%
  \def\numberline##1{Table ##1. }%
  {\parskip2.5\p@\footnotesize\sffamily\fontseries{k}\selectfont\raggedright
    \@starttoc{lot}}}
\renewcommand\bibname{References}
\setlength{\@fptop}{0pt}%
\renewcommand \thefigure {\@arabic\c@figure}
\renewcommand \thetable {\@arabic\c@table}
\captionsetup{justification=centering,font={footnotesize,rm,bf},
labelsep=period,aboveskip=3pt}
\captionsetup[table]{position=top}
\def\arraystretch{1.3}
\let\maketag@@@@\maketag@@@
\def\maketag@@@#1{\hbox{\m@th\@eqtagfont#1}}
\renewcommand{\eqref}[1]{\textup{\tagform@@{\ref{#1}}}}
\def\tagform@@#1{\maketag@@@@{(\ignorespaces#1\unskip\@@italiccorr)}}
\endinput
%%
%% End of file `erdc.cls'.
