#include <stdio.h>
int main()
{
    int n;
    int prime = 1;
    int i = 2;
    printf("eneter the nmber = ");
    scanf("%d", &n);
    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        while (i * i <= n)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
                i++;
        }
    }
    if(prime){
        printf("%d is a prime number .",n);
    }
    else {
        printf("%d is not a prime number . ",n);
    }
    return 0;
}
