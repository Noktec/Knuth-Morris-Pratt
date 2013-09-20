CC=gcc
CFLAGS=-Wall 
EXEC=KMP

all: $(EXEC)

KMP: KMP.o main.o
	$(CC) -o KMP KMP.o main.o

search_KMP.o: KMP.c
	$(CC) -o KMP.o -c KMP.c $(CFLAGS)

main.o: main.c KMP.h
	$(CC) -o main.o -c main.c $(CFLAGS)

clean:
	rm -rf *.o