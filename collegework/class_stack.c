// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node{
//     int data;
//     struct node* next;

// }node;
// node* push(node* top,int value)
// {
//     node* n = (node*)malloc(sizeof(node));
//     n->data = value;
//     n->next = top;
//     top = n;
//     return top;
// }
// int pop(node **top)
// {
//     int copy = (*top)->data;
//     node* temp = *top;


//     *top = (*top)->next;
//     free(temp);
//     return copy;
    
// }
// void peak(node* top)
// {
//     printf("%d",top->data);
// }
// int main()
// {
//     node* top = NULL;
//     top = push(top,10);
//     top = push(top,20);
//     top = push(top,30);
//     int value = pop(&top);


//     printf("%d",value);






//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
node* top = NULL;
void push(int value)
{
    node* n= (node*)malloc(sizeof(node));
    n->data = value;
    n->next = top;
    top = n;
}
int pop()
{
    int ret = top->data;

    node* temp = top;
    top = top->next;
    return ret;

}
void peak()
{
    printf("%d",top->data);
}
void printlist(node* top)
{
    node* p = top;
    while(p != NULL)
    {
        printf("%d-->",p->data);
        p = p->next;
    }
    printf("NULL");
}
int main()
{
    push(10);
    push(10);
    push(10);
    printlist(top);
    
}