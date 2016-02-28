#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#ifndef NULL
#define NULL 0
#endif

/*
Estrutura de dados de nós para árvore binária. Implementação por alocação dinâmica
de memória.

Os elementos dos nós da lista serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando o nó estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado específico.

*/
struct BinaryTreeNode
{
  void *elem;
  struct BinaryTreeNode *left;
  struct BinaryTreeNode *right;
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
struct BinaryTree 
{
  struct BinaryTreeNode *root;
};

/*
Insere um elemento na árvore binária.

*/
void insertBinaryTree(struct BinaryTree *tree, void *elem);

/*
Percurso em pré-ordem.

*/
void preOrderTraversal(struct BinaryTree *tree);

/*
Percurso em pós-ordem.

*/
void postOrderTraversal(struct BinaryTree *tree);

/*
Percurso em ordem simétrica.

*/
void inOrderTraversal(struct BinaryTree *tree);

/*
Percurso em nível.

*/
void breadthFirstTraversal(struct BinaryTree *tree);

#endif
