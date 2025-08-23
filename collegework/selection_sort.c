#include <stdio.h>
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}
int main()
{
    int n;
    printf("enter the number of element of array = ");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i< n;i++){
        printf("enter the element at index [%d] = ",i);
        scanf("%d",&array[i]);
    }
    selectionsort(array,n);
    printf("The sorted array = ");
    printarray(array,n);
    return 0;
}