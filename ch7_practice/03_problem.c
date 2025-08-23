#include <stdio.h>
int arrayreverse(int arr[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int n;
    printf("enter the number of element of array = ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element at index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf(" array before reverse \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    arrayreverse(arr, n);
    printf(" \narray after reverse \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
