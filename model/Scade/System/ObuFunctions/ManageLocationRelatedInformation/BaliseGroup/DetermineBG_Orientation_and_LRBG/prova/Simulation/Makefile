#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\.

SHELL=cmd.exe

C_FLAGS = -O2 -pedantic

all: ciao.exe ciao.dll 

win32/ciao.o: ciao.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ciao.c" -o "win32\ciao.o"	
	ar -r ciao.a "win32\ciao.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"	
	ar -r ciao.a "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"	
	ar -r ciao.a "win32\kcg_consts.o"

win32/prova_newtype.o: prova_newtype.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "prova_newtype.c" -o "win32\prova_newtype.o"

win32/prova_newmapping.o: prova_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "prova_newmapping.c" -o "win32\prova_newmapping.o"

win32/prova_newinterface.o: prova_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "prova_newinterface.c" -o "win32\prova_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

ciao.dll: win32/ciao.o win32/kcg_types.o win32/kcg_consts.o win32/prova_newtype.o win32/prova_newmapping.o win32/prova_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	dllwrap --driver-name=gcc  "win32\prova_newtype.o" "win32\prova_newmapping.o" "win32\prova_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o" "ciao.a" --def "SmuExport.def" -lm -lwsock32 --dllname "ciao.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/ciao_dll.o: ciao_dll.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ciao_dll.c" -o "win32\ciao_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\include" -I"..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

ciao.exe: win32/ciao_dll.o win32/SmuMainWindows.o 
	gcc "win32\ciao_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "ciao.exe" 

#############################################################
######    End of Makefile
#############################################################
