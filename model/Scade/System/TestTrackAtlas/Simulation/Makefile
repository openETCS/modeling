#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\.

SHELL=cmd.exe

C_FLAGS = -pedantic

all: TestTrackAtlas.exe TestTrackAtlas.dll 

win32/TestTrackAtlas.o: TestTrackAtlas.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TestTrackAtlas.c" -o "win32\TestTrackAtlas.o"

win32/SimTrainPos.o: SimTrainPos.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SimTrainPos.c" -o "win32\SimTrainPos.o"

win32/ConvertReceivedMess.o: ConvertReceivedMess.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ConvertReceivedMess.c" -o "win32\ConvertReceivedMess.o"

win32/TestTrackTrackAtlasLegacy_Internal_Tests.o: TestTrackTrackAtlasLegacy_Internal_Tests.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TestTrackTrackAtlasLegacy_Internal_Tests.c" -o "win32\TestTrackTrackAtlasLegacy_Internal_Tests.o"

win32/compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M028_TM_RBC_conversions.o: C_header_to_M028_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M028_TM_RBC_conversions.c" -o "win32\C_header_to_M028_TM_RBC_conversions.o"

win32/M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M032_TM_RBC_conversions.o: C_header_to_M032_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M032_TM_RBC_conversions.c" -o "win32\C_header_to_M032_TM_RBC_conversions.o"

win32/CAST_Int_to_M_VERSION_TM_conversions.o: CAST_Int_to_M_VERSION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_VERSION_TM_conversions.c" -o "win32\CAST_Int_to_M_VERSION_TM_conversions.o"

win32/C_header_to_M033_TM_RBC_conversions.o: C_header_to_M033_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M033_TM_RBC_conversions.c" -o "win32\C_header_to_M033_TM_RBC_conversions.o"

win32/M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M034_TM_RBC_conversions.o: C_header_to_M034_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M034_TM_RBC_conversions.c" -o "win32\C_header_to_M034_TM_RBC_conversions.o"

win32/CAST_Int_to_D_TAFDISPLAY_TM_conversions.o: CAST_Int_to_D_TAFDISPLAY_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_TAFDISPLAY_TM_conversions.c" -o "win32\CAST_Int_to_D_TAFDISPLAY_TM_conversions.o"

win32/CAST_Int_to_L_TAFDISPLAY_TM_conversions.o: CAST_Int_to_L_TAFDISPLAY_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_TAFDISPLAY_TM_conversions.c" -o "win32\CAST_Int_to_L_TAFDISPLAY_TM_conversions.o"

win32/M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M038_TM_RBC_conversions.o: C_header_to_M038_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M038_TM_RBC_conversions.c" -o "win32\C_header_to_M038_TM_RBC_conversions.o"

win32/M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M039_TM_RBC_conversions.o: C_header_to_M039_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M039_TM_RBC_conversions.c" -o "win32\C_header_to_M039_TM_RBC_conversions.o"

win32/M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M040_TM_RBC_conversions.o: C_header_to_M040_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M040_TM_RBC_conversions.c" -o "win32\C_header_to_M040_TM_RBC_conversions.o"

win32/M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M041_TM_RBC_conversions.o: C_header_to_M041_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M041_TM_RBC_conversions.c" -o "win32\C_header_to_M041_TM_RBC_conversions.o"

win32/C_header_to_M043_TM_RBC_conversions.o: C_header_to_M043_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M043_TM_RBC_conversions.c" -o "win32\C_header_to_M043_TM_RBC_conversions.o"

win32/M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M045_TM_RBC_conversions.o: C_header_to_M045_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M045_TM_RBC_conversions.c" -o "win32\C_header_to_M045_TM_RBC_conversions.o"

win32/CAST_Int_to_Q_ORIENTATION_TM_conversions.o: CAST_Int_to_Q_ORIENTATION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_ORIENTATION_TM_conversions.c" -o "win32\CAST_Int_to_Q_ORIENTATION_TM_conversions.o"

win32/M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M002_TM_RBC_conversions.o: C_header_to_M002_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M002_TM_RBC_conversions.c" -o "win32\C_header_to_M002_TM_RBC_conversions.o"

win32/CAST_Int_to_D_SR_TM_conversions.o: CAST_Int_to_D_SR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_SR_TM_conversions.c" -o "win32\CAST_Int_to_D_SR_TM_conversions.o"

win32/C_header_to_M003_TM_RBC_conversions.o: C_header_to_M003_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M003_TM_RBC_conversions.c" -o "win32\C_header_to_M003_TM_RBC_conversions.o"

win32/M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M006_TM_RBC_conversions.o: C_header_to_M006_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M006_TM_RBC_conversions.c" -o "win32\C_header_to_M006_TM_RBC_conversions.o"

win32/M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M008_TM_RBC_conversions.o: C_header_to_M008_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M008_TM_RBC_conversions.c" -o "win32\C_header_to_M008_TM_RBC_conversions.o"

win32/M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M009_TM_RBC_conversions.o: C_header_to_M009_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M009_TM_RBC_conversions.c" -o "win32\C_header_to_M009_TM_RBC_conversions.o"

win32/M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M015_TM_RBC_conversions.o: C_header_to_M015_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M015_TM_RBC_conversions.c" -o "win32\C_header_to_M015_TM_RBC_conversions.o"

win32/CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.o: CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.c" -o "win32\CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.o"

win32/CAST_Int_to_D_REF_TM_conversions.o: CAST_Int_to_D_REF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_REF_TM_conversions.c" -o "win32\CAST_Int_to_D_REF_TM_conversions.o"

win32/M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M016_TM_RBC_conversions.o: C_header_to_M016_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M016_TM_RBC_conversions.c" -o "win32\C_header_to_M016_TM_RBC_conversions.o"

win32/C_header_to_M018_TM_RBC_conversions.o: C_header_to_M018_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M018_TM_RBC_conversions.c" -o "win32\C_header_to_M018_TM_RBC_conversions.o"

win32/CAST_Int_to_NID_EM_TM_conversions.o: CAST_Int_to_NID_EM_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_EM_TM_conversions.c" -o "win32\CAST_Int_to_NID_EM_TM_conversions.o"

win32/M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M024_TM_RBC_conversions.o: C_header_to_M024_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M024_TM_RBC_conversions.c" -o "win32\C_header_to_M024_TM_RBC_conversions.o"

win32/M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_header_to_M027_TM_RBC_conversions.o: C_header_to_M027_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_header_to_M027_TM_RBC_conversions.c" -o "win32\C_header_to_M027_TM_RBC_conversions.o"

win32/CAST_Int_to_L_MESSAGE_TM_conversions.o: CAST_Int_to_L_MESSAGE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_MESSAGE_TM_conversions.c" -o "win32\CAST_Int_to_L_MESSAGE_TM_conversions.o"

win32/CAST_Int_to_NID_MESSAGE_TM_conversions.o: CAST_Int_to_NID_MESSAGE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_MESSAGE_TM_conversions.c" -o "win32\CAST_Int_to_NID_MESSAGE_TM_conversions.o"

win32/CAST_Int_to_T_TRAIN_TM_conversions.o: CAST_Int_to_T_TRAIN_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_TRAIN_TM_conversions.c" -o "win32\CAST_Int_to_T_TRAIN_TM_conversions.o"

win32/CAST_Int_to_NID_LRBG_TM_conversions.o: CAST_Int_to_NID_LRBG_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_LRBG_TM_conversions.c" -o "win32\CAST_Int_to_NID_LRBG_TM_conversions.o"

win32/CAST_Int_to_M_ACK_TM_conversions.o: CAST_Int_to_M_ACK_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_ACK_TM_conversions.c" -o "win32\CAST_Int_to_M_ACK_TM_conversions.o"

win32/M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o: M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.c" -o "win32\M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o"

win32/C_TrackTrainMessage_to_Int_TM_conversions.o: C_TrackTrainMessage_to_Int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_TrackTrainMessage_to_Int_TM_conversions.c" -o "win32\C_TrackTrainMessage_to_Int_TM_conversions.o"

win32/CAST_D_EMERGENCYSTOP_to_int_TM_conversions.o: CAST_D_EMERGENCYSTOP_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_D_EMERGENCYSTOP_to_int_TM_conversions.c" -o "win32\CAST_D_EMERGENCYSTOP_to_int_TM_conversions.o"

win32/CAST_M_VERSION_to_int_TM_conversions.o: CAST_M_VERSION_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_M_VERSION_to_int_TM_conversions.c" -o "win32\CAST_M_VERSION_to_int_TM_conversions.o"

win32/CAST_Q_DIR_to_int_TM_conversions.o: CAST_Q_DIR_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_DIR_to_int_TM_conversions.c" -o "win32\CAST_Q_DIR_to_int_TM_conversions.o"

win32/CAST_D_REF_to_int_TM_conversions.o: CAST_D_REF_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_D_REF_to_int_TM_conversions.c" -o "win32\CAST_D_REF_to_int_TM_conversions.o"

win32/CAST_D_SR_to_int_TM_conversions.o: CAST_D_SR_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_D_SR_to_int_TM_conversions.c" -o "win32\CAST_D_SR_to_int_TM_conversions.o"

win32/CAST_Q_SCALE_to_int_TM_conversions.o: CAST_Q_SCALE_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Q_SCALE_to_int_TM_conversions.c" -o "win32\CAST_Q_SCALE_to_int_TM_conversions.o"

win32/CAST_NID_EM_to_int_TM_conversions.o: CAST_NID_EM_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_EM_to_int_TM_conversions.c" -o "win32\CAST_NID_EM_to_int_TM_conversions.o"

win32/CAST_NID_LRBG_to_int_TM_conversions.o: CAST_NID_LRBG_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_LRBG_to_int_TM_conversions.c" -o "win32\CAST_NID_LRBG_to_int_TM_conversions.o"

win32/CAST_M_ACK_to_int_TM_conversions.o: CAST_M_ACK_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_M_ACK_to_int_TM_conversions.c" -o "win32\CAST_M_ACK_to_int_TM_conversions.o"

win32/CAST_T_TRAIN_to_int_TM_conversions.o: CAST_T_TRAIN_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_T_TRAIN_to_int_TM_conversions.c" -o "win32\CAST_T_TRAIN_to_int_TM_conversions.o"

win32/TestTrackTrackAtlas_Internal_Tests.o: TestTrackTrackAtlas_Internal_Tests.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TestTrackTrackAtlas_Internal_Tests.c" -o "win32\TestTrackTrackAtlas_Internal_Tests.o"

win32/RBC_init_RadioLib.o: RBC_init_RadioLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RBC_init_RadioLib.c" -o "win32\RBC_init_RadioLib.o"

win32/RBC_close_RadioLib.o: RBC_close_RadioLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RBC_close_RadioLib.c" -o "win32\RBC_close_RadioLib.o"

win32/Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Send_M003_JRU_MessageLibBaseline2.o: Send_M003_JRU_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_M003_JRU_MessageLibBaseline2.c" -o "win32\Send_M003_JRU_MessageLibBaseline2.o"

win32/C_M003_int__to_header_TM_RBC_conversions.o: C_M003_int__to_header_TM_RBC_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_M003_int__to_header_TM_RBC_conversions.c" -o "win32\C_M003_int__to_header_TM_RBC_conversions.o"

win32/SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o: SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c" -o "win32\SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o"

win32/Send_P015_MessageLibBaseline2.o: Send_P015_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P015_MessageLibBaseline2.c" -o "win32\Send_P015_MessageLibBaseline2.o"

win32/Write_P015_TM_trackside.o: Write_P015_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P015_TM_trackside.c" -o "win32\Write_P015_TM_trackside.o"

win32/C_P015_tracksim_compr_TM_conversions.o: C_P015_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_tracksim_compr_TM_conversions.c" -o "win32\C_P015_tracksim_compr_TM_conversions.o"

win32/C_P015_flatten_sections_TM_lib_internal.o: C_P015_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_flatten_sections_TM_lib_internal.c" -o "win32\C_P015_flatten_sections_TM_lib_internal.o"

win32/C_P015_fs_struct_to_array_TM_lib_internal.o: C_P015_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P015_fs_struct_to_array_TM_lib_internal.o"

win32/C_P015_fs_flatten_array_TM_lib_internal.o: C_P015_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P015_fs_flatten_array_TM_lib_internal.o"

win32/Send_P065_MessageLibBaseline2.o: Send_P065_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P065_MessageLibBaseline2.c" -o "win32\Send_P065_MessageLibBaseline2.o"

win32/Write_P065_TM_trackside.o: Write_P065_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P065_TM_trackside.c" -o "win32\Write_P065_TM_trackside.o"

win32/C_P065_tracksim_compr_TM_conversions.o: C_P065_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P065_tracksim_compr_TM_conversions.c" -o "win32\C_P065_tracksim_compr_TM_conversions.o"

win32/Send_P041_MessageLibBaseline2.o: Send_P041_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P041_MessageLibBaseline2.c" -o "win32\Send_P041_MessageLibBaseline2.o"

win32/Write_P041_TM_trackside.o: Write_P041_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P041_TM_trackside.c" -o "win32\Write_P041_TM_trackside.o"

win32/C_P041_tracksim_compr_TM_conversions.o: C_P041_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_tracksim_compr_TM_conversions.c" -o "win32\C_P041_tracksim_compr_TM_conversions.o"

win32/C_P041_flatten_sections_TM_lib_internal.o: C_P041_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_flatten_sections_TM_lib_internal.c" -o "win32\C_P041_flatten_sections_TM_lib_internal.o"

win32/C_P041_fs_struct_to_array_TM_lib_internal.o: C_P041_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P041_fs_struct_to_array_TM_lib_internal.o"

win32/C_P041_fs_flatten_array_TM_lib_internal.o: C_P041_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P041_fs_flatten_array_TM_lib_internal.o"

win32/Send_P005_MessageLibBaseline2.o: Send_P005_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P005_MessageLibBaseline2.c" -o "win32\Send_P005_MessageLibBaseline2.o"

win32/Write_P005_TM_trackside.o: Write_P005_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P005_TM_trackside.c" -o "win32\Write_P005_TM_trackside.o"

win32/C_P005_tracksim_compr_TM_conversions.o: C_P005_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_tracksim_compr_TM_conversions.c" -o "win32\C_P005_tracksim_compr_TM_conversions.o"

win32/C_P005_flatten_sections_TM_lib_internal.o: C_P005_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_flatten_sections_TM_lib_internal.c" -o "win32\C_P005_flatten_sections_TM_lib_internal.o"

win32/C_P005_fs_struct_to_array_TM_lib_internal.o: C_P005_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P005_fs_struct_to_array_TM_lib_internal.o"

win32/C_P005_fs_flatten_array_TM_lib_internal.o: C_P005_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P005_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P005_fs_flatten_array_TM_lib_internal.o"

win32/Send_P003V1_MessageLibBaseline2.o: Send_P003V1_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P003V1_MessageLibBaseline2.c" -o "win32\Send_P003V1_MessageLibBaseline2.o"

win32/Write_P003V1_TM_trackside_baseline2.o: Write_P003V1_TM_trackside_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P003V1_TM_trackside_baseline2.c" -o "win32\Write_P003V1_TM_trackside_baseline2.o"

win32/C_P003V1_tracksim_compr_TM_conversions_baseline2.o: C_P003V1_tracksim_compr_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_tracksim_compr_TM_conversions_baseline2.c" -o "win32\C_P003V1_tracksim_compr_TM_conversions_baseline2.o"

win32/Send_P027V1_MessageLibBaseline2.o: Send_P027V1_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P027V1_MessageLibBaseline2.c" -o "win32\Send_P027V1_MessageLibBaseline2.o"

win32/Write_P027V1_TM_trackside_baseline2.o: Write_P027V1_TM_trackside_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P027V1_TM_trackside_baseline2.c" -o "win32\Write_P027V1_TM_trackside_baseline2.o"

win32/C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.o: C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.c" -o "win32\C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.o"

win32/C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.o: C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.c" -o "win32\C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.o"

win32/C_P027_flatten_sections_qdiff_TM_lib_internal.o: C_P027_flatten_sections_qdiff_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027_flatten_sections_qdiff_TM_lib_internal.c" -o "win32\C_P027_flatten_sections_qdiff_TM_lib_internal.o"

win32/C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.o: C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.c" -o "win32\C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.o"

win32/C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.o: C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.c" -o "win32\C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.o"

win32/C_P027V1_tracksim_compr_body_TM_conversions_baseline2.o: C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c" -o "win32\C_P027V1_tracksim_compr_body_TM_conversions_baseline2.o"

win32/SEND_WriteMessageHeader_TM_lib_internal.o: SEND_WriteMessageHeader_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_WriteMessageHeader_TM_lib_internal.c" -o "win32\SEND_WriteMessageHeader_TM_lib_internal.o"

win32/Send_P021_MessageLibBaseline2.o: Send_P021_MessageLibBaseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_P021_MessageLibBaseline2.c" -o "win32\Send_P021_MessageLibBaseline2.o"

win32/Write_P021_TM_trackside.o: Write_P021_TM_trackside.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Write_P021_TM_trackside.c" -o "win32\Write_P021_TM_trackside.o"

win32/C_P021_tracksim_compr_TM_conversions.o: C_P021_tracksim_compr_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_tracksim_compr_TM_conversions.c" -o "win32\C_P021_tracksim_compr_TM_conversions.o"

win32/T_Build_Metadata_Packet_ID_TM_lib_internal.o: T_Build_Metadata_Packet_ID_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Build_Metadata_Packet_ID_TM_lib_internal.c" -o "win32\T_Build_Metadata_Packet_ID_TM_lib_internal.o"

win32/C_P021_flatten_sections_TM_lib_internal.o: C_P021_flatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_flatten_sections_TM_lib_internal.c" -o "win32\C_P021_flatten_sections_TM_lib_internal.o"

win32/C_P021_fs_struct_to_array_TM_lib_internal.o: C_P021_fs_struct_to_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_fs_struct_to_array_TM_lib_internal.c" -o "win32\C_P021_fs_struct_to_array_TM_lib_internal.o"

win32/C_P021_fs_flatten_array_TM_lib_internal.o: C_P021_fs_flatten_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_fs_flatten_array_TM_lib_internal.c" -o "win32\C_P021_fs_flatten_array_TM_lib_internal.o"

win32/T_DeterminePacketSizeInt_TM_lib_internal.o: T_DeterminePacketSizeInt_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_DeterminePacketSizeInt_TM_lib_internal.c" -o "win32\T_DeterminePacketSizeInt_TM_lib_internal.o"

win32/SEND_MessageData_TM_lib_internal.o: SEND_MessageData_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_MessageData_TM_lib_internal.c" -o "win32\SEND_MessageData_TM_lib_internal.o"

win32/SEND_WriteBaliseDataElement_TM_lib_internal.o: SEND_WriteBaliseDataElement_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_WriteBaliseDataElement_TM_lib_internal.c" -o "win32\SEND_WriteBaliseDataElement_TM_lib_internal.o"

win32/SEND_WriteBaliseMessageHeader_TM_lib_internal.o: SEND_WriteBaliseMessageHeader_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_WriteBaliseMessageHeader_TM_lib_internal.c" -o "win32\SEND_WriteBaliseMessageHeader_TM_lib_internal.o"

win32/SEND_FindSlot_TM_lib_internal.o: SEND_FindSlot_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SEND_FindSlot_TM_lib_internal.c" -o "win32\SEND_FindSlot_TM_lib_internal.o"

win32/TrackAtlas_TrackAtlas.o: TrackAtlas_TrackAtlas.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrackAtlas_TrackAtlas.c" -o "win32\TrackAtlas_TrackAtlas.o"

win32/WA_Speed_NTC_TrackAtlas.o: WA_Speed_NTC_TrackAtlas.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "WA_Speed_NTC_TrackAtlas.c" -o "win32\WA_Speed_NTC_TrackAtlas.o"

win32/SSP_to_MRSP_TA_Export.o: SSP_to_MRSP_TA_Export.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_to_MRSP_TA_Export.c" -o "win32\SSP_to_MRSP_TA_Export.o"

win32/Build_GradientProfile_TA_Gradient.o: Build_GradientProfile_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_GradientProfile_TA_Gradient.c" -o "win32\Build_GradientProfile_TA_Gradient.o"

win32/GP_Postprocessing_TA_Gradient.o: GP_Postprocessing_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Postprocessing_TA_Gradient.c" -o "win32\GP_Postprocessing_TA_Gradient.o"

win32/GP_Position_GP_with_BGs_TA_Gradient.o: GP_Position_GP_with_BGs_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Position_GP_with_BGs_TA_Gradient.c" -o "win32\GP_Position_GP_with_BGs_TA_Gradient.o"

win32/GP_Correct_StartSection_TA_Gradient.o: GP_Correct_StartSection_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Correct_StartSection_TA_Gradient.c" -o "win32\GP_Correct_StartSection_TA_Gradient.o"

win32/GP_Truncate_at_BG_TA_Gradient.o: GP_Truncate_at_BG_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Truncate_at_BG_TA_Gradient.c" -o "win32\GP_Truncate_at_BG_TA_Gradient.o"

win32/GP_Find_First_Gsection_After_BG_loop_TA_Gradient.o: GP_Find_First_Gsection_After_BG_loop_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Find_First_Gsection_After_BG_loop_TA_Gradient.c" -o "win32\GP_Find_First_Gsection_After_BG_loop_TA_Gradient.o"

win32/GP_Truncate_at_BG_loop_TA_Gradient.o: GP_Truncate_at_BG_loop_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Truncate_at_BG_loop_TA_Gradient.c" -o "win32\GP_Truncate_at_BG_loop_TA_Gradient.o"

win32/GP_Normalize_Profile_TA_Gradient.o: GP_Normalize_Profile_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Normalize_Profile_TA_Gradient.c" -o "win32\GP_Normalize_Profile_TA_Gradient.o"

win32/GP_Normalize_Profile_loop_TA_Gradient.o: GP_Normalize_Profile_loop_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Normalize_Profile_loop_TA_Gradient.c" -o "win32\GP_Normalize_Profile_loop_TA_Gradient.o"

win32/GP_Merge_New_P21_to_Profile_TA_Gradient.o: GP_Merge_New_P21_to_Profile_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Merge_New_P21_to_Profile_TA_Gradient.c" -o "win32\GP_Merge_New_P21_to_Profile_TA_Gradient.o"

win32/GP_Merge_New_P21_to_Profile_loop_TA_Gradient.o: GP_Merge_New_P21_to_Profile_loop_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Merge_New_P21_to_Profile_loop_TA_Gradient.c" -o "win32\GP_Merge_New_P21_to_Profile_loop_TA_Gradient.o"

win32/FindStartOfNewGradientProfileAbs_TA_Lib_internal.o: FindStartOfNewGradientProfileAbs_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "FindStartOfNewGradientProfileAbs_TA_Lib_internal.c" -o "win32\FindStartOfNewGradientProfileAbs_TA_Lib_internal.o"

win32/FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.o: FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.c" -o "win32\FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.o"

win32/GP_Preprocessing_TA_Gradient.o: GP_Preprocessing_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Preprocessing_TA_Gradient.c" -o "win32\GP_Preprocessing_TA_Gradient.o"

win32/GP_Convert_P21_to_DistanceProfile_TA_Gradient.o: GP_Convert_P21_to_DistanceProfile_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Convert_P21_to_DistanceProfile_TA_Gradient.c" -o "win32\GP_Convert_P21_to_DistanceProfile_TA_Gradient.o"

win32/GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.o: GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.c" -o "win32\GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.o"

win32/EVAL_Q_GDIR_TA_Lib_internal.o: EVAL_Q_GDIR_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EVAL_Q_GDIR_TA_Lib_internal.c" -o "win32\EVAL_Q_GDIR_TA_Lib_internal.o"

win32/MoveGPSectionsAbsolute_TA_Lib_internal.o: MoveGPSectionsAbsolute_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MoveGPSectionsAbsolute_TA_Lib_internal.c" -o "win32\MoveGPSectionsAbsolute_TA_Lib_internal.o"

win32/MoveGPSectionsAbsolute_Loop_TA_Lib_internal.o: MoveGPSectionsAbsolute_Loop_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MoveGPSectionsAbsolute_Loop_TA_Lib_internal.c" -o "win32\MoveGPSectionsAbsolute_Loop_TA_Lib_internal.o"

win32/Manage_EmergencyStop_TA_EmergencyStop.o: Manage_EmergencyStop_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Manage_EmergencyStop_TA_EmergencyStop.c" -o "win32\Manage_EmergencyStop_TA_EmergencyStop.o"

win32/ES_Process_Conditional_TA_EmergencyStop.o: ES_Process_Conditional_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_Process_Conditional_TA_EmergencyStop.c" -o "win32\ES_Process_Conditional_TA_EmergencyStop.o"

win32/ES_AcceptOrReject_CES_TA_EmergencyStop.o: ES_AcceptOrReject_CES_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_AcceptOrReject_CES_TA_EmergencyStop.c" -o "win32\ES_AcceptOrReject_CES_TA_EmergencyStop.o"

win32/ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.o: ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.c" -o "win32\ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.o"

win32/ES_Build_Acknowledgement_TA_EmergencyStop.o: ES_Build_Acknowledgement_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_Build_Acknowledgement_TA_EmergencyStop.c" -o "win32\ES_Build_Acknowledgement_TA_EmergencyStop.o"

win32/ES_Process_Unconditional_TA_EmergencyStop.o: ES_Process_Unconditional_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_Process_Unconditional_TA_EmergencyStop.c" -o "win32\ES_Process_Unconditional_TA_EmergencyStop.o"

win32/Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.o: Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.c" -o "win32\Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.o"

win32/NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.o: NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.c" -o "win32\NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.o"

win32/NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.o: NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.c" -o "win32\NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.o"

win32/NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.o: NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.c" -o "win32\NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.o"

win32/ES_ExtractMsgParams_TA_EmergencyStop.o: ES_ExtractMsgParams_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_ExtractMsgParams_TA_EmergencyStop.c" -o "win32\ES_ExtractMsgParams_TA_EmergencyStop.o"

win32/ES_ReceiveAndControl_TA_EmergencyStop.o: ES_ReceiveAndControl_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_ReceiveAndControl_TA_EmergencyStop.c" -o "win32\ES_ReceiveAndControl_TA_EmergencyStop.o"

win32/ES_Filter_Messages_TA_EmergencyStop.o: ES_Filter_Messages_TA_EmergencyStop.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ES_Filter_Messages_TA_EmergencyStop.c" -o "win32\ES_Filter_Messages_TA_EmergencyStop.o"

win32/TA_to_ML_TA_Export.o: TA_to_ML_TA_Export.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TA_to_ML_TA_Export.c" -o "win32\TA_to_ML_TA_Export.o"

win32/Read_P012_TM.o: Read_P012_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P012_TM.c" -o "win32\Read_P012_TM.o"

win32/C_P012_compr_onboard_TM_conversions.o: C_P012_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P012_compr_onboard_TM_conversions.c" -o "win32\C_P012_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_V_MAIN_TM_conversions.o: CAST_Int_to_V_MAIN_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_MAIN_TM_conversions.c" -o "win32\CAST_Int_to_V_MAIN_TM_conversions.o"

win32/C_P012_unflatten_sections_TM_lib_internal.o: C_P012_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P012_unflatten_sections_TM_lib_internal.c" -o "win32\C_P012_unflatten_sections_TM_lib_internal.o"

win32/C_P012_us_array_TM_lib_internal.o: C_P012_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P012_us_array_TM_lib_internal.c" -o "win32\C_P012_us_array_TM_lib_internal.o"

win32/C_P012_extract_el_section_TM_lib_internal.o: C_P012_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P012_extract_el_section_TM_lib_internal.c" -o "win32\C_P012_extract_el_section_TM_lib_internal.o"

win32/Read_P046_Legacy_TM_specific.o: Read_P046_Legacy_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P046_Legacy_TM_specific.c" -o "win32\Read_P046_Legacy_TM_specific.o"

win32/C_P046_to_legacy_t_TM_conversions.o: C_P046_to_legacy_t_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P046_to_legacy_t_TM_conversions.c" -o "win32\C_P046_to_legacy_t_TM_conversions.o"

win32/C_P046_to_legacy_loop_TM_conversions.o: C_P046_to_legacy_loop_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P046_to_legacy_loop_TM_conversions.c" -o "win32\C_P046_to_legacy_loop_TM_conversions.o"

win32/Read_P046_TM.o: Read_P046_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P046_TM.c" -o "win32\Read_P046_TM.o"

win32/C_P046_compr_onboard_TM_conversions.o: C_P046_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P046_compr_onboard_TM_conversions.c" -o "win32\C_P046_compr_onboard_TM_conversions.o"

win32/C_P046_unflatten_sections_TM_lib_internal.o: C_P046_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P046_unflatten_sections_TM_lib_internal.c" -o "win32\C_P046_unflatten_sections_TM_lib_internal.o"

win32/C_P046_us_array_TM_lib_internal.o: C_P046_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P046_us_array_TM_lib_internal.c" -o "win32\C_P046_us_array_TM_lib_internal.o"

win32/C_P046_extract_el_section_TM_lib_internal.o: C_P046_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P046_extract_el_section_TM_lib_internal.c" -o "win32\C_P046_extract_el_section_TM_lib_internal.o"

win32/Read_P041_Legacy_TM_specific.o: Read_P041_Legacy_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P041_Legacy_TM_specific.c" -o "win32\Read_P041_Legacy_TM_specific.o"

win32/C_P041_to_legacy_t_TM_conversions.o: C_P041_to_legacy_t_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_to_legacy_t_TM_conversions.c" -o "win32\C_P041_to_legacy_t_TM_conversions.o"

win32/C_P041_to_legacy_loop_TM_conversions.o: C_P041_to_legacy_loop_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_to_legacy_loop_TM_conversions.c" -o "win32\C_P041_to_legacy_loop_TM_conversions.o"

win32/Read_P041_TM.o: Read_P041_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P041_TM.c" -o "win32\Read_P041_TM.o"

win32/C_P041_compr_onboard_TM_conversions.o: C_P041_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_compr_onboard_TM_conversions.c" -o "win32\C_P041_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_D_LEVELTR_TM_conversions.o: CAST_Int_to_D_LEVELTR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_LEVELTR_TM_conversions.c" -o "win32\CAST_Int_to_D_LEVELTR_TM_conversions.o"

win32/C_P041_unflatten_sections_TM_lib_internal.o: C_P041_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_unflatten_sections_TM_lib_internal.c" -o "win32\C_P041_unflatten_sections_TM_lib_internal.o"

win32/C_P041_us_array_TM_lib_internal.o: C_P041_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_us_array_TM_lib_internal.c" -o "win32\C_P041_us_array_TM_lib_internal.o"

win32/CAST_Int_to_NID_NTC_TM_conversions.o: CAST_Int_to_NID_NTC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_NTC_TM_conversions.c" -o "win32\CAST_Int_to_NID_NTC_TM_conversions.o"

win32/CAST_Int_to_L_ACKLEVELTR_TM_conversions.o: CAST_Int_to_L_ACKLEVELTR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_ACKLEVELTR_TM_conversions.c" -o "win32\CAST_Int_to_L_ACKLEVELTR_TM_conversions.o"

win32/CAST_Int_to_M_LEVELTR_TM_conversions.o: CAST_Int_to_M_LEVELTR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_LEVELTR_TM_conversions.c" -o "win32\CAST_Int_to_M_LEVELTR_TM_conversions.o"

win32/C_P041_extract_el_section_TM_lib_internal.o: C_P041_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P041_extract_el_section_TM_lib_internal.c" -o "win32\C_P041_extract_el_section_TM_lib_internal.o"

win32/Read_P027V1_Legacy_for_ML_TM_specific.o: Read_P027V1_Legacy_for_ML_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P027V1_Legacy_for_ML_TM_specific.c" -o "win32\Read_P027V1_Legacy_for_ML_TM_specific.o"

win32/C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.o: C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.c" -o "win32\C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.o"

win32/Read_P021_Legacy_TM_specific.o: Read_P021_Legacy_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P021_Legacy_TM_specific.c" -o "win32\Read_P021_Legacy_TM_specific.o"

win32/C_P021_to_legacy_t_TM_conversions.o: C_P021_to_legacy_t_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_to_legacy_t_TM_conversions.c" -o "win32\C_P021_to_legacy_t_TM_conversions.o"

win32/C_P021_to_legacy_loop_TM_conversions.o: C_P021_to_legacy_loop_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_to_legacy_loop_TM_conversions.c" -o "win32\C_P021_to_legacy_loop_TM_conversions.o"

win32/Read_P021_TM.o: Read_P021_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P021_TM.c" -o "win32\Read_P021_TM.o"

win32/C_P021_compr_onboard_TM_conversions.o: C_P021_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_compr_onboard_TM_conversions.c" -o "win32\C_P021_compr_onboard_TM_conversions.o"

win32/C_P021_unflatten_sections_TM_lib_internal.o: C_P021_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_unflatten_sections_TM_lib_internal.c" -o "win32\C_P021_unflatten_sections_TM_lib_internal.o"

win32/C_P021_us_array_TM_lib_internal.o: C_P021_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_us_array_TM_lib_internal.c" -o "win32\C_P021_us_array_TM_lib_internal.o"

win32/CAST_Int_to_Q_GDIR_TM_conversions.o: CAST_Int_to_Q_GDIR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_GDIR_TM_conversions.c" -o "win32\CAST_Int_to_Q_GDIR_TM_conversions.o"

win32/CAST_Int_to_G_A_TM_conversions.o: CAST_Int_to_G_A_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_G_A_TM_conversions.c" -o "win32\CAST_Int_to_G_A_TM_conversions.o"

win32/CAST_Int_to_D_GRADIENT_TM_conversions.o: CAST_Int_to_D_GRADIENT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_GRADIENT_TM_conversions.c" -o "win32\CAST_Int_to_D_GRADIENT_TM_conversions.o"

win32/C_P021_extract_el_section_TM_lib_internal.o: C_P021_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P021_extract_el_section_TM_lib_internal.c" -o "win32\C_P021_extract_el_section_TM_lib_internal.o"

win32/Read_P015_Legacy_TM_specific.o: Read_P015_Legacy_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P015_Legacy_TM_specific.c" -o "win32\Read_P015_Legacy_TM_specific.o"

win32/C_P015_to_legacy_t_TM_conversions.o: C_P015_to_legacy_t_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_to_legacy_t_TM_conversions.c" -o "win32\C_P015_to_legacy_t_TM_conversions.o"

win32/C_P015_to_legacy_loop_TM_conversions.o: C_P015_to_legacy_loop_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_to_legacy_loop_TM_conversions.c" -o "win32\C_P015_to_legacy_loop_TM_conversions.o"

win32/Read_P139_Legacy_TM_specific.o: Read_P139_Legacy_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P139_Legacy_TM_specific.c" -o "win32\Read_P139_Legacy_TM_specific.o"

win32/C_P139_to_legacy_t_TM_conversions.o: C_P139_to_legacy_t_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P139_to_legacy_t_TM_conversions.c" -o "win32\C_P139_to_legacy_t_TM_conversions.o"

win32/Read_P139_TM.o: Read_P139_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P139_TM.c" -o "win32\Read_P139_TM.o"

win32/C_P139_compr_onboard_TM_conversions.o: C_P139_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P139_compr_onboard_TM_conversions.c" -o "win32\C_P139_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_V_REVERSE_TM_conversions.o: CAST_Int_to_V_REVERSE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_REVERSE_TM_conversions.c" -o "win32\CAST_Int_to_V_REVERSE_TM_conversions.o"

win32/CAST_Int_to_D_REVERSE_TM_conversions.o: CAST_Int_to_D_REVERSE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_REVERSE_TM_conversions.c" -o "win32\CAST_Int_to_D_REVERSE_TM_conversions.o"

win32/Read_P138_Legacy_TM_specific.o: Read_P138_Legacy_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P138_Legacy_TM_specific.c" -o "win32\Read_P138_Legacy_TM_specific.o"

win32/C_P138_to_legacy_t_TM_conversions.o: C_P138_to_legacy_t_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P138_to_legacy_t_TM_conversions.c" -o "win32\C_P138_to_legacy_t_TM_conversions.o"

win32/Read_P138_TM.o: Read_P138_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P138_TM.c" -o "win32\Read_P138_TM.o"

win32/C_P138_compr_onboard_TM_conversions.o: C_P138_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P138_compr_onboard_TM_conversions.c" -o "win32\C_P138_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_L_REVERSEAREA_TM_conversions.o: CAST_Int_to_L_REVERSEAREA_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_REVERSEAREA_TM_conversions.c" -o "win32\CAST_Int_to_L_REVERSEAREA_TM_conversions.o"

win32/CAST_Int_to_D_STARTREVERSE_TM_conversions.o: CAST_Int_to_D_STARTREVERSE_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_STARTREVERSE_TM_conversions.c" -o "win32\CAST_Int_to_D_STARTREVERSE_TM_conversions.o"

win32/Read_P137_Legacy_TM_specific.o: Read_P137_Legacy_TM_specific.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P137_Legacy_TM_specific.c" -o "win32\Read_P137_Legacy_TM_specific.o"

win32/Read_P137_TM.o: Read_P137_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P137_TM.c" -o "win32\Read_P137_TM.o"

win32/C_P137_compr_onboard_TM_conversions.o: C_P137_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P137_compr_onboard_TM_conversions.c" -o "win32\C_P137_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_Q_SRSTOP_TM_conversions.o: CAST_Int_to_Q_SRSTOP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_SRSTOP_TM_conversions.c" -o "win32\CAST_Int_to_Q_SRSTOP_TM_conversions.o"

win32/Read_P135_TM.o: Read_P135_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P135_TM.c" -o "win32\Read_P135_TM.o"

win32/C_P135_compr_onboard_TM_conversions.o: C_P135_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P135_compr_onboard_TM_conversions.c" -o "win32\C_P135_compr_onboard_TM_conversions.o"

win32/CAST_NID_MESSAGE_to_int_TM_conversions.o: CAST_NID_MESSAGE_to_int_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_NID_MESSAGE_to_int_TM_conversions.c" -o "win32\CAST_NID_MESSAGE_to_int_TM_conversions.o"

win32/Manage_MA_Request_MA_Request.o: Manage_MA_Request_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Manage_MA_Request_MA_Request.c" -o "win32\Manage_MA_Request_MA_Request.o"

win32/Send_MA_MA_Request.o: Send_MA_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Send_MA_MA_Request.c" -o "win32\Send_MA_MA_Request.o"

win32/MA_Request_Supervision_MA_Request.o: MA_Request_Supervision_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MA_Request_Supervision_MA_Request.c" -o "win32\MA_Request_Supervision_MA_Request.o"

win32/op_RepeatReq_MA_Request.o: op_RepeatReq_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "op_RepeatReq_MA_Request.c" -o "win32\op_RepeatReq_MA_Request.o"

win32/MOD_XCP_numeric.o: MOD_XCP_numeric.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MOD_XCP_numeric.c" -o "win32\MOD_XCP_numeric.o"

win32/op_3_8_2_3_b_MA_Request.o: op_3_8_2_3_b_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "op_3_8_2_3_b_MA_Request.c" -o "win32\op_3_8_2_3_b_MA_Request.o"

win32/CompareSectionTimer_MA_Request.o: CompareSectionTimer_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CompareSectionTimer_MA_Request.c" -o "win32\CompareSectionTimer_MA_Request.o"

win32/op_3_8_2_3_a_MA_Request.o: op_3_8_2_3_a_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "op_3_8_2_3_a_MA_Request.c" -o "win32\op_3_8_2_3_a_MA_Request.o"

win32/DIV_real_XCP_numeric.o: DIV_real_XCP_numeric.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "DIV_real_XCP_numeric.c" -o "win32\DIV_real_XCP_numeric.o"

win32/Build_MA_request_MA_Request.o: Build_MA_request_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_MA_request_MA_Request.c" -o "win32\Build_MA_request_MA_Request.o"

win32/Receive_MA_RequestParameters_MA_Request.o: Receive_MA_RequestParameters_MA_Request.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Receive_MA_RequestParameters_MA_Request.c" -o "win32\Receive_MA_RequestParameters_MA_Request.o"

win32/Read_P057_TM.o: Read_P057_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P057_TM.c" -o "win32\Read_P057_TM.o"

win32/C_P057_compr_onboard_TM_conversions.o: C_P057_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P057_compr_onboard_TM_conversions.c" -o "win32\C_P057_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_T_CYCRQST_TM_conversions.o: CAST_Int_to_T_CYCRQST_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_CYCRQST_TM_conversions.c" -o "win32\CAST_Int_to_T_CYCRQST_TM_conversions.o"

win32/CAST_Int_to_T_TIMEOUTRQST_TM_conversions.o: CAST_Int_to_T_TIMEOUTRQST_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_TIMEOUTRQST_TM_conversions.c" -o "win32\CAST_Int_to_T_TIMEOUTRQST_TM_conversions.o"

win32/CAST_Int_to_T_MAR_TM_conversions.o: CAST_Int_to_T_MAR_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_MAR_TM_conversions.c" -o "win32\CAST_Int_to_T_MAR_TM_conversions.o"

win32/C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.o: C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.c" -o "win32\C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.o"

win32/C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.o: C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.c" -o "win32\C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.o"

win32/GradientProfile_to_DMI_TA_Export.o: GradientProfile_to_DMI_TA_Export.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GradientProfile_to_DMI_TA_Export.c" -o "win32\GradientProfile_to_DMI_TA_Export.o"

win32/GradientProfile_to_DMI_loop_TA_Export.o: GradientProfile_to_DMI_loop_TA_Export.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GradientProfile_to_DMI_loop_TA_Export.c" -o "win32\GradientProfile_to_DMI_loop_TA_Export.o"

win32/StoreRaw_NV_TA_Storage.o: StoreRaw_NV_TA_Storage.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "StoreRaw_NV_TA_Storage.c" -o "win32\StoreRaw_NV_TA_Storage.o"

win32/NV_storage_TA_Storage.o: NV_storage_TA_Storage.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "NV_storage_TA_Storage.c" -o "win32\NV_storage_TA_Storage.o"

win32/Read_P003V1_TM_baseline2.o: Read_P003V1_TM_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P003V1_TM_baseline2.c" -o "win32\Read_P003V1_TM_baseline2.o"

win32/C_P003V1_compr_onboard_TM_conversions_baseline2.o: C_P003V1_compr_onboard_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_compr_onboard_TM_conversions_baseline2.c" -o "win32\C_P003V1_compr_onboard_TM_conversions_baseline2.o"

win32/CAST_Int_to_D_NVSTFF_TM_conversions.o: CAST_Int_to_D_NVSTFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVSTFF_TM_conversions.c" -o "win32\CAST_Int_to_D_NVSTFF_TM_conversions.o"

win32/CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.o: CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.c" -o "win32\CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.o"

win32/CAST_Int_to_M_NVDERUN_TM_conversions.o: CAST_Int_to_M_NVDERUN_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_NVDERUN_TM_conversions.c" -o "win32\CAST_Int_to_M_NVDERUN_TM_conversions.o"

win32/CAST_Int_to_T_NVCONTACT_TM_conversions.o: CAST_Int_to_T_NVCONTACT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_NVCONTACT_TM_conversions.c" -o "win32\CAST_Int_to_T_NVCONTACT_TM_conversions.o"

win32/CAST_Int_to_M_NVCONTACT_TM_conversions.o: CAST_Int_to_M_NVCONTACT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_M_NVCONTACT_TM_conversions.c" -o "win32\CAST_Int_to_M_NVCONTACT_TM_conversions.o"

win32/CAST_Int_to_D_NVPOTRP_TM_conversions.o: CAST_Int_to_D_NVPOTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVPOTRP_TM_conversions.c" -o "win32\CAST_Int_to_D_NVPOTRP_TM_conversions.o"

win32/CAST_Int_to_Q_NVEMRRLS_TM_conversions.o: CAST_Int_to_Q_NVEMRRLS_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_NVEMRRLS_TM_conversions.c" -o "win32\CAST_Int_to_Q_NVEMRRLS_TM_conversions.o"

win32/CAST_Int_to_T_NVOVTRP_TM_conversions.o: CAST_Int_to_T_NVOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_NVOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_T_NVOVTRP_TM_conversions.o"

win32/CAST_Int_to_D_NVOVTRP_TM_conversions.o: CAST_Int_to_D_NVOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_D_NVOVTRP_TM_conversions.o"

win32/CAST_Int_to_V_NVSUPOVTRP_TM_conversions.o: CAST_Int_to_V_NVSUPOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVSUPOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_V_NVSUPOVTRP_TM_conversions.o"

win32/CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.o: CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.c" -o "win32\CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.o"

win32/CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.o: CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.c" -o "win32\CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.o"

win32/CAST_Int_to_D_NVROLL_TM_conversions.o: CAST_Int_to_D_NVROLL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_NVROLL_TM_conversions.c" -o "win32\CAST_Int_to_D_NVROLL_TM_conversions.o"

win32/CAST_Int_to_V_NVREL_TM_conversions.o: CAST_Int_to_V_NVREL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVREL_TM_conversions.c" -o "win32\CAST_Int_to_V_NVREL_TM_conversions.o"

win32/CAST_Int_to_V_NVUNFIT_TM_conversions.o: CAST_Int_to_V_NVUNFIT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVUNFIT_TM_conversions.c" -o "win32\CAST_Int_to_V_NVUNFIT_TM_conversions.o"

win32/CAST_Int_to_V_NVONSIGHT_TM_conversions.o: CAST_Int_to_V_NVONSIGHT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVONSIGHT_TM_conversions.c" -o "win32\CAST_Int_to_V_NVONSIGHT_TM_conversions.o"

win32/CAST_Int_to_V_NVSTFF_TM_conversions.o: CAST_Int_to_V_NVSTFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVSTFF_TM_conversions.c" -o "win32\CAST_Int_to_V_NVSTFF_TM_conversions.o"

win32/CAST_Int_to_V_NVSHUNT_TM_conversions.o: CAST_Int_to_V_NVSHUNT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_NVSHUNT_TM_conversions.c" -o "win32\CAST_Int_to_V_NVSHUNT_TM_conversions.o"

win32/CAST_Int_to_D_VALIDNV_TM_conversions.o: CAST_Int_to_D_VALIDNV_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_VALIDNV_TM_conversions.c" -o "win32\CAST_Int_to_D_VALIDNV_TM_conversions.o"

win32/C_P003V1_unflatten_sections_TM_lib_internal.o: C_P003V1_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_unflatten_sections_TM_lib_internal.c" -o "win32\C_P003V1_unflatten_sections_TM_lib_internal.o"

win32/C_P003V1_us_array_TM_lib_internal.o: C_P003V1_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_us_array_TM_lib_internal.c" -o "win32\C_P003V1_us_array_TM_lib_internal.o"

win32/CAST_Int_to_NID_C_TM_conversions.o: CAST_Int_to_NID_C_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NID_C_TM_conversions.c" -o "win32\CAST_Int_to_NID_C_TM_conversions.o"

win32/C_P003V1_extract_el_section_TM_lib_internal.o: C_P003V1_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P003V1_extract_el_section_TM_lib_internal.c" -o "win32\C_P003V1_extract_el_section_TM_lib_internal.o"

win32/Build_MRSP_TA_MRSP.o: Build_MRSP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_MRSP_TA_MRSP.c" -o "win32\Build_MRSP_TA_MRSP.o"

win32/SP_TSR_TA_SpeedProfiles.o: SP_TSR_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_TSR_TA_SpeedProfiles.c" -o "win32\SP_TSR_TA_SpeedProfiles.o"

win32/SP_STM_SystemSpeed_TA_SpeedProfiles.o: SP_STM_SystemSpeed_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_STM_SystemSpeed_TA_SpeedProfiles.c" -o "win32\SP_STM_SystemSpeed_TA_SpeedProfiles.o"

win32/SP_STM_MaxSpeed_TA_SpeedProfiles.o: SP_STM_MaxSpeed_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_STM_MaxSpeed_TA_SpeedProfiles.c" -o "win32\SP_STM_MaxSpeed_TA_SpeedProfiles.o"

win32/Build_StaticSpeedProfile_TA_SSP.o: Build_StaticSpeedProfile_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_StaticSpeedProfile_TA_SSP.c" -o "win32\Build_StaticSpeedProfile_TA_SSP.o"

win32/SSP_Postprocessing_TA_SSP.o: SSP_Postprocessing_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Postprocessing_TA_SSP.c" -o "win32\SSP_Postprocessing_TA_SSP.o"

win32/SSP_Position_SSP_with_BGs_TA_SSP.o: SSP_Position_SSP_with_BGs_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Position_SSP_with_BGs_TA_SSP.c" -o "win32\SSP_Position_SSP_with_BGs_TA_SSP.o"

win32/SSP_Truncate_at_BG_TA_SSP.o: SSP_Truncate_at_BG_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Truncate_at_BG_TA_SSP.c" -o "win32\SSP_Truncate_at_BG_TA_SSP.o"

win32/SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.o: SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.c" -o "win32\SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.o"

win32/SSP_Truncate_at_BG_loop_TA_SSP.o: SSP_Truncate_at_BG_loop_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Truncate_at_BG_loop_TA_SSP.c" -o "win32\SSP_Truncate_at_BG_loop_TA_SSP.o"

win32/SSP_Normalize_Profile_TA_SSP.o: SSP_Normalize_Profile_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Normalize_Profile_TA_SSP.c" -o "win32\SSP_Normalize_Profile_TA_SSP.o"

win32/SSP_Normalize_Profile_loop_TA_SSP.o: SSP_Normalize_Profile_loop_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Normalize_Profile_loop_TA_SSP.c" -o "win32\SSP_Normalize_Profile_loop_TA_SSP.o"

win32/SSP_Merge_New_P27V1_to_Profile_TA_SSP.o: SSP_Merge_New_P27V1_to_Profile_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Merge_New_P27V1_to_Profile_TA_SSP.c" -o "win32\SSP_Merge_New_P27V1_to_Profile_TA_SSP.o"

win32/SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.o: SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.c" -o "win32\SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.o"

win32/FindStartOfNewSpeedProfileAbs_TA_Lib_internal.o: FindStartOfNewSpeedProfileAbs_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "FindStartOfNewSpeedProfileAbs_TA_Lib_internal.c" -o "win32\FindStartOfNewSpeedProfileAbs_TA_Lib_internal.o"

win32/FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.o: FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.c" -o "win32\FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.o"

win32/SSP_Preprocessing_TA_SSP.o: SSP_Preprocessing_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Preprocessing_TA_SSP.c" -o "win32\SSP_Preprocessing_TA_SSP.o"

win32/SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.o: SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.c" -o "win32\SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.o"

win32/SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.o: SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.c" -o "win32\SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.o"

win32/Eval_Q_Front_TA_Lib_internal.o: Eval_Q_Front_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Eval_Q_Front_TA_Lib_internal.c" -o "win32\Eval_Q_Front_TA_Lib_internal.o"

win32/Normalize_Distance_d_internal_t_TA_Lib_internal.o: Normalize_Distance_d_internal_t_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Normalize_Distance_d_internal_t_TA_Lib_internal.c" -o "win32\Normalize_Distance_d_internal_t_TA_Lib_internal.o"

win32/MoveSSPSectionsAbsolute_TA_Lib_internal.o: MoveSSPSectionsAbsolute_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MoveSSPSectionsAbsolute_TA_Lib_internal.c" -o "win32\MoveSSPSectionsAbsolute_TA_Lib_internal.o"

win32/MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.o: MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.c" -o "win32\MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.o"

win32/Eval_LRBG_TA_Lib_internal.o: Eval_LRBG_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Eval_LRBG_TA_Lib_internal.c" -o "win32\Eval_LRBG_TA_Lib_internal.o"

win32/Read_P027V1_TM_baseline2.o: Read_P027V1_TM_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P027V1_TM_baseline2.c" -o "win32\Read_P027V1_TM_baseline2.o"

win32/Read_P027V1_sections_TM_baseline2.o: Read_P027V1_sections_TM_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P027V1_sections_TM_baseline2.c" -o "win32\Read_P027V1_sections_TM_baseline2.o"

win32/C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.o: C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.c" -o "win32\C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.o"

win32/CAST_Int_to_V_STATIC_TM_conversions.o: CAST_Int_to_V_STATIC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_STATIC_TM_conversions.c" -o "win32\CAST_Int_to_V_STATIC_TM_conversions.o"

win32/CAST_Int_to_Q_FRONT_TM_conversions.o: CAST_Int_to_Q_FRONT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_FRONT_TM_conversions.c" -o "win32\CAST_Int_to_Q_FRONT_TM_conversions.o"

win32/CAST_Int_to_D_STATIC_TM_conversions.o: CAST_Int_to_D_STATIC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_STATIC_TM_conversions.c" -o "win32\CAST_Int_to_D_STATIC_TM_conversions.o"

win32/C_P027V1_us_array_qdiff_TM_lib_internal.o: C_P027V1_us_array_qdiff_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_us_array_qdiff_TM_lib_internal.c" -o "win32\C_P027V1_us_array_qdiff_TM_lib_internal.o"

win32/CAST_Int_to_V_DIFF_TM_conversions.o: CAST_Int_to_V_DIFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_DIFF_TM_conversions.c" -o "win32\CAST_Int_to_V_DIFF_TM_conversions.o"

win32/CAST_Int_to_NC_DIFF_TM_conversions.o: CAST_Int_to_NC_DIFF_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_NC_DIFF_TM_conversions.c" -o "win32\CAST_Int_to_NC_DIFF_TM_conversions.o"

win32/C_P027V1_extract_el_section_TM_lib_internal.o: C_P027V1_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P027V1_extract_el_section_TM_lib_internal.c" -o "win32\C_P027V1_extract_el_section_TM_lib_internal.o"

win32/T_Decode_Metadata_L2_TM_lib_internal.o: T_Decode_Metadata_L2_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Decode_Metadata_L2_TM_lib_internal.c" -o "win32\T_Decode_Metadata_L2_TM_lib_internal.o"

win32/SP_SignalingRelated_TA_SpeedProfiles.o: SP_SignalingRelated_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_SignalingRelated_TA_SpeedProfiles.c" -o "win32\SP_SignalingRelated_TA_SpeedProfiles.o"

win32/SP_PBD_SR_TA_SpeedProfiles.o: SP_PBD_SR_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_PBD_SR_TA_SpeedProfiles.c" -o "win32\SP_PBD_SR_TA_SpeedProfiles.o"

win32/SP_OverrideRelated_TA_SpeedProfiles.o: SP_OverrideRelated_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_OverrideRelated_TA_SpeedProfiles.c" -o "win32\SP_OverrideRelated_TA_SpeedProfiles.o"

win32/SP_ModeRelated_TA_SpeedProfiles.o: SP_ModeRelated_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_ModeRelated_TA_SpeedProfiles.c" -o "win32\SP_ModeRelated_TA_SpeedProfiles.o"

win32/SP_MaxTrainSpeed_TA_SpeedProfiles.o: SP_MaxTrainSpeed_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_MaxTrainSpeed_TA_SpeedProfiles.c" -o "win32\SP_MaxTrainSpeed_TA_SpeedProfiles.o"

win32/SP_LX_SR_TA_SpeedProfiles.o: SP_LX_SR_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_LX_SR_TA_SpeedProfiles.c" -o "win32\SP_LX_SR_TA_SpeedProfiles.o"

win32/SP_ASP_TA_SpeedProfiles.o: SP_ASP_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SP_ASP_TA_SpeedProfiles.c" -o "win32\SP_ASP_TA_SpeedProfiles.o"

win32/Build_SSP_Matrix_TA_SpeedProfiles.o: Build_SSP_Matrix_TA_SpeedProfiles.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_SSP_Matrix_TA_SpeedProfiles.c" -o "win32\Build_SSP_Matrix_TA_SpeedProfiles.o"

win32/Calculate_MRSP_TA_MRSP.o: Calculate_MRSP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Calculate_MRSP_TA_MRSP.c" -o "win32\Calculate_MRSP_TA_MRSP.o"

win32/MRSP_Determine_LengthOfTargetList_TA_MRSP.o: MRSP_Determine_LengthOfTargetList_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Determine_LengthOfTargetList_TA_MRSP.c" -o "win32\MRSP_Determine_LengthOfTargetList_TA_MRSP.o"

win32/MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.o: MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.c" -o "win32\MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.o"

win32/MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP.o: MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP.c" -o "win32\MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP.o"

win32/MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP.o: MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP.c" -o "win32\MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP.o"

win32/MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.o: MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.c" -o "win32\MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.o"

win32/MRSP_Build_MRSP_LOOP_TA_MRSP.o: MRSP_Build_MRSP_LOOP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Build_MRSP_LOOP_TA_MRSP.c" -o "win32\MRSP_Build_MRSP_LOOP_TA_MRSP.o"

win32/MRSP_Determine_MRS_TA_MRSP.o: MRSP_Determine_MRS_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Determine_MRS_TA_MRSP.c" -o "win32\MRSP_Determine_MRS_TA_MRSP.o"

win32/MRSP_Determine_Lowest_Speed_TA_MRSP.o: MRSP_Determine_Lowest_Speed_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Determine_Lowest_Speed_TA_MRSP.c" -o "win32\MRSP_Determine_Lowest_Speed_TA_MRSP.o"

win32/MRSP_DetermineRelevantSpeedperCat_TA_MRSP.o: MRSP_DetermineRelevantSpeedperCat_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_DetermineRelevantSpeedperCat_TA_MRSP.c" -o "win32\MRSP_DetermineRelevantSpeedperCat_TA_MRSP.o"

win32/MRSP_FindLastSSPSection_TA_MRSP.o: MRSP_FindLastSSPSection_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_FindLastSSPSection_TA_MRSP.c" -o "win32\MRSP_FindLastSSPSection_TA_MRSP.o"

win32/MRSP_FindLastSSPSection_LOOP_TA_MRSP.o: MRSP_FindLastSSPSection_LOOP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_FindLastSSPSection_LOOP_TA_MRSP.c" -o "win32\MRSP_FindLastSSPSection_LOOP_TA_MRSP.o"

win32/MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.o: MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.c" -o "win32\MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.o"

win32/MRSP_BuildTargetList_TA_MRSP.o: MRSP_BuildTargetList_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_BuildTargetList_TA_MRSP.c" -o "win32\MRSP_BuildTargetList_TA_MRSP.o"

win32/MRSP_BuildTargetList_LOOP_TA_MRSP.o: MRSP_BuildTargetList_LOOP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_BuildTargetList_LOOP_TA_MRSP.c" -o "win32\MRSP_BuildTargetList_LOOP_TA_MRSP.o"

win32/MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.o: MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.c" -o "win32\MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.o"

win32/MRSP_FindMax_of_all_t_cats_TA_MRSP.o: MRSP_FindMax_of_all_t_cats_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_FindMax_of_all_t_cats_TA_MRSP.c" -o "win32\MRSP_FindMax_of_all_t_cats_TA_MRSP.o"

win32/MRSP_ConvertIndexedElements_TA_MRSP.o: MRSP_ConvertIndexedElements_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_ConvertIndexedElements_TA_MRSP.c" -o "win32\MRSP_ConvertIndexedElements_TA_MRSP.o"

win32/MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.o: MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.c" -o "win32\MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.o"

win32/MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.o: MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.c" -o "win32\MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.o"

win32/MRSP_Find_First_in_SSP_t_cat_TA_MRSP.o: MRSP_Find_First_in_SSP_t_cat_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Find_First_in_SSP_t_cat_TA_MRSP.c" -o "win32\MRSP_Find_First_in_SSP_t_cat_TA_MRSP.o"

win32/MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.o: MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.c" -o "win32\MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.o"

win32/Build_MA_TA_MA.o: Build_MA_TA_MA.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Build_MA_TA_MA.c" -o "win32\Build_MA_TA_MA.o"

win32/StoreRaw_MA_TA_MA.o: StoreRaw_MA_TA_MA.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "StoreRaw_MA_TA_MA.c" -o "win32\StoreRaw_MA_TA_MA.o"

win32/MA_storage_TA_MA.o: MA_storage_TA_MA.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MA_storage_TA_MA.c" -o "win32\MA_storage_TA_MA.o"

win32/Read_P015_TM.o: Read_P015_TM.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Read_P015_TM.c" -o "win32\Read_P015_TM.o"

win32/C_P015_compr_onboard_TM_conversions.o: C_P015_compr_onboard_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_compr_onboard_TM_conversions.c" -o "win32\C_P015_compr_onboard_TM_conversions.o"

win32/CAST_Int_to_D_STARTOL_TM_conversions.o: CAST_Int_to_D_STARTOL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_STARTOL_TM_conversions.c" -o "win32\CAST_Int_to_D_STARTOL_TM_conversions.o"

win32/CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.o: CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.c" -o "win32\CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.o"

win32/CAST_Int_to_V_RELEASEOL_TM_conversions.o: CAST_Int_to_V_RELEASEOL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_RELEASEOL_TM_conversions.c" -o "win32\CAST_Int_to_V_RELEASEOL_TM_conversions.o"

win32/CAST_Int_to_L_ENDSECTION_TM_conversions.o: CAST_Int_to_L_ENDSECTION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_ENDSECTION_TM_conversions.c" -o "win32\CAST_Int_to_L_ENDSECTION_TM_conversions.o"

win32/CAST_Int_to_V_RELEASEDP_TM_conversions.o: CAST_Int_to_V_RELEASEDP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_RELEASEDP_TM_conversions.c" -o "win32\CAST_Int_to_V_RELEASEDP_TM_conversions.o"

win32/CAST_Int_to_Q_ENDTIMER_TM_conversions.o: CAST_Int_to_Q_ENDTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_ENDTIMER_TM_conversions.c" -o "win32\CAST_Int_to_Q_ENDTIMER_TM_conversions.o"

win32/CAST_Int_to_T_OL_TM_conversions.o: CAST_Int_to_T_OL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_OL_TM_conversions.c" -o "win32\CAST_Int_to_T_OL_TM_conversions.o"

win32/CAST_Int_to_T_LOA_TM_conversions.o: CAST_Int_to_T_LOA_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_LOA_TM_conversions.c" -o "win32\CAST_Int_to_T_LOA_TM_conversions.o"

win32/CAST_Int_to_Q_DANGERPOINT_TM_conversions.o: CAST_Int_to_Q_DANGERPOINT_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_DANGERPOINT_TM_conversions.c" -o "win32\CAST_Int_to_Q_DANGERPOINT_TM_conversions.o"

win32/CAST_Int_to_Q_OVERLAP_TM_conversions.o: CAST_Int_to_Q_OVERLAP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_OVERLAP_TM_conversions.c" -o "win32\CAST_Int_to_Q_OVERLAP_TM_conversions.o"

win32/C_P015_unflatten_sections_TM_lib_internal.o: C_P015_unflatten_sections_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_unflatten_sections_TM_lib_internal.c" -o "win32\C_P015_unflatten_sections_TM_lib_internal.o"

win32/C_P015_us_array_TM_lib_internal.o: C_P015_us_array_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_us_array_TM_lib_internal.c" -o "win32\C_P015_us_array_TM_lib_internal.o"

win32/CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.o: CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.c" -o "win32\CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.o"

win32/CAST_Int_to_Q_SECTIONTIMER_TM_conversions.o: CAST_Int_to_Q_SECTIONTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_Q_SECTIONTIMER_TM_conversions.c" -o "win32\CAST_Int_to_Q_SECTIONTIMER_TM_conversions.o"

win32/CAST_Int_to_T_SECTIONTIMER_TM_conversions.o: CAST_Int_to_T_SECTIONTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_SECTIONTIMER_TM_conversions.c" -o "win32\CAST_Int_to_T_SECTIONTIMER_TM_conversions.o"

win32/CAST_Int_to_L_SECTION_TM_conversions.o: CAST_Int_to_L_SECTION_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_L_SECTION_TM_conversions.c" -o "win32\CAST_Int_to_L_SECTION_TM_conversions.o"

win32/C_P015_extract_el_section_TM_lib_internal.o: C_P015_extract_el_section_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C_P015_extract_el_section_TM_lib_internal.c" -o "win32\C_P015_extract_el_section_TM_lib_internal.o"

win32/CAST_Int_to_T_ENDTIMER_TM_conversions.o: CAST_Int_to_T_ENDTIMER_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_T_ENDTIMER_TM_conversions.c" -o "win32\CAST_Int_to_T_ENDTIMER_TM_conversions.o"

win32/CAST_Int_to_V_LOA_TM_conversions.o: CAST_Int_to_V_LOA_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_V_LOA_TM_conversions.c" -o "win32\CAST_Int_to_V_LOA_TM_conversions.o"

win32/CAST_Int_to_D_OL_TM_conversions.o: CAST_Int_to_D_OL_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_OL_TM_conversions.c" -o "win32\CAST_Int_to_D_OL_TM_conversions.o"

win32/CAST_Int_to_D_DP_TM_conversions.o: CAST_Int_to_D_DP_TM_conversions.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CAST_Int_to_D_DP_TM_conversions.c" -o "win32\CAST_Int_to_D_DP_TM_conversions.o"

win32/RECV_ReadPackets_TM_lib_internal.o: RECV_ReadPackets_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_ReadPackets_TM_lib_internal.c" -o "win32\RECV_ReadPackets_TM_lib_internal.o"

win32/RECV_ReadPacketKernel_TM_lib_internal.o: RECV_ReadPacketKernel_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_ReadPacketKernel_TM_lib_internal.c" -o "win32\RECV_ReadPacketKernel_TM_lib_internal.o"

win32/RECV_ReadPacketKernelLoop_TM_lib_internal.o: RECV_ReadPacketKernelLoop_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_ReadPacketKernelLoop_TM_lib_internal.c" -o "win32\RECV_ReadPacketKernelLoop_TM_lib_internal.o"

win32/RECV_LookupPacket_TM_lib_internal.o: RECV_LookupPacket_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_LookupPacket_TM_lib_internal.c" -o "win32\RECV_LookupPacket_TM_lib_internal.o"

win32/RECV_LookupPacketLoop_TM_lib_internal.o: RECV_LookupPacketLoop_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RECV_LookupPacketLoop_TM_lib_internal.c" -o "win32\RECV_LookupPacketLoop_TM_lib_internal.o"

win32/T_Filter_Metadata_TM_lib_internal.o: T_Filter_Metadata_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Filter_Metadata_TM_lib_internal.c" -o "win32\T_Filter_Metadata_TM_lib_internal.o"

win32/T_Filter_Metadata_Element_TM_lib_internal.o: T_Filter_Metadata_Element_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Filter_Metadata_Element_TM_lib_internal.c" -o "win32\T_Filter_Metadata_Element_TM_lib_internal.o"

win32/T_Decode_metadata_new_TM_lib_internal.o: T_Decode_metadata_new_TM_lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "T_Decode_metadata_new_TM_lib_internal.c" -o "win32\T_Decode_metadata_new_TM_lib_internal.o"

win32/Decode_P015_TA_MA.o: Decode_P015_TA_MA.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Decode_P015_TA_MA.c" -o "win32\Decode_P015_TA_MA.o"

win32/CombineSections_TA_MA.o: CombineSections_TA_MA.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CombineSections_TA_MA.c" -o "win32\CombineSections_TA_MA.o"

win32/DecodeEndsection_TA_MA.o: DecodeEndsection_TA_MA.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "DecodeEndsection_TA_MA.c" -o "win32\DecodeEndsection_TA_MA.o"

win32/EVAL_Q_OVERLAP_TA_Lib_internal.o: EVAL_Q_OVERLAP_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EVAL_Q_OVERLAP_TA_Lib_internal.c" -o "win32\EVAL_Q_OVERLAP_TA_Lib_internal.o"

win32/EVAL_V_Release_TA_Lib_internal.o: EVAL_V_Release_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EVAL_V_Release_TA_Lib_internal.c" -o "win32\EVAL_V_Release_TA_Lib_internal.o"

win32/EVAL_Q_DANGERPOINT_TA_Lib_internal.o: EVAL_Q_DANGERPOINT_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EVAL_Q_DANGERPOINT_TA_Lib_internal.c" -o "win32\EVAL_Q_DANGERPOINT_TA_Lib_internal.o"

win32/EVAL_T_LOA_TA_Lib_internal.o: EVAL_T_LOA_TA_Lib_internal.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EVAL_T_LOA_TA_Lib_internal.c" -o "win32\EVAL_T_LOA_TA_Lib_internal.o"

win32/Eval_Q_SCALE_TA_MRSP.o: Eval_Q_SCALE_TA_MRSP.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Eval_Q_SCALE_TA_MRSP.c" -o "win32\Eval_Q_SCALE_TA_MRSP.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_consts.c" -o "win32\kcg_consts.o"

win32/TestTrackAtlas_newtype.o: TestTrackAtlas_newtype.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TestTrackAtlas_newtype.c" -o "win32\TestTrackAtlas_newtype.o"

win32/TestTrackAtlas_newmapping.o: TestTrackAtlas_newmapping.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TestTrackAtlas_newmapping.c" -o "win32\TestTrackAtlas_newmapping.o"

win32/TestTrackAtlas_newinterface.o: TestTrackAtlas_newinterface.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TestTrackAtlas_newinterface.c" -o "win32\TestTrackAtlas_newinterface.o"

win32/SmuProxy.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuProxy.c" -o "win32\SmuProxy.o"

win32/NewSmuTypes.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/NewSmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\NewSmuTypes.c" -o "win32\NewSmuTypes.o"

win32/SmuConverter.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuConverter.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuConverter.c" -o "win32\SmuConverter.o"

TestTrackAtlas.dll: win32/TestTrackAtlas.o win32/SimTrainPos.o win32/ConvertReceivedMess.o win32/TestTrackTrackAtlasLegacy_Internal_Tests.o win32/compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/M028_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M028_TM_RBC_conversions.o win32/M032_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M032_TM_RBC_conversions.o win32/CAST_Int_to_M_VERSION_TM_conversions.o win32/C_header_to_M033_TM_RBC_conversions.o win32/M033_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M034_TM_RBC_conversions.o win32/CAST_Int_to_D_TAFDISPLAY_TM_conversions.o win32/CAST_Int_to_L_TAFDISPLAY_TM_conversions.o win32/M034_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M038_TM_RBC_conversions.o win32/M038_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M039_TM_RBC_conversions.o win32/M039_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/M040_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M040_TM_RBC_conversions.o win32/M041_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M041_TM_RBC_conversions.o win32/C_header_to_M043_TM_RBC_conversions.o win32/M043_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M045_TM_RBC_conversions.o win32/CAST_Int_to_Q_ORIENTATION_TM_conversions.o win32/M045_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/M002_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M002_TM_RBC_conversions.o win32/CAST_Int_to_D_SR_TM_conversions.o win32/C_header_to_M003_TM_RBC_conversions.o win32/M003_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M006_TM_RBC_conversions.o win32/M006_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M008_TM_RBC_conversions.o win32/M008_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M009_TM_RBC_conversions.o win32/M009_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/M015_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M015_TM_RBC_conversions.o win32/CAST_Int_to_D_EMERGENCYSTOP_TM_conversions.o win32/CAST_Int_to_D_REF_TM_conversions.o win32/M016_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M016_TM_RBC_conversions.o win32/C_header_to_M018_TM_RBC_conversions.o win32/CAST_Int_to_NID_EM_TM_conversions.o win32/M018_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M024_TM_RBC_conversions.o win32/M024_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_header_to_M027_TM_RBC_conversions.o win32/CAST_Int_to_L_MESSAGE_TM_conversions.o win32/CAST_Int_to_NID_MESSAGE_TM_conversions.o win32/CAST_Int_to_T_TRAIN_TM_conversions.o win32/CAST_Int_to_NID_LRBG_TM_conversions.o win32/CAST_Int_to_M_ACK_TM_conversions.o win32/M027_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.o win32/C_TrackTrainMessage_to_Int_TM_conversions.o win32/CAST_D_EMERGENCYSTOP_to_int_TM_conversions.o win32/CAST_M_VERSION_to_int_TM_conversions.o win32/CAST_Q_DIR_to_int_TM_conversions.o win32/CAST_D_REF_to_int_TM_conversions.o win32/CAST_D_SR_to_int_TM_conversions.o win32/CAST_Q_SCALE_to_int_TM_conversions.o win32/CAST_NID_EM_to_int_TM_conversions.o win32/CAST_NID_LRBG_to_int_TM_conversions.o win32/CAST_M_ACK_to_int_TM_conversions.o win32/CAST_T_TRAIN_to_int_TM_conversions.o win32/TestTrackTrackAtlas_Internal_Tests.o win32/RBC_init_RadioLib.o win32/RBC_close_RadioLib.o win32/Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Build_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/SendRadioPackets_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Build_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Build_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/SendRadioPackets_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Build_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Send_M003_JRU_MessageLibBaseline2.o win32/C_M003_int__to_header_TM_RBC_conversions.o win32/SendRadioPackets_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.o win32/Send_P015_MessageLibBaseline2.o win32/Write_P015_TM_trackside.o win32/C_P015_tracksim_compr_TM_conversions.o win32/C_P015_flatten_sections_TM_lib_internal.o win32/C_P015_fs_struct_to_array_TM_lib_internal.o win32/C_P015_fs_flatten_array_TM_lib_internal.o win32/Send_P065_MessageLibBaseline2.o win32/Write_P065_TM_trackside.o win32/C_P065_tracksim_compr_TM_conversions.o win32/Send_P041_MessageLibBaseline2.o win32/Write_P041_TM_trackside.o win32/C_P041_tracksim_compr_TM_conversions.o win32/C_P041_flatten_sections_TM_lib_internal.o win32/C_P041_fs_struct_to_array_TM_lib_internal.o win32/C_P041_fs_flatten_array_TM_lib_internal.o win32/Send_P005_MessageLibBaseline2.o win32/Write_P005_TM_trackside.o win32/C_P005_tracksim_compr_TM_conversions.o win32/C_P005_flatten_sections_TM_lib_internal.o win32/C_P005_fs_struct_to_array_TM_lib_internal.o win32/C_P005_fs_flatten_array_TM_lib_internal.o win32/Send_P003V1_MessageLibBaseline2.o win32/Write_P003V1_TM_trackside_baseline2.o win32/C_P003V1_tracksim_compr_TM_conversions_baseline2.o win32/Send_P027V1_MessageLibBaseline2.o win32/Write_P027V1_TM_trackside_baseline2.o win32/C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.o win32/C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.o win32/C_P027_flatten_sections_qdiff_TM_lib_internal.o win32/C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.o win32/C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.o win32/C_P027V1_tracksim_compr_body_TM_conversions_baseline2.o win32/SEND_WriteMessageHeader_TM_lib_internal.o win32/Send_P021_MessageLibBaseline2.o win32/Write_P021_TM_trackside.o win32/C_P021_tracksim_compr_TM_conversions.o win32/T_Build_Metadata_Packet_ID_TM_lib_internal.o win32/C_P021_flatten_sections_TM_lib_internal.o win32/C_P021_fs_struct_to_array_TM_lib_internal.o win32/C_P021_fs_flatten_array_TM_lib_internal.o win32/T_DeterminePacketSizeInt_TM_lib_internal.o win32/SEND_MessageData_TM_lib_internal.o win32/SEND_WriteBaliseDataElement_TM_lib_internal.o win32/SEND_WriteBaliseMessageHeader_TM_lib_internal.o win32/SEND_FindSlot_TM_lib_internal.o win32/TrackAtlas_TrackAtlas.o win32/WA_Speed_NTC_TrackAtlas.o win32/SSP_to_MRSP_TA_Export.o win32/Build_GradientProfile_TA_Gradient.o win32/GP_Postprocessing_TA_Gradient.o win32/GP_Position_GP_with_BGs_TA_Gradient.o win32/GP_Correct_StartSection_TA_Gradient.o win32/GP_Truncate_at_BG_TA_Gradient.o win32/GP_Find_First_Gsection_After_BG_loop_TA_Gradient.o win32/GP_Truncate_at_BG_loop_TA_Gradient.o win32/GP_Normalize_Profile_TA_Gradient.o win32/GP_Normalize_Profile_loop_TA_Gradient.o win32/GP_Merge_New_P21_to_Profile_TA_Gradient.o win32/GP_Merge_New_P21_to_Profile_loop_TA_Gradient.o win32/FindStartOfNewGradientProfileAbs_TA_Lib_internal.o win32/FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.o win32/GP_Preprocessing_TA_Gradient.o win32/GP_Convert_P21_to_DistanceProfile_TA_Gradient.o win32/GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.o win32/EVAL_Q_GDIR_TA_Lib_internal.o win32/MoveGPSectionsAbsolute_TA_Lib_internal.o win32/MoveGPSectionsAbsolute_Loop_TA_Lib_internal.o win32/Manage_EmergencyStop_TA_EmergencyStop.o win32/ES_Process_Conditional_TA_EmergencyStop.o win32/ES_AcceptOrReject_CES_TA_EmergencyStop.o win32/ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.o win32/ES_Build_Acknowledgement_TA_EmergencyStop.o win32/ES_Process_Unconditional_TA_EmergencyStop.o win32/Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.o win32/NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.o win32/NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.o win32/NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.o win32/ES_ExtractMsgParams_TA_EmergencyStop.o win32/ES_ReceiveAndControl_TA_EmergencyStop.o win32/ES_Filter_Messages_TA_EmergencyStop.o win32/TA_to_ML_TA_Export.o win32/Read_P012_TM.o win32/C_P012_compr_onboard_TM_conversions.o win32/CAST_Int_to_V_MAIN_TM_conversions.o win32/C_P012_unflatten_sections_TM_lib_internal.o win32/C_P012_us_array_TM_lib_internal.o win32/C_P012_extract_el_section_TM_lib_internal.o win32/Read_P046_Legacy_TM_specific.o win32/C_P046_to_legacy_t_TM_conversions.o win32/C_P046_to_legacy_loop_TM_conversions.o win32/Read_P046_TM.o win32/C_P046_compr_onboard_TM_conversions.o win32/C_P046_unflatten_sections_TM_lib_internal.o win32/C_P046_us_array_TM_lib_internal.o win32/C_P046_extract_el_section_TM_lib_internal.o win32/Read_P041_Legacy_TM_specific.o win32/C_P041_to_legacy_t_TM_conversions.o win32/C_P041_to_legacy_loop_TM_conversions.o win32/Read_P041_TM.o win32/C_P041_compr_onboard_TM_conversions.o win32/CAST_Int_to_D_LEVELTR_TM_conversions.o win32/C_P041_unflatten_sections_TM_lib_internal.o win32/C_P041_us_array_TM_lib_internal.o win32/CAST_Int_to_NID_NTC_TM_conversions.o win32/CAST_Int_to_L_ACKLEVELTR_TM_conversions.o win32/CAST_Int_to_M_LEVELTR_TM_conversions.o win32/C_P041_extract_el_section_TM_lib_internal.o win32/Read_P027V1_Legacy_for_ML_TM_specific.o win32/C_P027V1_legacy_for_ML_export_TM_conversions_baseline2.o win32/Read_P021_Legacy_TM_specific.o win32/C_P021_to_legacy_t_TM_conversions.o win32/C_P021_to_legacy_loop_TM_conversions.o win32/Read_P021_TM.o win32/C_P021_compr_onboard_TM_conversions.o win32/C_P021_unflatten_sections_TM_lib_internal.o win32/C_P021_us_array_TM_lib_internal.o win32/CAST_Int_to_Q_GDIR_TM_conversions.o win32/CAST_Int_to_G_A_TM_conversions.o win32/CAST_Int_to_D_GRADIENT_TM_conversions.o win32/C_P021_extract_el_section_TM_lib_internal.o win32/Read_P015_Legacy_TM_specific.o win32/C_P015_to_legacy_t_TM_conversions.o win32/C_P015_to_legacy_loop_TM_conversions.o win32/Read_P139_Legacy_TM_specific.o win32/C_P139_to_legacy_t_TM_conversions.o win32/Read_P139_TM.o win32/C_P139_compr_onboard_TM_conversions.o win32/CAST_Int_to_V_REVERSE_TM_conversions.o win32/CAST_Int_to_D_REVERSE_TM_conversions.o win32/Read_P138_Legacy_TM_specific.o win32/C_P138_to_legacy_t_TM_conversions.o win32/Read_P138_TM.o win32/C_P138_compr_onboard_TM_conversions.o win32/CAST_Int_to_L_REVERSEAREA_TM_conversions.o win32/CAST_Int_to_D_STARTREVERSE_TM_conversions.o win32/Read_P137_Legacy_TM_specific.o win32/Read_P137_TM.o win32/C_P137_compr_onboard_TM_conversions.o win32/CAST_Int_to_Q_SRSTOP_TM_conversions.o win32/Read_P135_TM.o win32/C_P135_compr_onboard_TM_conversions.o win32/CAST_NID_MESSAGE_to_int_TM_conversions.o win32/Manage_MA_Request_MA_Request.o win32/Send_MA_MA_Request.o win32/MA_Request_Supervision_MA_Request.o win32/op_RepeatReq_MA_Request.o win32/MOD_XCP_numeric.o win32/op_3_8_2_3_b_MA_Request.o win32/CompareSectionTimer_MA_Request.o win32/op_3_8_2_3_a_MA_Request.o win32/DIV_real_XCP_numeric.o win32/Build_MA_request_MA_Request.o win32/Receive_MA_RequestParameters_MA_Request.o win32/Read_P057_TM.o win32/C_P057_compr_onboard_TM_conversions.o win32/CAST_Int_to_T_CYCRQST_TM_conversions.o win32/CAST_Int_to_T_TIMEOUTRQST_TM_conversions.o win32/CAST_Int_to_T_MAR_TM_conversions.o win32/C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.o win32/C_P003V1_OBU_P003_OBU_convert_nid_c_list_TM_conversions_baseline2.o win32/GradientProfile_to_DMI_TA_Export.o win32/GradientProfile_to_DMI_loop_TA_Export.o win32/StoreRaw_NV_TA_Storage.o win32/NV_storage_TA_Storage.o win32/Read_P003V1_TM_baseline2.o win32/C_P003V1_compr_onboard_TM_conversions_baseline2.o win32/CAST_Int_to_D_NVSTFF_TM_conversions.o win32/CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions.o win32/CAST_Int_to_M_NVDERUN_TM_conversions.o win32/CAST_Int_to_T_NVCONTACT_TM_conversions.o win32/CAST_Int_to_M_NVCONTACT_TM_conversions.o win32/CAST_Int_to_D_NVPOTRP_TM_conversions.o win32/CAST_Int_to_Q_NVEMRRLS_TM_conversions.o win32/CAST_Int_to_T_NVOVTRP_TM_conversions.o win32/CAST_Int_to_D_NVOVTRP_TM_conversions.o win32/CAST_Int_to_V_NVSUPOVTRP_TM_conversions.o win32/CAST_Int_to_V_NVALLOWOVTRP_TM_conversions.o win32/CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.o win32/CAST_Int_to_D_NVROLL_TM_conversions.o win32/CAST_Int_to_V_NVREL_TM_conversions.o win32/CAST_Int_to_V_NVUNFIT_TM_conversions.o win32/CAST_Int_to_V_NVONSIGHT_TM_conversions.o win32/CAST_Int_to_V_NVSTFF_TM_conversions.o win32/CAST_Int_to_V_NVSHUNT_TM_conversions.o win32/CAST_Int_to_D_VALIDNV_TM_conversions.o win32/C_P003V1_unflatten_sections_TM_lib_internal.o win32/C_P003V1_us_array_TM_lib_internal.o win32/CAST_Int_to_NID_C_TM_conversions.o win32/C_P003V1_extract_el_section_TM_lib_internal.o win32/Build_MRSP_TA_MRSP.o win32/SP_TSR_TA_SpeedProfiles.o win32/SP_STM_SystemSpeed_TA_SpeedProfiles.o win32/SP_STM_MaxSpeed_TA_SpeedProfiles.o win32/Build_StaticSpeedProfile_TA_SSP.o win32/SSP_Postprocessing_TA_SSP.o win32/SSP_Position_SSP_with_BGs_TA_SSP.o win32/SSP_Truncate_at_BG_TA_SSP.o win32/SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP.o win32/SSP_Truncate_at_BG_loop_TA_SSP.o win32/SSP_Normalize_Profile_TA_SSP.o win32/SSP_Normalize_Profile_loop_TA_SSP.o win32/SSP_Merge_New_P27V1_to_Profile_TA_SSP.o win32/SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP.o win32/FindStartOfNewSpeedProfileAbs_TA_Lib_internal.o win32/FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.o win32/SSP_Preprocessing_TA_SSP.o win32/SSP_Convert_P27V1_to_DistanceProfile_TA_SSP.o win32/SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.o win32/Eval_Q_Front_TA_Lib_internal.o win32/Normalize_Distance_d_internal_t_TA_Lib_internal.o win32/MoveSSPSectionsAbsolute_TA_Lib_internal.o win32/MoveSSPSectionsAbsolute_Loop_TA_Lib_internal.o win32/Eval_LRBG_TA_Lib_internal.o win32/Read_P027V1_TM_baseline2.o win32/Read_P027V1_sections_TM_baseline2.o win32/C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.o win32/CAST_Int_to_V_STATIC_TM_conversions.o win32/CAST_Int_to_Q_FRONT_TM_conversions.o win32/CAST_Int_to_D_STATIC_TM_conversions.o win32/C_P027V1_us_array_qdiff_TM_lib_internal.o win32/CAST_Int_to_V_DIFF_TM_conversions.o win32/CAST_Int_to_NC_DIFF_TM_conversions.o win32/C_P027V1_extract_el_section_TM_lib_internal.o win32/T_Decode_Metadata_L2_TM_lib_internal.o win32/SP_SignalingRelated_TA_SpeedProfiles.o win32/SP_PBD_SR_TA_SpeedProfiles.o win32/SP_OverrideRelated_TA_SpeedProfiles.o win32/SP_ModeRelated_TA_SpeedProfiles.o win32/SP_MaxTrainSpeed_TA_SpeedProfiles.o win32/SP_LX_SR_TA_SpeedProfiles.o win32/SP_ASP_TA_SpeedProfiles.o win32/Build_SSP_Matrix_TA_SpeedProfiles.o win32/Calculate_MRSP_TA_MRSP.o win32/MRSP_Determine_LengthOfTargetList_TA_MRSP.o win32/MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.o win32/MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP.o win32/MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP.o win32/MRSP_SplitAndReverseSSP_LOOP2_TA_MRSP.o win32/MRSP_Build_MRSP_LOOP_TA_MRSP.o win32/MRSP_Determine_MRS_TA_MRSP.o win32/MRSP_Determine_Lowest_Speed_TA_MRSP.o win32/MRSP_DetermineRelevantSpeedperCat_TA_MRSP.o win32/MRSP_FindLastSSPSection_TA_MRSP.o win32/MRSP_FindLastSSPSection_LOOP_TA_MRSP.o win32/MRSP_DetermineRelevantSpeedperCat_LOOP_TA_MRSP.o win32/MRSP_BuildTargetList_TA_MRSP.o win32/MRSP_BuildTargetList_LOOP_TA_MRSP.o win32/MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.o win32/MRSP_FindMax_of_all_t_cats_TA_MRSP.o win32/MRSP_ConvertIndexedElements_TA_MRSP.o win32/MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.o win32/MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.o win32/MRSP_Find_First_in_SSP_t_cat_TA_MRSP.o win32/MRSP_Find_First_in_SSP_t_cat_LOOP_TA_MRSP.o win32/Build_MA_TA_MA.o win32/StoreRaw_MA_TA_MA.o win32/MA_storage_TA_MA.o win32/Read_P015_TM.o win32/C_P015_compr_onboard_TM_conversions.o win32/CAST_Int_to_D_STARTOL_TM_conversions.o win32/CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.o win32/CAST_Int_to_V_RELEASEOL_TM_conversions.o win32/CAST_Int_to_L_ENDSECTION_TM_conversions.o win32/CAST_Int_to_V_RELEASEDP_TM_conversions.o win32/CAST_Int_to_Q_ENDTIMER_TM_conversions.o win32/CAST_Int_to_T_OL_TM_conversions.o win32/CAST_Int_to_T_LOA_TM_conversions.o win32/CAST_Int_to_Q_DANGERPOINT_TM_conversions.o win32/CAST_Int_to_Q_OVERLAP_TM_conversions.o win32/C_P015_unflatten_sections_TM_lib_internal.o win32/C_P015_us_array_TM_lib_internal.o win32/CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.o win32/CAST_Int_to_Q_SECTIONTIMER_TM_conversions.o win32/CAST_Int_to_T_SECTIONTIMER_TM_conversions.o win32/CAST_Int_to_L_SECTION_TM_conversions.o win32/C_P015_extract_el_section_TM_lib_internal.o win32/CAST_Int_to_T_ENDTIMER_TM_conversions.o win32/CAST_Int_to_V_LOA_TM_conversions.o win32/CAST_Int_to_D_OL_TM_conversions.o win32/CAST_Int_to_D_DP_TM_conversions.o win32/RECV_ReadPackets_TM_lib_internal.o win32/RECV_ReadPacketKernel_TM_lib_internal.o win32/RECV_ReadPacketKernelLoop_TM_lib_internal.o win32/RECV_LookupPacket_TM_lib_internal.o win32/RECV_LookupPacketLoop_TM_lib_internal.o win32/T_Filter_Metadata_TM_lib_internal.o win32/T_Filter_Metadata_Element_TM_lib_internal.o win32/T_Decode_metadata_new_TM_lib_internal.o win32/Decode_P015_TA_MA.o win32/CombineSections_TA_MA.o win32/DecodeEndsection_TA_MA.o win32/EVAL_Q_OVERLAP_TA_Lib_internal.o win32/EVAL_V_Release_TA_Lib_internal.o win32/EVAL_Q_DANGERPOINT_TA_Lib_internal.o win32/EVAL_T_LOA_TA_Lib_internal.o win32/Eval_Q_SCALE_TA_MRSP.o win32/kcg_types.o win32/kcg_consts.o win32/TestTrackAtlas_newtype.o win32/TestTrackAtlas_newmapping.o win32/TestTrackAtlas_newinterface.o win32/SmuProxy.o win32/NewSmuTypes.o win32/SmuConverter.o SmuExport.def 
	gcc -mwindows -mwin32 -shared -static-libgcc  "@Makefile_TestTrackAtlas_objects.txt" -Wl,--output-def,"SmuExport.def" -lm -lwsock32 -m32 -o "TestTrackAtlas.dll" 

SmuExport.def: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuExport.def
	copy "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuExport.def" "SmuExport.def"

win32/TestTrackAtlas_dll.o: TestTrackAtlas_dll.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TestTrackAtlas_dll.c" -o "win32\TestTrackAtlas_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files/Esterel\ Technologies/SCADE\ R16.1/SCADE/lib/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\include" -I"..\..\..\..\..\..\..\Program Files\Esterel Technologies\SCADE R16.1\SCADE\libraries\libmathext" $(C_FLAGS) -DBUILD_DLL -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files\Esterel Technologies\SCADE R16.1\SCADE\lib\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

TestTrackAtlas.exe: win32/TestTrackAtlas_dll.o win32/SmuMainWindows.o 
	gcc "win32\TestTrackAtlas_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -m32 -o "TestTrackAtlas.exe" 

#############################################################
######    End of Makefile
#############################################################
