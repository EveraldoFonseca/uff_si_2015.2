#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initListNode(struct ListNode *listNode, void *elem) {
    listNode->elem = elem;
    listNode->next = NULL;
}
void initList(struct List *list) {
    //list = (struct List*) malloc(sizeof(struct List));
    list->first = NULL;
    list->last = NULL;
}

void clearList(struct List *list) {
    struct ListNode *no = list->first;
    while(no != NULL) {
        list->first = no->next;
        if (list->first == NULL) list->last = NULL;
        free(no);
        no = list->first;
    }
    free(list);
}
void insertFirstList(struct List *list, void *elem) {
    struct ListNode *novoNo = (struct ListNode*) malloc(sizeof(struct ListNode));
    if(novoNo != NULL) {
        initListNode(novoNo, elem);
        novoNo->next = list->first;
        list->first = novoNo;
        //Se for o primeiro nó, o campo LAST da lista também precisa apontar para ele.
        if(list->last == NULL) list->last = novoNo;
    } else {
        printf("Memoria Insuficiente!\n");
    }
}
void insertLastList(struct List *list, void *elem) {
    struct ListNode *novoNo = (struct ListNode*) malloc(sizeof(struct ListNode));
    if(novoNo != NULL) {
        initListNode(novoNo,elem);
        //Verfica se a lista está vazia.
        if (isEmptyList(list)) {
            //Se a lista estiver vazia
            list->first = novoNo;   //Referenciamos o primeiro elemento da lista
            list->last = novoNo;    //e também o último.
        } else {
            //Se a lista não estiver vazia
            list->last->next = novoNo;  //Fazemos o antigo último da lista apontar para o atual último
            list->last = novoNo;        //Atualizamos a referência do último da lista para o novoNo que criamos
        }
    } else {
        printf("Memoria Insuficiente!\n");
    }
}
void *removeFirstList(struct List *list) {
    if (isEmptyList(list)) {
        return NULL;
    } else {
        void *elemRemovido = list->first->elem;
        struct ListNode *noRemovido = list->first;
        list->first = noRemovido->next;
        free(noRemovido);
        if (list->first == NULL) list->last = NULL; //Atualizando a referencia de LAST para NULL para evitar que ele guarde lixo.
        return elemRemovido;
    }
}

void *inspectFirstList(struct List *list) {
    if (!isEmptyList(list)) return list->first->elem;
    else return NULL;
}

void *inspectLastList(struct List *list) {
    if (!isEmptyList(list)) return list->last->elem;
    else return NULL;
}
int isEmptyList(struct List *list) {
    return (!list->first && !list->last);
}
