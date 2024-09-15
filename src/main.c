#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main()
{
    LinkedList *linkedList = NULL;

    int choice, value;

    do
    {
        printf("\n1 - Inserir valor\n2 - Imprimir lista\n3 - Remover valor\n4 - Verificar se está vazia\n0 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nInsira o valor: ");
            scanf("%d", &value);
            insertLinkedListNode(&linkedList, value);
            break;

        case 2:
            printLinkedList(&linkedList);
            break;

        case 3:
            printf("\nInsira o valor: ");
            scanf("%d", &value);
            removeLinkedListNode(&linkedList, value);
            break;

        case 4:
            printf("%s\n", linkedListIsEmpty(&linkedList) ? "verdadeiro" : "falso");
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