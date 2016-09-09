#based on the makefile of J. Kastner
SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R16.2.1\SCADE\.
SCADESRCDIR = ../udpDMI
SCADEFILES = $(wildcard $(SCADESRCDIR)/*.c) $(wildcard sdy/*.c) 
SCADEOBJS = $(subst .c,.o,$(SCADEFILES)) sdy/SDY1_DMI.a
TARGET = win32
ROOTNODE = testDMI
INCLUDES = -I"." -I"sdy" -I"$(SCADESRCDIR)" -I"$(SCADE)" -I"$(SCADE)\include" -I"..\..\..\..\DMI_Interfaces" -I"..\..\..\..\DMI_Control\SCADE Display\Widgets\D\D_Behaviour" -I"$(SCADE)\libraries\libmathext"

ifeq ($(TARGET),win32)
#CC = i686-w64-mingw32-gcc.exe
CC=gcc
RM=rm
CFLAGS = $(INCLUDES) -Os -DWINDOWS -ansi -std=c99 -m32
LDFLAGS = -lws2_32 -lm -m32
else
CFLAGS = $(INCLUDES) -Os
LDFLAGS = 
endif


udpDMI.exe: udpDMI.o bind_recv_send.o $(SCADEOBJS)
	$(CC) $^ -g -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
	
.PHONY: clean distclean

clean: 
	$(RM) -f $(SCADESRCDIR)/*.o
	$(RM) -f *.o
	$(RM) -f sdy/*.o

distclean: clean
	$(RM) -rf $(SCADESRCDIR)
