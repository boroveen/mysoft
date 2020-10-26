LDFLAGS= -lncurses
CC = gcc
CFLAGS = -O2

all: mysoft

mysoft:
	$(CC) number.cpp -o number $(LDFLAGS)
	$(CC) game.cpp -o game $(LDFLAGS)
	$(CC) matrix.cpp -o matrix $(LDFLAGS)
	$(CC) test.cpp -o test $(LDFLAGS)

install:
	cp number /bin
clean:
	rm test matrix game number
.PHONY: clean all install
