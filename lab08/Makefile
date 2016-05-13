sources = zad03.c zad04.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

zad01: zad01.c
	gcc -E zad01.c

zad02: zad02.c
	gcc -E zad02.c

CFLAGS = -Wall -std=c11
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
