#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"
#include "queue.h"

void executeLinkedList()
{
    int choice, value;

    static LinkedList *linkedList = NULL;

    do
    {
        printf("\n1 - Inserir valor\n2 - Imprimir lista\n3 - Remover valor\n4 - Verificar se está vazia\n0 - Voltar\n");
        printf("Escolha uma opção: ");
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

void executeQueue()
{
    int choice, value;

    static Queue *queue = NULL;

    do
    {
        printf("\n1 - Inserir valor\n2 - Imprimir primeiro valor\n3 - Remover primeiro valor\n4 - Verificar se está vazia");
        printf("\n5 - Imprimir tamanho\n6 - Verificar se um valor está presente\n0 - Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nInsira o valor: ");
            scanf("%d", &value);
            enqueue(&queue, value);
            break;

        case 2:
            peek(&queue);
            break;

        case 3:
            dequeue(&queue);
            break;

        case 4:
            printf("%s\n", queueIsEmpty(&queue) ? "Verdadeiro" : "Falso");
            break;

        case 5:
            printf("%d\n", queueSize(&queue));
            break;

        case 6:
            printf("\nInsira o valor: ");
            scanf("%d", &value);
            printf("%s\n", queueContains(&queue, value) ? "Verdadeiro" : "Falso");
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

int main()
{
    int choice;

    do
    {

        printf("\n1 - Lista Encadeada\n2 - Fila\n0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            executeLinkedList();
            break;

        case 2:
            executeQueue();
            break;

        default:
            if (choice != 0)
            {
                printf("Valor inválido\n");
            }
            break;
        }

    } while (choice != 0);
}