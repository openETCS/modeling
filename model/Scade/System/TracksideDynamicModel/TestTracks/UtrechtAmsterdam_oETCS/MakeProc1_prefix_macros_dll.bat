@SET SCADEINSTALL=C:\Program Files\Esterel Technologies\SCADE R15.2
@SET SCADEBINDIR=%SCADEINSTALL%\SCADE\bin
@SET PATH=%SCADEINSTALL%\contrib\Msys\mingw\bin;%PATH%
@SET INCLUDE=%SCADEINSTALL%\contrib\Msys\mingw\include
@SET LIB=%SCADEINSTALL%\contrib\Msys\mingw\lib
@IF "-B"=="%1" SET ARG=%1

@SET BUILDDIR=TrackSim_imp_dll_include
@SET CONF=TrackSim_imp_dll
@mkdir %BUILDDIR%

echo "Generate the macro prefix header file to use for integration"
echo "  and simulation in the main project"
"%SCADEBINDIR%\scade" -script DePrefixRoot.tcl -project UtrechtAmsterdam_oETCS.etp "Main Amsterdam_Utrecht_Lijn1_balises_macros.h %BUILDDIR% %CONF%"