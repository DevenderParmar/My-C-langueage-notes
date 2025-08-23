#include <stdio.h>
#include <string.h>
typedef struct vector
{
    int i;
    int j;
} vec;

int main()
{
    vec v1;
    
    printf("enter the magnitude of x-axis = ");
    scanf("%d", &v1.i);

    printf("enter the magnitude of y-axis = ");
    scanf("%d", &v1.j);

    printf("the 2-D vector  =  %di + %dj", v1.i, v1.j);

    return 0;
}
