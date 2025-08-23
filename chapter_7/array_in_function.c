#include <stdio.h>
void bubblesort(int arr[], int n)

{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void pa(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int arrayinput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("enter element at index[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int n;
    printf("enter the number of array element = ");
    scanf("%d", &n);
    int arr[n];
    arrayinput(arr, n);
    printf("array before sorting \n");
    pa(arr, n);
    bubblesort(arr, n);
    printf("\narray after sorting \n");
    pa(arr, n);
    return 0;
}