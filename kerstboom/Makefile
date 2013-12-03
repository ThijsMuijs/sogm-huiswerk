CC = c++
CFLAGS = -Wall

all: kerstboom

kerstboom: kerstboom.cpp kerstboom.h
	$(CC) -o $@ kerstboom.o

clean:
	rm *.o kerstboom

.cpp.o:
	$(CC) -c $< $(CFLAGS)