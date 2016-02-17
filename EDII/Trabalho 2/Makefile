CC=gcc
CFLAGS=-I.
DEPS = list.h stack.h queue.h auxiliar.h avl_tree.h btree.h
OBJ = list.o stack.o queue.o auxiliar.o avl_tree.o btree.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o main
