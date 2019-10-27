all: main.o linked_list.o
	gcc -o program main.o linked_list.o

linked_list.o: linked_list.c headers.h
	gcc -c linked_list.c

main.o: main.c headers.h
	gcc -c main.c

run:
	./program
