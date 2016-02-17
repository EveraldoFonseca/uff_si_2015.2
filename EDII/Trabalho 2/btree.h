#ifndef B_TREE_H
#define B_TREE_H

#ifndef NULL
#define NULL 0
#endif

#define M 5
/*
Estrutura de dados de nós para árvore B. Implementação por alocação dinâmica
de memória.

Os elementos dos nós da lista serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando o nó estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado específico.

*/
struct B_TreeNode
{
  void *s[M]
  struct B_TreeNode *p[M+1];
};

/*
Estrutura de dados para árvore B. Implementação por alocação dinâmica
de memória.

Os elementos da lista serão instanciados com void*, para ser possível
aceitar qualquer tipo de elemento. Quando a árvore estiver sendo utilizada,
o utilizador que será o responsável por fazer o type cast de volta para
o tipo de dado específico.

Não nos preocuparemos, neste primeiro trabalho com as funções de construção
da árvore, somente percursos.

*/
struct B_Tree 
{
  struct B_TreeNode *root;
};

/*
Insere um elemento na árvore B.

Retorna 1, caso tenha inserido o elemento com sucesso, e 0 caso contrário.

*/
int insertB_Tree(struct B_Tree *tree, void *elem);

/*
Busca um elemento em uma árvore B.

Retorna 1, caso tenha encontrado o elemento, e 0 caso contrário.

*/
int searchB_Tree(struct B_Tree *tree, void *elem);

#endif
