//WAP to calculate a factorial of a given number using while loop.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter your number :");
    scanf("%d", &a);
    c = a;
    b = 1;
    while (a > 1)
    {
        b = b * a;
        a--;
    }
    printf("the factorial of %d! is = %d", c, b);

    return 0;
}