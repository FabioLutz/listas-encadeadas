typedef struct List
{
    int data;
    struct List *next;
} Node;

Node *createNode(int value);