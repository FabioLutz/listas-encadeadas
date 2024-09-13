#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

int main()
{
    Node *head = NULL;

    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 40);
    insertNode(&head, 50);
    
    printf("%d\n", head->data);
    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);
    printf("%d\n", head->next->next->next->data);
    printf("%d\n", head->next->next->next->next->data);
}