#include <stdio.h>
#include <stdlib.h>
#include "auxiliar.h"

void *initIntElem(int elem) {
    int* r = (int*) malloc(sizeof (int));
    *r = elem;
    return (void*) r;
}
void visitIntElem(void *elem) {
    int* p = (int*) elem;
    printf("%d\n", *p);
}
