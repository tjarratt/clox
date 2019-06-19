clox:	main.o
				clang -o clox main.o

main.o:	main.c
				clang -c main.c

test: doublyLinkedListTest.o testrunner.o doublyLinkedList.o
				clang -o test testrunner.o doublyLinkedListTest.o doublyLinkedList.o

testrunner.o: testrunner.c
				clang -c testrunner.c

doublyLinkedListTest.o:	doublyLinkedListTest.c
				clang -c doublyLinkedListTest.c

doublyLinkedList.o: doublyLinkedList.c
				clang -c doublyLinkedList.c

clean:
	rm -f *.o
