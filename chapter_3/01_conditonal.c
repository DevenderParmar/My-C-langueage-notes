#include <stdio.h>
int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("we are insdide\n");
        printf("your age is greater than 10\n");
    }
    if (age % 5 == 0)
    {
        printf("we are insdide another if\n");
        printf("your age is divisible by 5");
    }

    return 0;
}