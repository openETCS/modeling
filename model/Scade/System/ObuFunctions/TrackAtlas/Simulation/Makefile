#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\.

SHELL=cmd.exe

C_FLAGS = -pedantic

all: digital__FlipFlopSet.exe digital__FlipFlopSet.dll 

win32/FlipFlopSet_digital.o: FlipFlopSet_digital.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "FlipFlopSet_digital.c" -o "win32\FlipFlopSet_digital.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_consts.c" -o "win32\kcg_consts.o"

win32/TrackAtlas_newtype.o: TrackAtlas_newtype.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackAtlas_newtype.c" -o "win32\TrackAtlas_newtype.o"

win32/TrackAtlas_newmapping.o: TrackAtlas_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackAtlas_newmapping.c" -o "win32\TrackAtlas_newmapping.o"

win32/TrackAtlas_newinterface.o: TrackAtlas_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackAtlas_newinterface.c" -o "win32\TrackAtlas_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

digital__FlipFlopSet.dll: win32/FlipFlopSet_digital.o win32/kcg_types.o win32/kcg_consts.o win32/TrackAtlas_newtype.o win32/TrackAtlas_newmapping.o win32/TrackAtlas_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	gcc -mwindows -mwin32 -shared -static-libgcc  "win32\FlipFlopSet_digital.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\TrackAtlas_newtype.o" "win32\TrackAtlas_newmapping.o" "win32\TrackAtlas_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o" -Wl,--output-def,"SmuExport.def" -lm -lwsock32 -m32 -o "digital__FlipFlopSet.dll" 

SmuExport.def: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuExport.def
	copy "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/FlipFlopSet_digital_dll.o: FlipFlopSet_digital_dll.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "FlipFlopSet_digital_dll.c" -o "win32\FlipFlopSet_digital_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

digital__FlipFlopSet.exe: win32/FlipFlopSet_digital_dll.o win32/SmuMainWindows.o 
	gcc "win32\FlipFlopSet_digital_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -m32 -o "digital__FlipFlopSet.exe" 

#############################################################
######    End of Makefile
#############################################################
