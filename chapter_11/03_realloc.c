#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("enter the size of your choice = ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++)
    {
        printf("enter the value at %d locatoin = ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("The given array  = ");
    printf("[");
    for(int i = 0;i<n;i++)
    {
        printf("%d",ptr[i]);
        if(i < n-1)
        {
            printf(", ");
        }
        else 
        break;
    }
    printf("]");
    printf("\nOHH so your want some extra memory for array . FINE!!!\n");

    int m;
    
    printf("enter the amount of extra element then = ");
    scanf("%d",&m);
    
    ptr = (int*)realloc(ptr,m*sizeof(int));
    
    for(int i = n;i<(n+m);i++)
    {
        printf("Enter the element at %d location = ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("The array with added element  = ");
    printf("[");
    for(int i = 0;i<(n+m);i++)
    {
        printf("%d",ptr[i]);
        if(i < (n+m)-1)
        {
            printf(", ");
        }
        else 
        break;
    }
    printf("]");
    free(ptr);
    return 0;
}
