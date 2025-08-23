#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    array = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("enter the integers at %d location of the array = ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("The array is = [");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", array[i]);
        if (i < 5)
        printf(",");
        else
        break;
    }
    printf("]");
    array = (int *)realloc(array,5 * sizeof(int));
    for(int i = 5;i<10;i++)
    {
        printf("\nenter the term at %d location = ",i+1);
        scanf("%d",&array[i]);
    }
    printf("The array BECOME = [");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
        if (i < 9)
        printf(",");
        else
        break;
    }
    printf("]");
    free(array);
    return 0;
}
