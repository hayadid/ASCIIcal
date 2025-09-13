CC = gcc

all: program

program: main.o functions.o
	$(CC) build/main.o build/asciical.o -o build/program

main.o: main.c asciical.h
	$(CC) -c src/main.c

asciical.o: asciical.c asciical.h
	$(CC) -c src/asciical.c