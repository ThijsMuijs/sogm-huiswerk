CC = g++
CFLAGS = -g -Wall

OBJECTS = bintree.o Node.o Note.o

all: bintree

bintree: $(OBJECTS)
	$(CC) -o $@ $(CFLAGS) $(OBJECTS)
	rm -f *.o
clean:
	rm -f *.o


