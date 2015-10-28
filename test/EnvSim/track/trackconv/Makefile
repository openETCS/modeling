SCADESRCDIR = Scade/Simulation
SCADEFILES = $(wildcard $(SCADESRCDIR)/*.c)
SCADEOBJS = $(subst .c,.o,$(SCADEFILES))
ENVSIMDIR = ../../libenvsim
JIMDIR = ../../libenvsim/jimtcl
CFLAGS = -I. -I include -I $(SCADESRCDIR) -I $(ENVSIMDIR)/src -I $(JIMDIR) -I ../../../../model/Scade/System/OBU_PreIntegrations/Testbench_Integration/build/include -O3 -m64
LDFLAGS = -L $(ENVSIMDIR)/dist/darwin -lenvsim

trackconv: main.o libtrackconv.a
	$(CC) $^ -o $@ $(LDFLAGS)

libtrackconv.a: $(SCADEOBJS)
	ar ru $@ $^
	ranlib $@


.PHONY: clean

clean:
	rm -f $(SCADESRCDIR)/*.o
	rm -f *.o
	rm -f libtestbench.a
	rm -f testbench

distclean: clean
	rm -rf $(SCADESRCDIR)
