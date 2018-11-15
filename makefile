all: main.o func.o
	gcc main.o func.o
main.o: main.c
	gcc -c main.c
func.o: func.c func.h
	gcc -c func.c
run:
	./a.out