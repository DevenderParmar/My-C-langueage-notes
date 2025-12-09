#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

node* top = NULL;

void push(int value)
{
    node* n = (node*)malloc(sizeof(node));
    if (!n) {
        printf("Memory allocation failed\n");
        return;
    }

    n->data = value;
    n->next = top;
    top = n;
}

int pop()
{
    if (top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }

    int ret = top->data;
    node* temp = top;
    top = top->next;

    free(temp);
    return ret;
}

void peek()
{
    if (top == NULL) {
        printf("Stack empty\n");
        return;
    }
    printf("%d\n", top->data);
}

void printlist()
{
    node* p = top;
    while (p != NULL) {
        printf("%d --> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    printlist(); // shows stack contents

    printf("Popped: %d\n", pop());
    printf("Top element: ");
    peek();

    return 0;
}

