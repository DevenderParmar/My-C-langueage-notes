//TO find the radius of a circle.
#include <stdio.h>
#define PI 3.14159
int main()
{
    float r, area;

    printf("enter the radius of the circle :");
    scanf("%f", &r);

    area = PI * r * r;
    printf("area of the with radius %.2f circle = %.2f", r, area);
    return 0;
}