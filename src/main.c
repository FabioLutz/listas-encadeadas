#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

int main()
{
    Node *head = NULL;

    int value, choice;

    do
    {
        printf("\n1 - Inserir valor\n2 - Imprimir lista\n3 - Remover valor\n0 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nInsira o valor: ");
            scanf("%d", &value);
            insertListNode(&head, value);
            break;

        case 2:
            printList(&head);
            break;

        case 3:
            printf("\nInsira o valor: ");
            scanf("%d", &value);
            removeListNode(&head, value);
            break;

        default:
            if (choice != 0)
            {
                printf("\nValor inválido\n");
            }
            break;
        }
    } while (choice != 0);
}