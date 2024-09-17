#ifndef STACK_H
#define STACK_H

typedef struct Stack
{
    int data;
    struct Stack *base;
} Stack;

void createStack(Stack **stackNode, int value);
void push(Stack **stackNode, int value);
void pop(Stack **stackNode);
void stackPeek(Stack **stackNode);
int stackIsEmpty(Stack **stackNode);
int stackContains(Stack **stackNode, int value);
int stackSize(Stack **stackNode);

#endif