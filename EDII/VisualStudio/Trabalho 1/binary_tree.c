#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include "auxiliar.h"
#include "stack.h"
#include "queue.h"


void postOrderTraversalNode( struct BinaryTreeNode *node);
void inOrderTraversalNode(struct BinaryTreeNode *node);
void insertBinaryTree(struct BinaryTree *tree, void *elem)
{
    struct BinaryTreeNode* novoNo = (struct BinaryTreeNode*) malloc(sizeof (struct BinaryTreeNode));
    novoNo->elem = elem;
    novoNo->left = NULL;
    novoNo->right = NULL;

    struct BinaryTreeNode* auxNo;

    if (tree->root == NULL)
    {
        tree->root = novoNo;
    }
    else
    {
        auxNo = tree->root;
        while (auxNo != NULL)
        {
            int elemNovoNo = *(int*)elem;
            int elemRaiz = *(int*)auxNo->elem;
            if (elemNovoNo <= elemRaiz )
            {
                if (auxNo->left == NULL)
                {
                    auxNo->left = novoNo;
                    break;
                }
                else
                {
                    auxNo = auxNo->left;
                }
            }
            else
            {
                if (auxNo->right == NULL)
                {
                    auxNo->right = novoNo;
                    break;
                }
                else
                {
                    auxNo = auxNo->right;
                }
            }
        }
    }

}

void preOrderTraversal(struct BinaryTree *tree)
{
    if ((tree != NULL) && (tree->root != NULL))
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
    if ((tree != NULL) && (tree->root != NULL))
        postOrderTraversalNode(tree->root);
}
void postOrderTraversalNode( struct BinaryTreeNode *node)
{
    if (node->left != NULL) postOrderTraversalNode(node->left);
    if (node->right != NULL) postOrderTraversalNode(node->right);
    visitIntElem(node->elem);
}
void inOrderTraversal(struct BinaryTree *tree)
{
    if ((tree != NULL) && (tree->root != NULL))
        inOrderTraversalNode(tree->root);
}
void inOrderTraversalNode(struct BinaryTreeNode *node)
{
    if (node->left != NULL) inOrderTraversalNode(node->left);
    visitIntElem(node->elem);
    if (node->right != NULL) inOrderTraversalNode(node->right);

}
void breadthFirstTraversal(struct BinaryTree *tree)
{
   if (!tree->root)return;
    struct Queue *fila = (struct Queue*) malloc(sizeof (struct Queue));
    initQueue(fila);
    struct BinaryTreeNode *node = (struct BinaryTreeNode*) malloc(sizeof( struct BinaryTreeNode));
    enqueue(fila, tree->root);
    while (!isEmptyQueue(fila)) {
        node = dequeue(fila);
        visitIntElem(node->elem);
        if (node->left)
            enqueue(fila, node->left);
        if (node->right)
            enqueue(fila, node->right);
    }
    clearQueue(fila);
//    free(fila);
}
