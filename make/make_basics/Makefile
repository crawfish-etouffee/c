# -*- MakeFile -*-
CC=gcc
CFLAGS=-g -Wall

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

test.o: test.c
	$(CC) $(CFLAGS) -c test.c -o test.o
		
clean:
	rm -f hello test.o
