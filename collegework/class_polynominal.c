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
node *add(node *poly1, node *poly2)
{
    node *res = NULL;
    while (poly1 != NULL &&  poly2 != NULL)
    {

        if (poly1->expo == poly2->expo)
        {
            int sum = poly1->coef + poly2->coef;
            res = insertend(res, sum, poly1->expo);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (poly1->expo > poly2->expo)
        {
            res = insertend(res, poly1->coef, poly1->expo);
            poly1 = poly1->next;
        }
        else if (poly2->expo > poly1->expo)
        {
            res = insertend(res, poly2->coef, poly2->expo);
            poly2= poly2->next;
        }
    }
    while(poly1!= NULL)
    {
        res = insertend(res,poly1->coef,poly1->expo);
        poly1 = poly1->next;
    }
    while(poly2 != NULL)
    {
        res = insertend(res,poly2->coef,poly2->expo);
        poly2 = poly2->next;
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