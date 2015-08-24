@SET SCADEINSTALL=C:\Program Files (x86)\Esterel Technologies\SCADE R15.2
@SET PATH=%SCADEINSTALL%\contrib\Msys\mingw\bin;%PATH%
@SET INCLUDE=%SCADEINSTALL%\contrib\Msys\mingw\include
@SET LIB=%SCADEINSTALL%\contrib\Msys\mingw\lib
@IF "-B"=="%1" SET ARG=%1

@SET BUILDDIR=ManualCode
@SET CONF=KCG
@mkdir %BUILDDIR%

echo "Generate the macro prefix header file to use for integration"
echo "  and simulation in the main project"
scade -script DePrefixRoot.tcl -project Proc1.etp "Main Proc1_imp Proc1_prefix_macros.h %BUILDDIR% %CONF%"