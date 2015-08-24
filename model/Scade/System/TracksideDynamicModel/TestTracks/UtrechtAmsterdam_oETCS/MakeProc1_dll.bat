@SET SCADEINSTALL=C:\Program Files\Esterel Technologies\SCADE R15.2
@SET PATH=%SCADEINSTALL%\contrib\Msys\mingw\bin;%PATH%
@SET INCLUDE=%SCADEINSTALL%\contrib\Msys\mingw\include
@SET LIB=%SCADEINSTALL%\contrib\Msys\mingw\lib
@IF "-B"=="%1" SET ARG=%1


@SET BUILDDIR=UAB_imp
@SET CONF=TrackSim_imp_dll
@mkdir %BUILDDIR%

echo "Generate the TestEnvironmentSimulation DLL to use in the main project simulation"
dllwrap --def TrackSimulation.def -o "%BUILDDIR%\TrackSimulation.dll" %CONF%\win32\*.o
m