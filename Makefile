LDFLAGS= -lncurses
CC = gcc
CFLAGS = -O2

all: mysoft

mysoft:
	$(CC) number.cpp -o number $(LDFLAGS)
	$(CC) game.cpp -o game $(LDFLAGS)
	$(CC) matrix.cpp -o matrix $(LDFLAGS)
	$(CC) test.cpp -o test $(LDFLAGS)
	$(CC) welcome.cpp -o welcome $(LDFLAGS)
	$(CC) color.cpp -o color $(LDFLAGS)

install:
	cp number /bin
	cp welcome /bin

clean:
	rm test matrix game number welcome color
.PHONY: clean all install
