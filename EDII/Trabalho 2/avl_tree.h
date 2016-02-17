#ifndef AVL_TREE_H
#define AVL_TREE_H

#ifndef NULL
#define NULL 0
#endif

/*
Estrutura de dados de nós para árvore AVL. Implementação por alocação dinâmica
de memória.

Os elementos dos nós da lista serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando o nó estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado específico.

*/
struct AVL_TreeNode
{
  void *elem;
  struct AVL_TreeNode *left;
  struct AVL_TreeNode *right;
  int bal;
};

/*
Estrutura de dados para árvore binária. Implementação por alocação dinâmica
de memória.

Os elementos da lista serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando a árvore estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado específico.

Não nos preocuparemos, neste primeiro trabalho com as funções de construção
da árvore, somente percursos.

*/
struct AVL_Tree 
{
  struct AVL_TreeNode *root;
};

/*
Insere um elemento na árvore binária.

Retorna 1, caso tenha inserido o elemento com sucesso, e 0 caso contrário.

*/
int insertAVL_Tree(struct AVL_Tree *tree, void *elem);

/*
Função recursiva de inserção na árvore AVL.

*/
int insertAVL_TreeR(struct AVL_TreeNode **node, void *elem, int *h);

/*
Busca um elemento em uma árvore AVL.

Retorna 1, caso tenha encontrado o elemento, e 0 caso contrário.

*/
int searchAVL_Tree(struct AVL_Tree *tree, void *elem);

#endif
