TODO:
modify generated Makefile (or come up with the right(R) solution)
to compile rui.c, to link it and to link -lws2_32!

win32/rui.o: ../build/rui.c
    gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R16.2.1\SCADE\include" -I"..\..\..\..\DMI_Interfaces" -I"..\..\..\..\DMI_Control\SCADE Display\Widgets\D\D_Behaviour" -I"C:\Program Files (x86)\Esterel Technologies\SCADE R16.2.1\SCADE\libraries\libmathext" -I"..\build" $(C_FLAGS) -DBUILD_DLL -c -ansi -std=c99 -m32 "../build/rui.c" -o "win32\rui.o"

testDMI.exe: [...] win32/rui.o
    gcc "@Makefile_testDMI_objects.txt" win32/rui.o -lm -lws2_32 -m32 -o "testDMI.exe"