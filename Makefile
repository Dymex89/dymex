CC = gcc
CFLAGS = -Wall -g
INCLUDES = -I/home/dymex/workspace/dymex/include

all: src/prog.c
	$(CC) $(CFLAGS) -o program src/prog.c

clean:
	$(RM) program
