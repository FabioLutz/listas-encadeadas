#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void createQueue(Queue **queueNode, int value)
{
    *queueNode = (struct Queue *)malloc(sizeof(struct Queue));
    (*queueNode)->data = value;
    (*queueNode)->back = NULL;
}

void enqueue(Queue **queueNode, int value)
{
    if (*queueNode == NULL)
    {
        createQueue(queueNode, value);
        return;
    }

    Queue *temp = (*queueNode);

    while (temp->back != NULL)
    {
        temp = temp->back;
    }

    createQueue(&temp->back, value);
}

void dequeue(Queue **queueNode)
{
    if (*queueNode == NULL)
    {
        return;
    }

    Queue *temp = *queueNode;

    Queue *newFront = temp->back;
    free(temp);
    (*queueNode) = newFront;
    return;
}

void peek(Queue **queueNode)
{
    if (*queueNode != NULL)
    {
        printf("%d\n", (*queueNode)->data);
    }
}