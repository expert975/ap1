CFLAGS= -std=c11 -Wall -Wextra
SHELL:=/bin/bash
exCount=20

all:
	for i in `seq 1 $(exCount)`; do gcc $(CFLAGS) -o ex$$i ex$$i.c -lm; done

clean:
	for i in `seq 1 $(exCount)`; do rm -vf ex$$i; done
