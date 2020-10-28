hi : input.o output.o hi.o
	gcc -o hi input.o output.o hi.o

input.o: input.c
	gcc -c input.c

output.o: output.c
	gcc -c output.c

hi.o: hi.c
	gcc -c hi.c

clean:
	rm -f *.o hi
