clox:	main.o
				clang -o clox main.o

main.o:	main.c
				clang -c main.c

clean:
	rm -f *.o
