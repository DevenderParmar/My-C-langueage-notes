// #include <stdio.h>
// void insertionsort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = temp;
//     }
// }
// void printarray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf(" %d", arr[i]);
//     }
// }
// int main()
// {
//     int n;
//     printf("you want array of elements ? = ");
//     scanf("%d",&n);
//     int array[n];
//     for(int i = 0;i< n;i++){
//         printf("ENter the element at index [%d] = ",i);
//         scanf("%d",&array[i]);
//     }
//     insertionsort(array,n);
//     printf("the sorted array is = ");
//     printarray(array,n);
//     return 0;
// }
#include <stdio.h>
void insertionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j]> temp){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = temp;

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
    printf("you want array of elements ? = ");
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i< n;i++){
        printf("ENter the element at index [%d] = ",i);
        scanf("%d",&array[i]);
    }
    insertionsort(array,n);
    printf("the sorted array is = ");
    printarray(array,n);
    return 0;
}