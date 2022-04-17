PROJECT = lbradd
CC = gcc
CFLAGS = -Wall
LFLAGS =
INCDIR =
INCS =
DEFS = 
LIBDIR =
LIBS =
OBJS = \
	main.o

$(PROJECT): $(OBJS)
	$(CC) $(LFLAGS) $(LIBDIR) $(LIBS) $(OBJS) -o $(PROJECT)

.c.o:
	$(CC) $(CFLAGS) $(INCDIR) $(INCS) $(DEFS) -c $<

clean:
	-rm *.o
	-rm $(PROJECT)

main.o: main.c

