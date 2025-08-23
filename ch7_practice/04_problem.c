#include <stdio.h>
int count(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("\nenter the number of element of array = ");
    scanf("%d", &n);
    int arr[n];
    printf("\n enter the elements in the array ; \n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the element in index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThis given array is : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\ntotal number of even integers in the array is = %d",count(arr,n));
    return 0;
}
