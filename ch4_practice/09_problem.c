#include <stdio.h>
int main()
{
    int n, prime = 1;
    printf("enter the number = ");
    scanf("%d",&n);
    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
    {
        printf("%d is prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}
