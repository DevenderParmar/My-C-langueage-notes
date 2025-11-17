#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node* minimum(node* root)
{
    node* ptr = root;
    while( ptr != NULL && ptr->left != NULL)
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
    if (root->data < key)
    {
        root->right = delete(root->right, key); // in order succor = kisi node ki right me sabse choti value which we will find using minimum function.
    }
    else
    {
        if(root->left != NULL && root->right == NULL)
        {
            int temp = root->left->data;
            root->data = temp;
            root->left = delete(root->left,temp);
            
        }
        else if(root->left == NULL && root->right != NULL)
        {
            int temp = root->right->data;
            root->data = temp;
            root->right = delete(root->right,temp);

        }
        else 
        {
            node* mini = minimum(root->right);
            root->data = mini->data;
            root->right = delete(root->right,mini->data);
        }
    }
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
