#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    array = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("enter the integers at %d location of the array = ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("The array is = [");
    for (int i = 0; i < 6; i++)
    {
        printf("%d", array[i]);
        if (i < 5)
            printf(",");
        else
        break;
    }
    printf("]");
    free(array);
    return 0;
}
