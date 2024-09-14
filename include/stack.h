#ifndef STACK_H
#define STACK_H

typedef struct Stack
{
    int data;
    struct Stack *top;
} Stack;

Stack push(Stack **node, int value);
Stack pop(Stack **node, int value);

#endif