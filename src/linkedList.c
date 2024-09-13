#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

void createListNode(Node **node, int value)
{
    *node = (struct List *)malloc(sizeof(struct List));
    (*node)->data = value;
    (*node)->next = NULL;
}

void insertListNode(Node **node, int value)
{
    if (*node == NULL)
    {
        createListNode(node, value);
        return;
    }

    Node *temp = (*node);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    createListNode(&temp->next, value);
}

void printList(Node **node)
{
    Node *temp = (*node);

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}