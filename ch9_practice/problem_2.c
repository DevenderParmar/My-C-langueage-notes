#include <stdio.h>
#include <string.h>
typedef struct vector
{
    int i;
    int j;
} vec;
void Vectorsum(struct vector v1,struct vector v2)
{
    int sum_i = (v1.i + v2.i);

    int sum_j = (v1.j+v2.j);

    printf("the sum of the two vectors are = %di +%dj ",sum_i,sum_j);

}


int main()
{
    vec v1,v2;
    
    printf("enter the magnitude of x-axis of first vector  = ");
    scanf("%d", &v1.i);

    printf("enter the magnitude of y-axis first vector = ");
    scanf("%d", &v1.j);

    printf("enter the magnitude of x-axis second vector= ");
    scanf("%d", &v2.i);

    printf("enter the magnitude of y-axis second vector= ");
    scanf("%d", &v2.j);

    printf("the first 2-D vector  =  %di + %dj\n", v1.i, v1.j);
    printf("the second 2-D vector  =  %di + %dj\n", v2.i, v2.j);

    Vectorsum(v1,v2);

    return 0;
}
