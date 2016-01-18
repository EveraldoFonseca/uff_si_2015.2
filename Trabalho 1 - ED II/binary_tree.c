#include "binary_tree.h"
#include "auxiliar.h"
#include "stack.h"

void insertBinaryTree(struct BinaryTree *tree, void *elem)
{
    struct BinaryTreeNode *novoNo = (struct BinaryTreeNode*) malloc(sizeof(struct BinaryTreeNode));
    novoNo->elem = elem;
    novoNo->left = NULL;
    novoNo->right=NULL;

    if (tree->root==NULL)
    {
        tree->root = novoNo;
    }
    else
    {
        struct BinaryTreeNode *auxNo;
        auxNo = tree->root;
        int side = 0;
        do
        {
            if (auxNo->left == NULL)
            {
                auxNo->left = novoNo;
                break;
            }
            else if (auxNo->right == NULL)
            {
                auxNo->right = novoNo;
                break;
            }
            else
            {
                auxNo = side ? auxNo->left : auxNo->right;
                side = !side;
            }
        }
        while (auxNo != NULL);
    }
}

void preOrderTraversal(struct BinaryTree *tree)
{
    if (tree->root != NULL)
    {
        struct Stack *pilha = (struct Stack*) malloc(sizeof(struct Stack));
        initStack(pilha);
        pushStack(pilha,(void*)tree->root);
        while(!isEmptyStack(pilha))
        {
            struct BinaryTreeNode *noTopo =  (struct BinaryTreeNode*) inspectStack(pilha);
            visitIntElem(noTopo->elem);
            popStack(pilha);
            if (noTopo->right != NULL)
                pushStack(pilha, (void*) noTopo->right);
            if (noTopo->left != NULL)
                pushStack(pilha, (void*) noTopo->left);

        }
    }
}
void postOrderTraversal(struct BinaryTree *tree)
{

}

void inOrderTraversal(struct BinaryTree *tree)
{

}
void breadthFirstTraversal(struct BinaryTree *tree)
{

}
