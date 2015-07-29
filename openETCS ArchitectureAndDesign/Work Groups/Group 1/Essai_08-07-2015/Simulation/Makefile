#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\.

SHELL=cmd.exe

LIB_MINGW = "C:/Program Files (x86)/Esterel Technologies/SCADE R15.2/contrib/Msys/mingw/lib"
LIB_MINGW_GCC = "C:/Program Files (x86)/Esterel Technologies/SCADE R15.2/contrib/Msys/mingw/lib/gcc/mingw32/3.4.5"

C_FLAGS = -O2 -pedantic

all: Root.exe Root.dll 

win32/Root.o: Root.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Root.c" -o "win32\Root.o"

win32/Root_SDM.o: Root_SDM.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Root_SDM.c" -o "win32\Root_SDM.o"

win32/SBD_Operator.o: SBD_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "SBD_Operator.c" -o "win32\SBD_Operator.o"

win32/EBD_Operator.o: EBD_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "EBD_Operator.c" -o "win32\EBD_Operator.o"

win32/Step_Operator.o: Step_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Step_Operator.c" -o "win32\Step_Operator.o"

win32/ACCeler_Operator.o: ACCeler_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ACCeler_Operator.c" -o "win32\ACCeler_Operator.o"

win32/ComputeAcc.o: ComputeAcc.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ComputeAcc.c" -o "win32\ComputeAcc.o"

win32/ASB_Operator.o: ASB_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ASB_Operator.c" -o "win32\ASB_Operator.o"

win32/AEB_Operator.o: AEB_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "AEB_Operator.c" -o "win32\AEB_Operator.o"

win32/Spreader_Operator_8_8.o: Spreader_Operator_8_8.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Spreader_Operator_8_8.c" -o "win32\Spreader_Operator_8_8.o"

win32/ScanPositions_8_8.o: ScanPositions_8_8.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ScanPositions_8_8.c" -o "win32\ScanPositions_8_8.o"

win32/ScanSSP_8.o: ScanSSP_8.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ScanSSP_8.c" -o "win32\ScanSSP_8.o"

win32/Bool_Spreader_Operator_2.o: Bool_Spreader_Operator_2.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Bool_Spreader_Operator_2.c" -o "win32\Bool_Spreader_Operator_2.o"

win32/BooleanScanPositions_2.o: BooleanScanPositions_2.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "BooleanScanPositions_2.c" -o "win32\BooleanScanPositions_2.o"

win32/ScanAdh_2.o: ScanAdh_2.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ScanAdh_2.c" -o "win32\ScanAdh_2.o"

win32/MRSP_Operator.o: MRSP_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "MRSP_Operator.c" -o "win32\MRSP_Operator.o"

win32/dV_Operator.o: dV_Operator.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "dV_Operator.c" -o "win32\dV_Operator.o"

win32/Min3_math_real.o: Min3_math_real.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Min3_math_real.c" -o "win32\Min3_math_real.o"

win32/Spreader_Operator_2_2.o: Spreader_Operator_2_2.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Spreader_Operator_2_2.c" -o "win32\Spreader_Operator_2_2.o"

win32/ScanPositions_2_2.o: ScanPositions_2_2.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ScanPositions_2_2.c" -o "win32\ScanPositions_2_2.o"

win32/ScanSSP_2.o: ScanSSP_2.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ScanSSP_2.c" -o "win32\ScanSSP_2.o"

win32/Spreader_Operator_8_4.o: Spreader_Operator_8_4.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Spreader_Operator_8_4.c" -o "win32\Spreader_Operator_8_4.o"

win32/ScanPositions_8_4.o: ScanPositions_8_4.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ScanPositions_8_4.c" -o "win32\ScanPositions_8_4.o"

win32/ScanSSP_4.o: ScanSSP_4.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "ScanSSP_4.c" -o "win32\ScanSSP_4.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "kcg_consts.c" -o "win32\kcg_consts.o"

win32/Essai_newtype.o: Essai_newtype.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Essai_newtype.c" -o "win32\Essai_newtype.o"

win32/Essai_newmapping.o: Essai_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Essai_newmapping.c" -o "win32\Essai_newmapping.o"

win32/Essai_newinterface.o: Essai_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Essai_newinterface.c" -o "win32\Essai_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

Root.dll: win32/Root.o win32/Root_SDM.o win32/SBD_Operator.o win32/EBD_Operator.o win32/Step_Operator.o win32/ACCeler_Operator.o win32/ComputeAcc.o win32/ASB_Operator.o win32/AEB_Operator.o win32/Spreader_Operator_8_8.o win32/ScanPositions_8_8.o win32/ScanSSP_8.o win32/Bool_Spreader_Operator_2.o win32/BooleanScanPositions_2.o win32/ScanAdh_2.o win32/MRSP_Operator.o win32/dV_Operator.o win32/Min3_math_real.o win32/Spreader_Operator_2_2.o win32/ScanPositions_2_2.o win32/ScanSSP_2.o win32/Spreader_Operator_8_4.o win32/ScanPositions_8_4.o win32/ScanSSP_4.o win32/kcg_types.o win32/kcg_consts.o win32/Essai_newtype.o win32/Essai_newmapping.o win32/Essai_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	ld --shared -Bdynamic -e _DllMainCRTStartup@12 --enable-auto-image-base  $(LIB_MINGW)/dllcrt2.o $(LIB_MINGW_GCC)/crtbegin.o -L$(LIB_MINGW) -L$(LIB_MINGW_GCC) "win32\Root.o" "win32\Root_SDM.o" "win32\SBD_Operator.o" "win32\EBD_Operator.o" "win32\Step_Operator.o" "win32\ACCeler_Operator.o" "win32\ComputeAcc.o" "win32\ASB_Operator.o" "win32\AEB_Operator.o" "win32\Spreader_Operator_8_8.o" "win32\ScanPositions_8_8.o" "win32\ScanSSP_8.o" "win32\Bool_Spreader_Operator_2.o" "win32\BooleanScanPositions_2.o" "win32\ScanAdh_2.o" "win32\MRSP_Operator.o" "win32\dV_Operator.o" "win32\Min3_math_real.o" "win32\Spreader_Operator_2_2.o" "win32\ScanPositions_2_2.o" "win32\ScanSSP_2.o" "win32\Spreader_Operator_8_4.o" "win32\ScanPositions_8_4.o" "win32\ScanSSP_4.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\Essai_newtype.o" "win32\Essai_newmapping.o" "win32\Essai_newinterface.o" "win32\SmuProxy.o" "win32\NewSmuTypes.o" "win32\SmuConverter.o"  "SmuExport.def" -lm -lwsock32 -lmingw32 -lgcc -lmoldname -lmingwex -lmsvcrt -luser32 -lkernel32 -ladvapi32 -lshell32 $(LIB_MINGW_GCC)/crtend.o -o "Root.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/Root_dll.o: Root_dll.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "Root_dll.c" -o "win32\Root_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R15.2/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c "C:\Program Files (x86)\Esterel Technologies\SCADE R15.2\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

Root.exe: win32/Root_dll.o win32/SmuMainWindows.o 
	gcc "win32\Root_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -o "Root.exe" 

#############################################################
######    End of Makefile
#############################################################
