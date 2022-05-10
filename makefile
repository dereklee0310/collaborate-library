all: driver.c
	gcc driver.c -o driver
clean:
	rm -f driver