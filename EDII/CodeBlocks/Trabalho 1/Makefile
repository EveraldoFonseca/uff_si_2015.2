CC=gcc
CFLAGS=-I.
DEPS = list.h stack.h queue.h aux.h binary_tree.h
OBJ = list.o stack.o queue.o aux.o binary_tree.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o main
