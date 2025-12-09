#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *minimum(node *root)
{
    node *ptr = root;
    while (ptr != NULL && ptr->left != NULL)
    {
        ptr = ptr->left;
    }
    return ptr;
}
node *delete(node *root, int key)
{
    if (root->data > key)
    {
        root->left = delete(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = delete(root->right, key); // in order succor = kisi node ki right me sabse choti value which we will find using minimum function.
    }
    else
    {
        if (root->left != NULL && root->right == NULL)
        {
            int temp = root->left->data;
            root->data = temp;
            root->left = delete(root->left, temp);
        }
        else if (root->left == NULL && root->right != NULL)
        {
            int temp = root->right->data;
            root->data = temp;
            root->right = delete(root->right, temp);
        }
        else
        {
            node *mini = minimum(root->right);
            root->data = mini->data;
            root->right = delete(root->right, mini->data);
        }
    }
}
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
int main(int argc, char const *argv[])
{

    node *root = NULL;
    root = insertBST(root, 10);
    root = insertBST(root, 5);
    root = insertBST(root, 11);
    root = insertBST(root, 23);
    root = insertBST(root, 6);
    root = insertBST(root, 2);
    printf("Before deletion");
    IN_ORDER_trav(root);
    printf("\nAfter deletion");
    root = delete(root, 5);
    IN_ORDER_trav(root);
    return 0;
}