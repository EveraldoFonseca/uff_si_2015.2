#include <stdio.h>
#include <stdlib.h>

#include "auxiliar.h"
#include "stack.h"
#include "queue.h"

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
  endStack(stack);
  free(stack);


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
  endQueue(queue);
  free(queue);

  printf("End\n");

  return 0;
}

