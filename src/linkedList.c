#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

Node *createNode(int value)
{
    struct List *newNode = (struct List *)malloc(sizeof(struct List));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}