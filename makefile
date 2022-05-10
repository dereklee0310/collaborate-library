all: driver

driver: driver.o lib.o
	gcc driver.o lib.o -o driver

driver.o: driver.c
	gcc driver.c -c
lib.o: lib.c lib.h
	gcc lib.c -c
clean:
	rm -f driver driver.o lib.o