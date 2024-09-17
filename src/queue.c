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

void queuePeek(Queue **queueNode)
{
    if (*queueNode != NULL)
    {
        printf("%d\n", (*queueNode)->data);
    }
}

int queueIsEmpty(Queue **queueNode)
{
    if (*queueNode == NULL)
    {
        return 1;
    }

    return 0;
}

int queueContains(Queue **queueNode, int value)
{
    if (*queueNode == NULL)
    {
        return 0;
    }

    Queue *temp = (*queueNode);

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return 1;
        }
        temp = temp->back;
    }

    return 0;
}

int queueSize(Queue **queueNode)
{
    Queue *temp = (*queueNode);

    int counter = 0;

    while (temp != NULL)
    {
        counter++;
        temp = temp->back;
    }

    return counter;
}