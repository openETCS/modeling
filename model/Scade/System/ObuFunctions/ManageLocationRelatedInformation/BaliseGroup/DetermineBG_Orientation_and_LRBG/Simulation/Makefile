#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\.

SHELL=cmd.exe

C_FLAGS = -O2 -pedantic

all: DetermineBGOrientation_LRBG__Operator7.exe DetermineBGOrientation_LRBG__Operator7.dll 

win32/Operator7_DetermineBGOrientation_LRBG.o: Operator7_DetermineBGOrientation_LRBG.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Operator7_DetermineBGOrientation_LRBG.c" -o "win32\Operator7_DetermineBGOrientation_LRBG.o"	
	ar -r DetermineBGOrientation_LRBG__Operator7.a "win32\Operator7_DetermineBGOrientation_LRBG.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"	
	ar -r DetermineBGOrientation_LRBG__Operator7.a "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"	
	ar -r DetermineBGOrientation_LRBG__Operator7.a "win32\kcg_consts.o"

win32/libimpl.o: ../../../../../../../../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/libraries/libimpl/libimpl.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl\libimpl.c" -o "win32\libimpl.o"

win32/DetermineBG_Orientation_and_LRBG_newtype.o: DetermineBG_Orientation_and_LRBG_newtype.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "DetermineBG_Orientation_and_LRBG_newtype.c" -o "win32\DetermineBG_Orientation_and_LRBG_newtype.o"

win32/DetermineBG_Orientation_and_LRBG_newmapping.o: DetermineBG_Orientation_and_LRBG_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "DetermineBG_Orientation_and_LRBG_newmapping.c" -o "win32\DetermineBG_Orientation_and_LRBG_newmapping.o"

win32/DetermineBG_Orientation_and_LRBG_newinterface.o: DetermineBG_Orientation_and_LRBG_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "DetermineBG_Orientation_and_LRBG_newinterface.c" -o "win32\DetermineBG_Orientation_and_LRBG_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

DetermineBGOrientation_LRBG__Operator7.dll: win32/Operator7_DetermineBGOrientation_LRBG.o win32/kcg_types.o win32/kcg_consts.o win32/libimpl.o win32/DetermineBG_Orientation_and_LRBG_newtype.o win32/DetermineBG_Orientation_and_LRBG_newmapping.o win32/DetermineBG_Orientation_and_LRBG_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	dllwrap --driver-name=gcc  "win32\libimpl.o" "win32\DetermineBG_Orientation_and_LRBG_newtype.o" "win32\DetermineBG_Orientation_and_LRBG_newmapping.o" "win32\DetermineBG_Orientation_and_LRBG_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o" "DetermineBGOrientation_LRBG__Operator7.a" --def "SmuExport.def" -lm -lwsock32 --dllname "DetermineBGOrientation_LRBG__Operator7.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/Operator7_DetermineBGOrientation_LRBG_dll.o: Operator7_DetermineBGOrientation_LRBG_dll.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Operator7_DetermineBGOrientation_LRBG_dll.c" -o "win32\Operator7_DetermineBGOrientation_LRBG_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libimpl" -I"..\..\..\..\..\..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

DetermineBGOrientation_LRBG__Operator7.exe: win32/Operator7_DetermineBGOrientation_LRBG_dll.o win32/SmuMainWindows.o 
	gcc "win32\Operator7_DetermineBGOrientation_LRBG_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "DetermineBGOrientation_LRBG__Operator7.exe" 

#############################################################
######    End of Makefile
#############################################################
