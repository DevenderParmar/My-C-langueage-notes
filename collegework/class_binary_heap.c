#include <stdio.h>

void heapify(int arr[], int root, int size)
{
    int left = root * 2 + 1;
    int right = root * 2 + 2;
    int largest = root;
    if (left < size && arr[largest] <= arr[left])
    {
        largest = left;
    }
    if (right < size &&arr[largest] <= arr[right])
    {
        largest = right;
    }
    if (root != largest)

    {
        int temp = arr[largest];
        arr[largest] = arr[root];
        arr[root] = temp;
        heapify(arr,largest,size);
    }
    

}
void heapsort(int arr[], int size)
{
    // BUILT HEAP
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        heapify(arr, i, size);
    }
}
int main()
{
    int arr[] = {3, 2, 1, 5, 6, 8, 7};
    heapsort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr[i]);
    }
}