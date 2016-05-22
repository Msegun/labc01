sources = zad01.c zad01wer2.c zad02

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c99 -D_GNU_SOURCE
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
