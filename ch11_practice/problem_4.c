#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    array = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        array[i] = 7*(i+1);
    }
    printf("The array is = [");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
        if (i < 9)
        printf(",");
        else
        break;
    }
    printf("]");
    array = (int *)realloc(array,15 * sizeof(int));
    for(int i = 10;i<15;i++)
    {
        array[i] = 7*(i+1);
    }
    printf("\nThe array BECOME = [");
    for (int i = 0; i < 15; i++)
    {
        printf("%d", array[i]);
        if (i < 14)
        printf(",");
        else
        break;
    }
    printf("]");
    free(array);
    return 0;
}
