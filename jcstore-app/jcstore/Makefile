OBJECTS=jcstore.o delay.o hash.o

DEFAULT_INCLUDES = -I.   
INCLUDES = -I ../include
DEFS ?= -DHAVE_CONFIG_H #-DDEBUG
# -DC_DEBUG
CC = gcc
CFLAGS ?= -g -O0 -Wall -pthread 

COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(CFLAGS) 

AR = ar
ARFLAGS = cru
RANLIB = ranlib


all: libjcstore.a 
	

libjcstore.a: $(OBJECTS) 
	$(AR) $(ARFLAGS) $@ $^
	$(RANLIB) $@

.c.o:
	$(COMPILE) -c -o $@ $<

clean: 
	rm -f *.o *~ libjcstore.a