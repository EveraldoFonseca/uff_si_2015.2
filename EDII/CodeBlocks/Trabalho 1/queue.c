#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "list.h"

void initQueue(struct Queue *queue) {
    struct List *novaLista = (struct List*) malloc(sizeof (struct List));
    initList(novaLista);
    queue->list = novaLista;
}

void clearQueue(struct Queue *queue) {
    clearList(queue->list);
    free(queue);
}

void enqueue(struct Queue *queue, void *elem) {
    insertLastList(queue->list,elem);
}
void *inspectFirstQueue(struct Queue *queue) {
    return inspectFirstList(queue->list);
}
void *inspectLastQueue(struct Queue *queue) {
    return inspectLastList(queue->list);
}
void *dequeue(struct Queue *queue) {
    return removeFirstList(queue->list);
}
int isEmptyQueue(struct Queue *queue) {
    return isEmptyList(queue->list);
}
