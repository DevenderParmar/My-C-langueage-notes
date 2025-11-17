#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
node *insertBST(node *root, int key)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = key;
    n->left = NULL;
    n->right = NULL;
    if (root == NULL)
    {
        root = n;
        return root;
    }
    if (root->data > key)
    {
        root->left = insertBST(root->left, key);
    }
    if (root->data < key)
    {
        root->right = insertBST(root->right, key); // binary tree does not have equal values FUKIN STANDARD
    }
    return root;
}
void IN_ORDER_trav(node *root)
{
    if (root == NULL)
        return; // IN ORDER
    IN_ORDER_trav(root->left);
    printf("%d ", root->data);
    IN_ORDER_trav(root->right);
}
int main()
{
    node *root = NULL;
    int key;

    root = insertBST(root, 8);
    root = insertBST(root, 2);
    root = insertBST(root, 1);
    root = insertBST(root, 3);
    root = insertBST(root, 6);

    IN_ORDER_trav(root);
    return 0;
}