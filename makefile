# All Targets
all: wordCounter


wordCounter: wordCounter.o 
	gcc -g -Wall -o wordCounter wordCounter.o 

wordCounter.o: wordCounter.c
	gcc -g -Wall -c -o wordCounter.o wordCounter.c 
 

.PHONY: clean

#Clean the build directory
clean: 
	rm -f *.o wordCounter
