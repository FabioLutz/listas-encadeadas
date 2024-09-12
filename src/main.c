#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

int main()
{
    Node *head = NULL;

    createNode(&head, 10);
    
    printf("%d\n", head->data);
}