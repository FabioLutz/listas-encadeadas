#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void createLinkedListNode(LinkedList **linkedListNode, int value)
{
    *linkedListNode = (struct LinkedList *)malloc(sizeof(struct LinkedList));
    (*linkedListNode)->data = value;
    (*linkedListNode)->next = NULL;
}

void insertLinkedListNode(LinkedList **linkedListNode, int value)
{
    if (*linkedListNode == NULL)
    {
        createLinkedListNode(linkedListNode, value);
        return;
    }

    LinkedList *temp = (*linkedListNode);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    createLinkedListNode(&temp->next, value);
}

void printLinkedList(LinkedList **linkedListNode)
{
    LinkedList *temp = (*linkedListNode);

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void removeLinkedListNode(LinkedList **linkedListNode, int value)
{

    if (*linkedListNode == NULL)
    {
        return;
    }

    LinkedList *temp = (*linkedListNode);

    if (temp->data == value)
    {
        LinkedList *newNext = temp->next;
        free(temp);
        *linkedListNode = newNext;
        return;
    }

    while (temp->next != NULL)
    {
        if (temp->next->data == value)
        {
            if (temp->next->next != NULL)
            {
                LinkedList *newNext = temp->next->next;
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

int linkedListIsEmpty(LinkedList **linkedListNode)
{
    if (*linkedListNode == NULL)
    {
        return 1;
    }

    return 0;
}