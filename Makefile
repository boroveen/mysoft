#UNCOMMENT THE LINE BELOW IF ON FREEBSD, AND DELETE THE LINE AFTER
#LDFLAGS=-lsysinfo
LDFLAGS= -lncurses


#SRC = fetch.c
CC = gcc
CFLAGS = -O2



all:
        $(CC) number.cpp -o number $(LDFLAGS)
        $(CC) game.cpp -o game $(LDFLAGS)
        $(CC) matrix.cpp -o matrix $(LDFLAGS)
        $(CC) test.cpp -o test $(LDFLAGS)
number:
        $(CC) number.cpp -o number $(LDFLAGS)
game:
        $(CC) game.cpp -o game $(LDFLAGS)
matrix:
        $(CC) matrix.cpp -o matrix $(LDFLAGS)
test:
        $(CC) test.cpp -o test $(LDFLAGS)
clean:
        rm test matrix game number
#install:
#       cp
#       chmod
#uninstall:
#       rm
.PHONY: clean all install
