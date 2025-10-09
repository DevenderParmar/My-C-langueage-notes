#include<stdio.h>
#include<stdlib.h>

typedef struct triplet
{
    int data;
    int row;
    int col;
    struct triplet* next;
}triplet;

triplet* addlast(triplet* head,int data,int row,int col)
{
    triplet* n = (triplet*)malloc(sizeof(triplet));
    n->data = data;
    n-> row = row;
    n->col = col;
    n->next = NULL;
    if(head == NULL)
    {
        head  = n;
        return head;
    }
    triplet* p = head;
    while(p->next != NULL)
    {
        p =  p->next;
    }
    p->next = n;
    return head;
}
void printarray(triplet* head)
{
    triplet* p = head;
    while(p != NULL)
    {
        printf("%d %d %d --> ",p->data,p->row,p->col);
        p = p->next;
    }
    printf("NULL");

}
int main()
{
    int matrix[5][5] = {
    {0,0,0,0,0},
    {0,0,0,2,0},
    {0,0,0,0,0},
    {0,0,5,0,0},
    {0,0,0,0,0}};
    // triplet arr[2];
    // arr[0].data = 2;
    // arr[0].row = 1;
    // arr[0].col = 3;

    triplet* head = NULL;
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            if(matrix[i][j] != 0)
            {
                head = addlast(head,matrix[i][j],i,j);
            }
        }
    }
    printarray(head);




}