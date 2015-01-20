#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\.

SHELL=cmd.exe

LIB_MINGW = "C:/Program Files (x86)/Esterel Technologies/SCADE R15.1/contrib/Msys/mingw/lib"
LIB_MINGW_GCC = "C:/Program Files (x86)/Esterel Technologies/SCADE R15.1/contrib/Msys/mingw/lib/gcc/mingw32/3.4.5"

C_FLAGS = -O2 -pedantic

all: Test_DMI.exe Test_DMI.dll 

win32/Test_DMI.o: Test_DMI.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Test_DMI.c" -o "win32\Test_DMI.o"

win32/CalculateDistanceToTarget.o: CalculateDistanceToTarget.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "CalculateDistanceToTarget.c" -o "win32\CalculateDistanceToTarget.o"

win32/SpeedToDigit.o: SpeedToDigit.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "SpeedToDigit.c" -o "win32\SpeedToDigit.o"

win32/Train.o: Train.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Train.c" -o "win32\Train.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"

win32/Test_DMI_cosim.o: Test_DMI_cosim.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Test_DMI_cosim.c" -o "win32\Test_DMI_cosim.o"

win32/Test_newtype.o: Test_newtype.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Test_newtype.c" -o "win32\Test_newtype.o"

win32/Test_newmapping.o: Test_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Test_newmapping.c" -o "win32\Test_newmapping.o"

win32/Test_newinterface.o: Test_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Test_newinterface.c" -o "win32\Test_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.1/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.1/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.1/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

Test_DMI.dll: win32/Test_DMI.o win32/CalculateDistanceToTarget.o win32/SpeedToDigit.o win32/Train.o win32/kcg_types.o win32/kcg_consts.o win32/Test_DMI_cosim.o win32/Test_newtype.o win32/Test_newmapping.o win32/Test_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def SDY1_DMI.a SDY2_TestPanel.a 
	ld --shared -Bdynamic -e _DllMainCRTStartup@12 --enable-auto-image-base  $(LIB_MINGW)/dllcrt2.o $(LIB_MINGW_GCC)/crtbegin.o -L$(LIB_MINGW) -L$(LIB_MINGW_GCC) "win32\Test_DMI.o" "win32\CalculateDistanceToTarget.o" "win32\SpeedToDigit.o" "win32\Train.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\Test_DMI_cosim.o" "win32\Test_newtype.o" "win32\Test_newmapping.o" "win32\Test_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o" "SDY1_DMI.a" "SDY2_TestPanel.a"  "SmuExport.def" -lm -lwsock32 -lmingw32 -lgcc -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 $(LIB_MINGW_GCC)/crtend.o -o "Test_DMI.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.1/SCADE/lib/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/Test_DMI_dll.o: Test_DMI_dll.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Test_DMI_dll.c" -o "win32\Test_DMI_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.1/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.1\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

Test_DMI.exe: win32/Test_DMI_dll.o win32/SmuMainWindows.o 
	gcc "win32\Test_DMI_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "Test_DMI.exe" 

SDY1_DMI.a: SDY1_DMI.h


SDY2_TestPanel.a: SDY2_TestPanel.h


Test_DMI_cosim.c: SDY1_DMI.h


Test_DMI_cosim.c: SDY2_TestPanel.h


#############################################################
######    End of Makefile
#############################################################
