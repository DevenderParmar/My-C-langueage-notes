#include <stdio.h>
float average(float, float);
float average(float a, float b)
{
    printf("average of the two no. = %.2f", (a + b) / 2);
    return (a + b) / 2;
}
int main()
{
    float a, b;
    printf("enter the first number = ");
    scanf("%f", &a);
    printf("enter the second number = ");
    scanf("%f", &b);
    average(a, b);
    return 0;
}