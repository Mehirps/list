final: main.o newll.o 
	gcc main.o newll.o -o final

main.o:main.c
	gcc -c main.c -o main.o

newll.o:newll.c newll.h
	gcc -c newll.c -o newll.o

clear:
	rm*.o;

