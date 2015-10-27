#SCADESRCDIR = ../Simulation
SCADESRCDIR = ../Simulation_EnvSim
SCADEFILES = $(wildcard $(SCADESRCDIR)/*.c)
SCADEOBJS = $(subst .c,.o,$(SCADEFILES)) ../../../DMI_Interfaces/Char_to_Int.o ../../../DMI_Interfaces/Int_to_Char.o
LIBENVSIMDIR = ../../../../../../test/EnvSim/libenvsim
TARGET = win32
ROOTNODE = ROOT_Simulation
INCLUDES = -I. -I include/ -I $(SCADESRCDIR) -I $(LIBENVSIMDIR)/src/scade
# cycle duration in us
TCYCLE = 10000

ifeq ($(TARGET),win32)
CC = i686-w64-mingw32-gcc.exe
CFLAGS = $(INCLUDES) -O3 -DWINDOWS
LDFLAGS = -L $(LIBENVSIMDIR)/dist/$(TARGET) -lenvsim -ljim -lwsock32
else
CFLAGS = $(INCLUDES) -O3 -m64
LDFLAGS = -L $(LIBENVSIMDIR)/dist/$(TARGET) -lenvsim -ljim
endif


testbench: main.o libtestbench.a
	$(CC) $^ -o $@ $(LDFLAGS)

main.o: main.c
	$(CC) $(CFLAGS) -include $(SCADESRCDIR)/$(ROOTNODE)_Testbench_EnvSim.h\
	 	-DROOT_CONTEXT=outC_$(ROOTNODE)_Testbench_EnvSim -DROOT_RESET=$(ROOTNODE)_reset_Testbench_EnvSim\
	 	-DROOT_CYCLE=$(ROOTNODE)_Testbench_EnvSim -DTCYCLE=$(TCYCLE)\
	 	-c main.c

libtestbench.a: $(SCADEOBJS)
	ar ru $@ $^
	ranlib $@


.PHONY: clean distclean

clean:
	rm -f $(SCADESRCDIR)/*.o
	rm -f *.o
	rm -f libtestbench.a
	rm -f testbench
	rm -f ../../../DMI_Interfaces/Int_to_Char.o
	rm -f ../../../DMI_Interfaces/Char_to_Int.o

distclean: clean
	rm -rf $(SCADESRCDIR)
