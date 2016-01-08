#ifndef LIST_H
#define LIST_H

#ifndef NULL
#define NULL 0
#endif

/*
Estrutura de dados de nós para lista encadeada. Implementação por alocação dinâmica
de memória.

Os elementos dos nós da lista serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando o nó estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado específico.

*/
struct ListNode
{
  void *elem;
  struct ListNode *next;
};

/*
Esta função inicializa os dados de um nó da lista, atribuindo ao elemento
o valor passado como parâmetro, e null para o ponteiro para o próximo
elemento.

*/
void initListNode(struct ListNode *listNode, void *elem);


/*
Estrutura de dados para lista encadeada. Implementação por alocação dinâmica
de memória.

Os elementos da lista serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando a lista estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado específico.

Manter ponteiros para o início e final da lista, pois haverá operações de
inserção no início e fim da lista, e desejamos que estas tenham complexidade
O(1) e não O(n).

*/
struct List
{
  struct ListNode *first;
  struct ListNode *last;
};

/*
Esta função inicializa os dados da lista, ou seja, garante que a lista
encontra-se vazia. Espera-se que a mesma seja chamada apenas após a
alocação da variável da estrutura Lista, uma vez que não se pode
garantir que os valores encontram-se do jeito que se espera (Lista vazia)
após a alocação da memória. Desta forma, não é necessário assumir que
a pilha não se encontrava vazia e remover todos seus elementos.

*/
void initList(struct List *list);

/*
Limpa a lista, eliminando o espaço de memória utilizado por cada
elemento.

*/
void clearList(struct List *list);

/*
Elimina toda a memória ocupada pela lista.

*/
void endList(struct List *list);

/*
Insere um elemento no início da lista.

*/
void insertFirstList(struct List *list, void *elem);

/*
Insere um elemento no final da lista.

*/
void insertLastList(struct List *list, void *elem);


/*
Remove o elemento do início da lista. Retorna o elemento removido e nulo,
caso a lista esteja vazia.

*/
void *removeFirstList(struct List *list);

/*
Inspeciona o elemento no início da lista.

*/
void *inspectFirstList(struct List *list);

/*
Inspeciona o elemento no final da lista.

*/
void *inspectLastList(struct List *list);

/*
Testa se a lista está vazia.

*/
int isEmptyList(struct List *list);

#endif
