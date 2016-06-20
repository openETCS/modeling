@SET PATH=C:/Program Files (x86)/Esterel Technologies/SCADE R16.2.1/SCADE/../contrib/Msys/mingw_w64/bin;C:/Program Files (x86)/Esterel Technologies/SCADE R16.2.1/SCADE/../contrib/Msys/bin;%PATH%
@SET INCLUDE=C:/Program Files (x86)/Esterel Technologies/SCADE R16.2.1/SCADE/../contrib/Msys/mingw_w64/include
@SET LIB=C:/Program Files (x86)/Esterel Technologies/SCADE R16.2.1/SCADE/../contrib/Msys/mingw_w64/lib
@SET ARG=%1
gcc -print-search-dirs
@"C:/Program Files (x86)/Esterel Technologies/SCADE R16.2.1/SCADE/../contrib/Msys/mingw_w64/bin/mingw32-make.exe" -f Makefile %ARG%
