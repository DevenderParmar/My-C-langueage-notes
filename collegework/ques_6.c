// WAP to calculate the factorial of the given number by while loop.
#include <stdio.h>
int main()
{
    long int n, i, fact = 1;
    printf("enter your number = ");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }
    printf("%d! =  %d", n, fact);
    return 0;
}
