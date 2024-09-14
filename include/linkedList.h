typedef struct List
{
    int data;
    struct List *next;
} Node;

void createListNode(Node **node, int value);
void insertListNode(Node **node, int value);
void printList(Node **node);
void removeListNode(Node **node, int value);