#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\.

SHELL=cmd.exe

C_FLAGS = -pedantic

all: TA_Export__MRSP_to_MRSP_to_DMI.exe TA_Export__MRSP_to_MRSP_to_DMI.dll 

win32/MRSP_to_MRSP_to_DMI_TA_Export.o: MRSP_to_MRSP_to_DMI_TA_Export.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_to_MRSP_to_DMI_TA_Export.c" -o "win32\MRSP_to_MRSP_to_DMI_TA_Export.o"

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

TA_Export__MRSP_to_MRSP_to_DMI.dll: win32/MRSP_to_MRSP_to_DMI_TA_Export.o win32/kcg_types.o win32/kcg_consts.o win32/TrackAtlas_newtype.o win32/TrackAtlas_newmapping.o win32/TrackAtlas_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	gcc -mwindows -mwin32 -shared -static-libgcc  "win32\MRSP_to_MRSP_to_DMI_TA_Export.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\TrackAtlas_newtype.o" "win32\TrackAtlas_newmapping.o" "win32\TrackAtlas_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o" -Wl,--output-def,"SmuExport.def" -lm -lwsock32 -m32 -o "TA_Export__MRSP_to_MRSP_to_DMI.dll" 

SmuExport.def: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuExport.def
	copy "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/MRSP_to_MRSP_to_DMI_TA_Export_dll.o: MRSP_to_MRSP_to_DMI_TA_Export_dll.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_to_MRSP_to_DMI_TA_Export_dll.c" -o "win32\MRSP_to_MRSP_to_DMI_TA_Export_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

TA_Export__MRSP_to_MRSP_to_DMI.exe: win32/MRSP_to_MRSP_to_DMI_TA_Export_dll.o win32/SmuMainWindows.o 
	gcc "win32\MRSP_to_MRSP_to_DMI_TA_Export_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -m32 -o "TA_Export__MRSP_to_MRSP_to_DMI.exe" 

#############################################################
######    End of Makefile
#############################################################
