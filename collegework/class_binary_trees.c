#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
void PRE_ORDER_trav(node* root)
{
    if(root == NULL) return; // PRE ORDER PRINTING = A TRAVEL TAECHNIQUE IN WHICH THE PRINTING DONE FIRST THEN CALL THE FUNCTION . FIRST OF ALL WE PROCESS THE CURRENT NODE THEN WE PROCESS THE LEFT SUB TREE THEN WE PROCESS THE RIGHT SUB TREE
    printf("%d ",root->data);
    PRE_ORDER_trav(root->left);
    PRE_ORDER_trav(root->right);


}
void IN_ORDER_trav(node* root)
{
    if(root == NULL) return; // IN ORDER 
    IN_ORDER_trav(root->left);
    printf("%d ",root->data);
    IN_ORDER_trav(root->right);


}
void POST_ORDERtrav(node* root)
{
    if(root == NULL) return; // post ORDER 
    POST_ORDERtrav(root->left);
    POST_ORDERtrav(root->right);
    printf("%d ",root->data);


}
int main()
{
    node *n1 = (node *)malloc(sizeof(node));
    node *n2 = (node *)malloc(sizeof(node));
    node *n3 = (node *)malloc(sizeof(node));
    node *n4 = (node *)malloc(sizeof(node));
    node *n5 = (node *)malloc(sizeof(node));
    node *n6 = (node *)malloc(sizeof(node));
    node *n7 = (node *)malloc(sizeof(node));

    n1->data = 1;
    n2->data = 3;
    n3->data = 7;
    n4->data = 4;
    n5->data = 2;
    n6->data = 8;
    n7->data  = 5;

    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    n3->left = NULL;
    n3->right = n6;

    n4->left = NULL;
    n4->right = NULL;

    n5->left = n7;
    n5->right = NULL;

    n6->left = NULL;
    n6->right = NULL;

    n7->left = NULL;
    n7->right = NULL;

    printf("pre order = ");
    PRE_ORDER_trav(n1);
    printf("\n");
    printf("in order = ");
    IN_ORDER_trav(n1);
    printf("\n");
    printf("Post order = ");
    POST_ORDERtrav(n1);

    return 0;
} 