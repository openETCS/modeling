#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\.

SHELL=cmd.exe

LIB_MINGW = "C:/Program Files/Esterel Technologies/SCADE R15.2/contrib/Msys/mingw/lib"
LIB_MINGW_GCC = "C:/Program Files/Esterel Technologies/SCADE R15.2/contrib/Msys/mingw/lib/gcc/mingw32/3.4.5"

C_FLAGS = -O2 -pedantic

all: Decode_Packets__Decode_Packet_000.exe Decode_Packets__Decode_Packet_000.dll 

win32/Decode_Packet_000_Decode_Packets.o: Decode_Packet_000_Decode_Packets.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Decode_Packet_000_Decode_Packets.c" -o "win32\Decode_Packet_000_Decode_Packets.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"

win32/ETCS_Messaging_newtype.o: ETCS_Messaging_newtype.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ETCS_Messaging_newtype.c" -o "win32\ETCS_Messaging_newtype.o"

win32/ETCS_Messaging_newmapping.o: ETCS_Messaging_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ETCS_Messaging_newmapping.c" -o "win32\ETCS_Messaging_newmapping.o"

win32/ETCS_Messaging_newinterface.o: ETCS_Messaging_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ETCS_Messaging_newinterface.c" -o "win32\ETCS_Messaging_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

Decode_Packets__Decode_Packet_000.dll: win32/Decode_Packet_000_Decode_Packets.o win32/kcg_types.o win32/kcg_consts.o win32/ETCS_Messaging_newtype.o win32/ETCS_Messaging_newmapping.o win32/ETCS_Messaging_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	ld --shared -Bdynamic -e _DllMainCRTStartup@12 --enable-auto-image-base  $(LIB_MINGW)/dllcrt2.o $(LIB_MINGW_GCC)/crtbegin.o -L$(LIB_MINGW) -L$(LIB_MINGW_GCC) "win32\Decode_Packet_000_Decode_Packets.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\ETCS_Messaging_newtype.o" "win32\ETCS_Messaging_newmapping.o" "win32\ETCS_Messaging_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o"  "SmuExport.def" -lm -lwsock32 -lmingw32 -lgcc -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 $(LIB_MINGW_GCC)/crtend.o -o "Decode_Packets__Decode_Packet_000.dll" 

SmuExport.def: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuExport.def
	copy "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/Decode_Packet_000_Decode_Packets_dll.o: Decode_Packet_000_Decode_Packets_dll.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Decode_Packet_000_Decode_Packets_dll.c" -o "win32\Decode_Packet_000_Decode_Packets_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

Decode_Packets__Decode_Packet_000.exe: win32/Decode_Packet_000_Decode_Packets_dll.o win32/SmuMainWindows.o 
	gcc "win32\Decode_Packet_000_Decode_Packets_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "Decode_Packets__Decode_Packet_000.exe" 

#############################################################
######    End of Makefile
#############################################################
