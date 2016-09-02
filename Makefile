CFLAGS = -Wall -g
LIB = -L/home/dymex/workspace/dymex/src
INC = -I/home/dymex/workspace/dymex/include

default: all

all: src/prog.c
	gcc $(CFLAGS) $(LIB) $(INC) -o program src/*.c

clean:
	$(RM) program
