#ifndef STACK_H
#define STACK_H

#include "list.h"

#ifndef NULL
#define NULL 0
#endif

/*
Estrutura de dados para a pilha. Implementação por alocação dinâmica
de memória.

Os elementos da pilha serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando a pilha estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado que está sendo inserido na pilha.

*/
struct Stack
{
  struct List *list;
};

/*
Esta função inicializa os dados da pilha, ou seja, garante que a pilha
encontra-se vazia. Espera-se que a mesma seja chamada apenas após a 
alocação da variável da estrutura Pilha, uma vez que não se pode
garantir que os valores encontram-se do jeito que se espera (pilha vazia)
após a alocação da memória. Desta forma, não é necessário assumir que
a pilha não se encontrava vazia e remover todos seus elementos.

*/
void initStack(struct Stack *stack);

/*
Limpa a pilha, eliminando o espaço de memória utilizado por cada
elemento.

*/
void clearStack(struct Stack *stack);

/*
Elimina toda a memória ocupada pela pilha.

*/
void endStack(struct Stack *stack);

/*
Insere um elemento no topo da pilha.

*/
void pushStack(struct Stack *stack, void *elem);

/*
Inspeciona o elemento no topo da pilha.

*/
void *inspectStack(struct Stack *stack);

/*
Remove e retorna o elemento do topo da pilha.

*/
void *popStack(struct Stack *stack);

/*
Testa se a pilha está vazia.

*/
int isEmptyStack(struct Stack *stack);

#endif
