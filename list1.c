#include <stdio.h>
#include <stdlib.h> //malloc, free

typedef struct node
{
    int value;
    struct node * next;
}node;

node * head = NULL;

void insert_node_front()
{
    node * newnode;
    newnode = ((node*)malloc(sizeof(node)));
    scanf("%d", &newnode -> value);
    newnode -> next = NULL;
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    newnode -> next = head;
    head = newnode;

}

int main(void)
{
    

    return 0;
}