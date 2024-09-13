#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

void createNode(Node **node, int value)
{
    *node = (struct List *)malloc(sizeof(struct List));
    (*node)->data = value;
    (*node)->next = NULL;
}

void insertNode(Node **node, int value)
{
    if (*node == NULL)
    {
        createNode(node, value);
        return;
    }

    Node *temp = (*node);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    createNode(&temp->next, value);
}

void printList(Node **node)
{
    while (*node != NULL) {
        printf("%d\n", (*node)->data);
        *node = (*node)->next;
    }
}