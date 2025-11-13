#include <stdio.h>
int partition(int arr[], int start, int end)
{
    int j = start - 1;
    int p = arr[end];

    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= p)
        {
            j++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return j;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}
int main()
{
    int arr[] = {56, 17, 10, 19, 24, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot  = partition(arr,0,n-1);
    quicksort(arr,0,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
// Quick sort is in place sorting techniques but we use auxiliary stack space in case of recursion;

// best = nlogn
// worst = n^2;
// average = nlogn