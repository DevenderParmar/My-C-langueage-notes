#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    int n;
    printf("enter the size of array = ");
    scanf("%d", &n);
    ptr = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value at %d location = ", i + 1);
        scanf("%f", &ptr[i]);
    }
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", ptr[i]);
        if (i < n - 1)
        {
            printf(",");
        }
        else
            break;
    }
    printf("]");
    free(ptr);

    return 0;
}
