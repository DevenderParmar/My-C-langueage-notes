#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
node* addfirst(node* head,int value)
{
    node* n = (node*)malloc(sizeof(node));
    n->data = value;
    n->next = head;
    head = n;
    return head;
}
node* addlast(node* head,int value)
{
    node* n = (node*)malloc(sizeof(node));
    n->data = value;
    n->next = NULL;
    if(head == NULL)
    {
        head = n;
        return head;
    }
    node* p = head;
    while(p->next!= NULL)
    {
        p = p->next;
    }
    p->next = n;
}

node*deletefirst(node* head){

    if(head == NULL) 
    {
        printf("Linklist is empty");
    
        return NULL;
    } 
    node* p = head;
    head = head->next;
    free(p);
    return head;
}

node* deleteend(node* head)
{
    if(head == NULL) 
    {
        printf("Linklist is empty");

        return NULL;
    } 
    if(head->next == NULL)
    {
        free(head);
        printf("Linklist is now empty");
        return NULL ;
    }
    node* p = head;
    while(p->next->next != NULL)
    {
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
    return head;    
}


void printlist(node* head)
{
    node* p = head;
    while(p != NULL)
    {
        printf("%d",p->data);
        p  = p->next;
    }
}

int main (){
    node* head = NULL;

    return 0;

}