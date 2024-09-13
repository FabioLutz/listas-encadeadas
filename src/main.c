#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

int main()
{
    Node *head = NULL;

    insertListNode(&head, 10);
    insertListNode(&head, 20);
    insertListNode(&head, 30);
    insertListNode(&head, 40);
    insertListNode(&head, 50);

    printList(&head);
    printList(&head);
}