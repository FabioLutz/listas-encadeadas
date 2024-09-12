#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

void createNode(Node **node, int value)
{
    *node = (struct List *)malloc(sizeof(struct List));
    (*node)->data = value;
    (*node)->next = NULL;
}