#include <stdio.h>
int main()
{
    int n;
    int prime = 1;
    int i = 2;
    printf("enter the number = ");
    scanf("%d", &n);
    if (n <= 1)
    {
        prime = 0;
    }
    else if (n == 2)
    {
        prime = 1;
    }
    else
    {
        do
        {
            if (n % i == 0)
            { 
                prime = 0;
                break;
            }
            i++;
        } while (i * i <= n);
    }
    if (prime)
    {
        printf("%d is a prime number .", n);
    }
    else
    {
        printf("%d is not a prime number,", n);
    }

    return 0;
}
