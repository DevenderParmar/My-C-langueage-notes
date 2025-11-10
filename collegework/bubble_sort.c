// // #include <stdio.h>
// // void bubblesort(int arr[], int n)
// // {
// //     int temp;
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         int flag = 0;
// //         for (int j = 0; j < n - i - 1; j++)
// //         {
// //             if (arr[j] < arr[j + 1])
// //             {
// //                 temp = arr[j];
// //                 arr[j] = arr[j + 1];
// //                 arr[j + 1] = temp;
// //                 flag = 1;
// //             }
// //         }
// //             if (flag == 0)
// //                 break;
// //     }
// // }
// // void printarray(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("%d\t", arr[i]);
// //     }
// // }

// // int main()
// // {
// //     int arr[10] = {3, 32, 36, 25, 62, 235, 4, 36, 74, 9};
// //     int n = 10;
// //     bubblesort(arr, n);
// //     printf("the sorted array = ");
// //     printarray(arr, n);

// //     return 0;
// // }

// // used to sort an array in ascending order by comparing them and then swaping the greater one.
// // in first iteration we move the biggest element of the array to the end of the array.
// // and similarly with the other one.
// // it works on (n-1) times iteration.means if the first iteration goes to n number of eleemt ,
// // so the next iteration will go to (n-1) number of element.
// // so also the code will run (n-1) times of as the last element will be the smallest.#include <stdio.h>
// // #include <stdio.h>

// // void bubblesort(int arr[], int n) {
// //     int temp;
// //     for (int i = 0; i < n - 1; i++) {
// //         int flag = 0;
// //         for (int j = 0; j < n - i - 1; j++) {  // Fixed the loop boundary for the inner loop
// //             if (arr[j] < arr[j + 1]) {
// //                 temp = arr[j];
// //                 arr[j] = arr[j + 1];
// //                 arr[j + 1] = temp;
// //                 flag = 1;
// //             }
// //         }
// //         if (flag == 0) {
// //             break;  // Only break after the inner loop completes
// //         }
// //     }
// // }

// // void printarray(int arr[], int n) {
// //     for (int i = 0; i < n; i++) {
// //         printf("%d\t", arr[i]);
// //     }
// //     printf("\n");  // Added newline for better output formatting
// // }

// // int main() {
// //     int arr[10] = {3, 32, 36, 25, 62, 235, 4, 36, 74, 9};
// //     int n = 10;
// //     bubblesort(arr, n);  // Sorting the array
// //     printf("The sorted array = ");
// //     printarray(arr, n);  // Printing the sorted array

// //     return 0;
// // }
// #include <stdio.h>
// void bubblesort(int arr[], int n)
// {
//     int temp;
//     int flag = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 flag = 1;
//             }
//         }
//         if (flag == 0)
//         {
//             break;
//         }
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
//     printf("enter the number of element of array = ");
//     scanf("%d",&n);
//     int array[n];
//     for(int i = 0;i< n;i++){
//         printf("enter the element at index [%d] = ",i);
//         scanf("%d",&array[i]);
//     }
//     bubblesort(array,n);
//     printf("The sorted array = ");
//     printarray(array,n);
//     return 0;
// }