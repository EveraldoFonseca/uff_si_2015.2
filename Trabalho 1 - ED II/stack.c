#include "stack.h"
#include "list.h"

void initStack(struct Stack *stack) {
    struct List *novaLista = (struct List *) malloc(sizeof(struct List));
    initList(novaLista);
    stack->list = novaLista;
}

void clearStack(struct Stack *stack) {
    clearList(stack->list);
    free(stack);
}
void pushStack(struct Stack *stack, void *elem) {
    insertFirstList(stack->list,elem);
}

void *inspectStack(struct Stack *stack) {
    return inspectFirstList(stack->list);
}

void *popStack(struct Stack *stack) {
    return removeFirstList(stack->list);
}

int isEmptyStack(struct Stack *stack) {
    return isEmptyList(stack->list);
}
