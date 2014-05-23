@SET PATH=C:/Program Files (x86)/Esterel Technologies/SCADE R15/SCADE/../contrib/Msys/mingw/bin;%PATH%
@SET INCLUDE=C:/Program Files (x86)/Esterel Technologies/SCADE R15/SCADE/../contrib/Msys/mingw/include
@SET LIB=C:/Program Files (x86)/Esterel Technologies/SCADE R15/SCADE/../contrib/Msys/mingw/lib
@IF "-B"=="%1" SET ARG=%1
@mingw32-make.exe %ARG%
