OBJS = CINN.o MaxArray.o PrintArray.o RotArray.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

make: $(OBJS)
	$(CC) $(LFLAGS) CINN.o -o CINN
	$(CC) $(LFLAGS) MaxArray.o -o MaxArray
	$(CC) $(LFLAGS) PrintArray.o -o PrintArray
	$(CC) $(LFLAGS) RotArray.o -o RotArray