#include<stdio.h>
int main()
{
    int j = -1;
    int arr[] = { 1,0,2,0,0,3,0,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ;i<len;i++)
    {
        if(arr[i] != 0)
        {
            j++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for(int i = 0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}