CFLAGS = -Wall -g
LIB = -L/home/dymex/workspace/dymex/src
INC = -I/home/dymex/workspace/dymex/include

default: all

all: src/prog.cc
	g++ $(CFLAGS) $(LIB) $(INC) -o program src/*.cc

clean:
	$(RM) program
