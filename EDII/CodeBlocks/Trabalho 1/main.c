#include <stdio.h>
#include <stdlib.h>

#include "auxiliar.h"
#include "stack.h"
#include "queue.h"
#include "binary_tree.h"
int main()
{

      printf("Start\n");

      printf("Initializing stack\n");
      struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
      initStack(stack);

      for (int i = 0; i < 10; i++)
      {
        pushStack(stack, initIntElem(i));
        int *k = inspectStack(stack);
        printf("Pushed %d\n", *k);
      }

      while (!isEmptyStack(stack))
      {
        int *k = popStack(stack);
        printf("Popped %d\n", *k);
        free(k);
      }


      printf("Freeing stack\n");
      clearStack(stack);


      printf("Initializing queue\n");
      struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
      initQueue(queue);

      for (int i = 0; i < 10; i++)
      {
        enqueue(queue, initIntElem(i));
        int *k = inspectLastQueue(queue);
        printf("Enqueued %d\n", *k);
      }

      while (!isEmptyQueue(queue))
      {
        int *k = dequeue(queue);
        printf("Dequeued %d\n", *k);
        free(k);
      }

      printf("Freeing queue\n");
      clearQueue(queue);

      printf("End\n");

    struct BinaryTree *tree = (struct BinaryTree*) malloc(sizeof(struct BinaryTree));
    tree->root=NULL;
    for (int i = 0 ; i<=10; i++){
        int *valor = (int*) malloc(sizeof (int));
        *valor = i;
        insertBinaryTree(tree, valor);
    }

    insertBinaryTree(tree, initIntElem(6));
    insertBinaryTree(tree, initIntElem(7));
    insertBinaryTree(tree, initIntElem(5));
    insertBinaryTree(tree, initIntElem(2));
    insertBinaryTree(tree, initIntElem(4));
    printf("Pre Ordem\n");
    preOrderTraversal(tree);
    printf("Pos Ordem\n");
    postOrderTraversal(tree);
    printf("Simetrica\n");
    inOrderTraversal(tree);
    printf("Em nivel\n");
    breadthFirstTraversal(tree);
    return 0;
}
