SCADE_SRCDIR = Simulation
SCADE_SOURCES = $(wildcard $(SCADE_SRCDIR)/*.c)
SCADE_OBJS = $(subst .c,.o,$(SCADE_SOURCES))
ENVSIM_DIR = ../../../../../test/EnvSim
INCLUDES = -I Simulation -I $(ENVSIM_DIR)/Scade/include -I $(ENVSIM_DIR)/Scade/ -I $(ENVSIM_DIR)/libenvsim/src/scade

CFLAGS = $(INCLUDES) 

libtestbench.a: $(SCADE_OBJS)
	ar ru $@ $^
	ranlib $@

.PHONY: clean

clean:
	rm -f $(SCADE_SRCDIR/*.o)
	rm -f *.o
	rm -f libtestbench.a
