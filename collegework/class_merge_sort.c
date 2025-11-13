#include <stdio.h>
void merge(int arr[],int start, int mid,int end)
{
    int size1 = mid- start+1;
    int  size2 = end - mid ;

    int arr1[size1];
    int arr2[size2];

    for(int i = 0;i<size1;i++)
    {
        arr1[i] = arr[start +i];
    }
    for(int i = 0;i<size2;i++)
    {
        arr2[i] = arr[mid+1+i];
    }

    int k = start, i = 0, j = 0;
    while (i != size1 && j != size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
    }
    while (i != size1)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j != size2)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
}
void mergesort(int arr[],int start,int end)
{
    if(start == end)
    {
        return;
    }


    int mid = start +(end- start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);

}
int main()
{
    int arr1[] = {4,5,6,1,2};
    int n = sizeof(arr1) / sizeof(arr1[0]);




    mergesort(arr1,0,n-1);

    printf("Sorted array = ");
    for(int i = 0 ;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}