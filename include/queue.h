#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue
{
    int data;
    struct Queue *back;
} Queue;

void createQueue(Queue **queueNode, int value);
void enqueue(Queue **queueNode, int value);
void dequeue(Queue **queueNode);
void queuePeek(Queue **queueNode);
int queueIsEmpty(Queue **queueNode);
int queueContains(Queue **queueNode, int value);
int queueSize(Queue **queueNode);

#endif