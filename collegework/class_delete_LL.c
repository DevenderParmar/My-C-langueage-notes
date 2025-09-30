#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *addfirst(node *head, int value)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = value;
    n->next = head;
    head = n;
    return head;
}

node *addlast(node *head, int value)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = value;
    n->next = NULL;
    if (head == NULL)
    {
        head = n;
        return head;
    }
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = n;
    return head;
}

node *deletefirst(node *head)
{

    if (head == NULL)
    {
        printf("Linklist is empty");

        return NULL;
    }
    node *p = head;
    head = head->next;
    free(p);
    return head;
}

node *deleteend(node *head)
{
    if (head == NULL)
    {
        printf("Linklist is empty");

        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        printf("Linklist is now empty");
        return NULL;
    }
    node *p = head;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
    return head;
}

void printlist(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        printf("%d ->", p->data);
        p = p->next;
    }
}

node *deletespecific(node *head, int target)
{
    node *p = head;
    
    if (head == NULL)
    {
        printf("The list is empty");
        return NULL;
    }
    if (head->data == target)
    {
        node *p = head;
        head = head->next;
        free(p);
        return head;
    }
    while (p->next != NULL && p->next->data != target)
    {
        p = p->next;
    }
    if (p->next == NULL)
    {
        printf("Element not found");
    }
    else
    {

        node *temp = p->next;
        free(temp);
        p->next = p->next->next;
    }
    return head;
}
int main()
{
    node *head = NULL;

    head = addfirst(head, 20);
    head = addfirst(head, 10);
    head = addfirst(head, 30);
    head = addlast(head, 40);
    head = addlast(head, 50);
    head = addlast(head, 60);

    head = deletefirst(head);
    head = deleteend(head);
    head = deletespecific(head, 40);

    printlist(head);
    return 0;
}