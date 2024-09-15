#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct LinkedList
{
    int data;
    struct LinkedList *next;
} LinkedList;

void createLinkedListNode(LinkedList **linkedListNode, int value);
void insertLinkedListNode(LinkedList **linkedListNode, int value);
void printLinkedList(LinkedList **linkedListNode);
void removeLinkedListNode(LinkedList **linkedListNode, int value);
int linkedListIsEmpty(LinkedList **linkedListNode);

#endif