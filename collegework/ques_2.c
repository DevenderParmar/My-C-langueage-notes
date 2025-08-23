//  TO FIND  THE AREA OF THE RECTANGLE
#include <stdio.h>
int main()
{
    float l, b, area;
    printf("enter the length of the rectangle : ");
    scanf("%f", &l);
    printf("enter the breadth of rectangle : ");
    scanf("%f", &b);

    area = l * b;
    printf("the area of rectanle with the length %.2f and breadth %f : %.2f", l, b, area);

    return 0;
}