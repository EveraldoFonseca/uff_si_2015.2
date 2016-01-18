#include "binary_tree.h"
#include "auxiliar.h"
#include "stack.h"

void insertBinaryTree(struct BinaryTree *tree, void *elem) {
    struct BinaryTreeNode *novoNo = (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    novoNo->elem = elem;
    novoNo->left = NULL;
    novoNo->right=NULL;

    if (tree->root==NULL) {
        tree->root = novoNo;
    } else {
        struct BinaryTreeNode *auxNo = tree->root;
        int side = 0;
        do {
            if (auxNo->left == NULL) {
                auxNo->left = novoNo;
                auxNo=NULL;
            } else if (auxNo->right == NULL) {
                auxNo->right = novoNo;
                auxNo=NULL;
            } else {
                auxNo = side ? auxNo->left : auxNo->right;
                side = !side;
            }
        } while (auxNo != NULL);
    }
}

void preOrderTraversal(struct BinaryTree *tree) {
    if (tree->root != NULL) {
        struct BinaryTreeNode *noAux = tree->root;
        struct Stack *pilha = (struct Stack*) malloc(sizeof(struct Stack));
        initStack(pilha);
        pushStack(pilha,(void*)noAux);
        while(!isEmptyStack(pilha)) {
            struct BinaryTreeNode *noRemovido =  (struct BinaryTreeNode*) popStack(pilha);
            visitIntElem(noRemovido->elem);
            if (noAux->left != NULL) {
                pushStack(pilha, (void*) noAux->left);
                noAux = noAux->left;
            }else if (noAux->right != NULL) {
                pushStack(pilha, (void*) noAux->right);
                noAux = noAux->right;
            }
        }
    }
}
void postOrderTraversal(struct BinaryTree *tree) {

}

void inOrderTraversal(struct BinaryTree *tree) {

}
void breadthFirstTraversal(struct BinaryTree *tree) {

}
