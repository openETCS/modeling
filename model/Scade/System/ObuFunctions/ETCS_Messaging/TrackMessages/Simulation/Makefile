#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\.

SHELL=cmd.exe

LIB_MINGW = "C:/Program Files/Esterel Technologies/SCADE R15.2/contrib/Msys/mingw/lib"
LIB_MINGW_GCC = "C:/Program Files/Esterel Technologies/SCADE R15.2/contrib/Msys/mingw/lib/gcc/mingw32/3.4.5"

C_FLAGS = -O2 -pedantic

all: INFRA_Balise_Localisation.exe INFRA_Balise_Localisation.dll 

win32/INFRA_Balise_Localisation.o: INFRA_Balise_Localisation.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "INFRA_Balise_Localisation.c" -o "win32\INFRA_Balise_Localisation.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"

win32/TrackMessages_newtype.o: TrackMessages_newtype.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "TrackMessages_newtype.c" -o "win32\TrackMessages_newtype.o"

win32/TrackMessages_newmapping.o: TrackMessages_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "TrackMessages_newmapping.c" -o "win32\TrackMessages_newmapping.o"

win32/TrackMessages_newinterface.o: TrackMessages_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "TrackMessages_newinterface.c" -o "win32\TrackMessages_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

INFRA_Balise_Localisation.dll: win32/INFRA_Balise_Localisation.o win32/kcg_types.o win32/kcg_consts.o win32/TrackMessages_newtype.o win32/TrackMessages_newmapping.o win32/TrackMessages_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	ld --shared -Bdynamic -e _DllMainCRTStartup@12 --enable-auto-image-base  $(LIB_MINGW)/dllcrt2.o $(LIB_MINGW_GCC)/crtbegin.o -L$(LIB_MINGW) -L$(LIB_MINGW_GCC) "win32\INFRA_Balise_Localisation.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\TrackMessages_newtype.o" "win32\TrackMessages_newmapping.o" "win32\TrackMessages_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o"  "SmuExport.def" -lm -lwsock32 -lmingw32 -lgcc -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 $(LIB_MINGW_GCC)/crtend.o -o "INFRA_Balise_Localisation.dll" 

SmuExport.def: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuExport.def
	copy "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/INFRA_Balise_Localisation_dll.o: INFRA_Balise_Localisation_dll.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "INFRA_Balise_Localisation_dll.c" -o "win32\INFRA_Balise_Localisation_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"..\..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

INFRA_Balise_Localisation.exe: win32/INFRA_Balise_Localisation_dll.o win32/SmuMainWindows.o 
	gcc "win32\INFRA_Balise_Localisation_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "INFRA_Balise_Localisation.exe" 

#############################################################
######    End of Makefile
#############################################################
