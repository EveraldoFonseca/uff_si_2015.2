#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

#ifndef NULL
#define NULL 0
#endif

/*
Estrutura de dados para a fila. Implementação por alocação dinâmica
de memória.

Os elementos da fila serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando a fila estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado que está sendo inserido na fila.

*/
struct Queue 
{
  struct List *list;
};

/*
Esta função inicializa os dados da fila, ou seja, garante que a fila
encontra-se vazia. Espera-se que a mesma seja chamada apenas após a 
alocação da variável da estrutura Queue, uma vez que não se pode
garantir que os valores encontram-se do jeito que se espera (fila vazia)
após a alocação da memória. Desta forma, não é necessário assumir que
a fila não se encontrava vazia e remover todos seus elementos.

*/
void initQueue(struct Queue *queue);

/*
Limpa a fila, eliminando o espaço de memória utilizado por cada
elemento.

*/
void clearQueue(struct Queue *queue);

/*
Insere um elemento no final da fila.

*/
void enqueue(struct Queue *queue, void *elem);

/*
Inspeciona o elemento no início da fila.

*/
void *inspectFirstQueue(struct Queue *queue);

/*
Inspeciona o elemento no final da fila.

*/
void *inspectLastQueue(struct Queue *queue);

/*
Remove e retorna o elemento do início da fila.

*/
void *dequeue(struct Queue *queue);

/*
Testa se a fila está vazia.

*/
int isEmptyQueue(struct Queue *queue);

#endif
