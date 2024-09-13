typedef struct List
{
    int data;
    struct List *next;
} Node;

void createNode(Node **node, int value);
void insertNode(Node **node, int value);