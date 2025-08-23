#include <stdio.h>
float c2f(float);
float c2f(float a)
{
    printf("%.2f celsius is %.2f is fahrenheit", a, (9*a)/5 + 32);
}
int main()
{
    float c;
    printf("enter the degree in celsius = ");
    scanf("%f", &c);
    c2f(c);
    return 0;
}