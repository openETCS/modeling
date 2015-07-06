@SET PATH=C:/program files/esterel technologies/scade r16.1/scade/../contrib/Msys/mingw_w64/bin;%PATH%
@SET INCLUDE=C:/program files/esterel technologies/scade r16.1/scade/../contrib/Msys/mingw_w64/include
@SET LIB=C:/program files/esterel technologies/scade r16.1/scade/../contrib/Msys/mingw_w64/lib
@IF "-B"=="%1" SET ARG=%1
gcc -print-search-dirs
@"C:/program files/esterel technologies/scade r16.1/scade/../contrib/Msys/mingw_w64/bin/mingw32-make.exe" -f Makefile %ARG%
