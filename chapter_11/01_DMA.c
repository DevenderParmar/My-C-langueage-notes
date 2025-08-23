#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of terms = ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    /*int array[n] is not allowed in "C" language

     we are using (int*) because malloc gives a void pointer so we do type casting in order
     to change the void pointer to integer pointer.
     */
    printf("\nmemeory alocated successfully\n");

    for (int i = 0; i < n; i++)
    {
        printf("enter the value at location %d of ptr  = ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("The array of the given size with vales = ");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", ptr[i]);
        if (i < n-1 )
        {
            printf(",");
        }
        else
        {
            break;
        }
    }
    printf("]");

    free(ptr);
    return 0;
}
