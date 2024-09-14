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

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void removeListNode(Node **node, int value)
{

    if (*node == NULL)
    {
        return;
    }

    Node *temp = (*node);

    if (temp->data == value)
    {
        Node *newNext = temp->next;
        free(temp);
        *node = newNext;
        return;
    }

    while (temp->next != NULL)
    {
        if (temp->next->data == value)
        {
            if (temp->next->next != NULL)
            {
                Node *newNext = temp->next->next;
                free(temp->next);
                temp->next = newNext;
                return;
            }
            free(temp->next);
            temp->next = NULL;
            return;
        }
        temp = temp->next;
    }
}

int listIsEmpty(Node **node)
{
    if (*node == NULL)
    {
        return 1;
    }

    return 0;
}