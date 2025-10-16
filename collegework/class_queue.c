#include <stdio.h>
#include <stdlib.h>

node *front = NULL;
node *rear = NULL;
typedef struct node
{
    int data;
    struct node *next;
} node;

int dequeue()
{
    if(front == NULL)
    {
        printf("empty queue");
        return -1;
    }
    int data = front->data;
    node *temp = front;
    front = front->next;
    free(temp);
    return data;
}

void enqueue(int value)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = value;
    n->next = NULL;
    if (n == NULL)
    {
        printf("Queue overflow");
        return -1;
    }
    if (front == NULL && rear == NULL)
    {
        front = n;
        rear = n;
    }
    else
    {
        rear->next = n;
        rear = n;
    }
}
int main()
{
    enqueue(10);

    // Deletion  -> dequeue -> front
    // Addition -> enqueue -> back
}

