#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int coef;
    int expo;
    struct node *next;
} node;
node *insertend(node *head, int coef, int expo)
{
    node *n = (node *)malloc(sizeof(node));
    n->coef = coef;
    n->expo = expo;
    n->next = NULL;
    if(head == NULL)
    {
        return n;
    }
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    return head;
}
void print(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        printf("%dx^%d->", p->coef, p->expo);
        p = p->next;
    }
    printf("NULL\n");
}
node *add(node *p1, node *p2)
{
    node *res = NULL;
    while (p1 != NULL && p2 != NULL)
    {

        if (p1->expo == p2->expo)
        {
            int sum = p1->coef + p2->coef;
            res = insertend(res, sum, p1->expo);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->expo > p2->expo)
        {
            res = insertend(res, p1->coef, p1->expo);
            p1 = p1->next;
        }
        else if (p2->expo > p1->expo)
        {
            res = insertend(res, p2->coef, p2->expo);
            p2 = p2->next;
        }
    }
    while(p1 != NULL)
    {
        res = insertend(res,p1->coef,p1->expo);
        p1 = p1->next;
    }
    while(p2 != NULL)
    {
        res = insertend(res,p2->coef,p2->expo);
        p2 = p2->next;
    }
    return res;
}
int main()
{
    node *p1 = NULL;
    p1 = insertend(p1, 3, 2);
    p1 = insertend(p1, 2, 1);
    p1 = insertend(p1, 1, 0);

    print(p1);
    node *p2 = NULL;
    p2 = insertend(p2, 4, 3);
    p2 = insertend(p2, 2, 2);
    p2 = insertend(p2, 3, 0);

    print(p2);

    node* res = add(p1,p2);
    print(res);
    return 0;
}