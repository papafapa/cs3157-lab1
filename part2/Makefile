C = gcc
CFLAGS = -g -Wall

convert: convert.o

convert.o: convert.c 
 
.PHONY: clean
clean:
	rm -f *.o a.out core convert
	 
.PHONY: all
all: clean convert
