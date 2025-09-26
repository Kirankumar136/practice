ABC.exe: main.o big3.o fact.o pal.o add2.o
	gcc -o ABC.exe main.o big3.o fact.o pal.o add2.o

main.o: main.c
	gcc -c main.c

big3.o: big3.c
	gcc -c big3.c

fact.o: fact.c
	gcc -c fact.c

pal.o: pal.c
	gcc -c pal.c

add2.o: add2.c
	gcc -c add2.c

clean:
	rm -f *.o ABC.exe

