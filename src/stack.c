#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

void createStack(Stack **stackNode, int value)
{
    *stackNode = (struct Stack *)malloc(sizeof(struct Stack));
    (*stackNode)->data = value;
    (*stackNode)->base = NULL;
}

void push(Stack **stackNode, int value)
{
    if (*stackNode == NULL)
    {
        createStack(stackNode, value);
        return;
    }

    Stack *temp = (*stackNode);

    createStack(stackNode, value);

    (*stackNode)->base = temp;
}

void pop(Stack **stackNode)
{
    if (*stackNode == NULL)
    {
        return;
    }

    Stack *newTop = (*stackNode)->base;
    free(*stackNode);
    (*stackNode) = newTop;
    return;
}

void stackPeek(Stack **stackNode)
{
    if (*stackNode != NULL)
    {
        printf("%d\n", (*stackNode)->data);
    }
}

int stackIsEmpty(Stack **stackNode)
{
    if (*stackNode == NULL)
    {
        return 1;
    }

    return 0;
}

int stackContains(Stack **stackNode, int value)
{
    if (*stackNode == NULL)
    {
        return 0;
    }

    Stack *temp = (*stackNode);

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            return 1;
        }
        temp = temp->base;
    }

    return 0;
}

int stackSize(Stack **stackNode)
{
    Stack *temp = (*stackNode);

    int counter = 0;

    while (temp != NULL)
    {
        counter++;
        temp = temp->base;
    }

    return counter;
}