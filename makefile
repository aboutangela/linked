all: driver.o linkedlist.o
	gcc -o test linkedlist.o driver.o

driver.o: driver.c linkedlist.h
	gcc -c driver.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

run:
	./test

clean:
	rm *.o
