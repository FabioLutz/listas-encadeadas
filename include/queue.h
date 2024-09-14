#ifndef QUEUE_H
#define QUEUE_H

typedef struct Queue
{
    int data;
    struct Queue *front;
    struct Queue *back;
} Queue;

void enqueue(Queue **node, int value);
void dequeue(Queue **node, int value);

#endif