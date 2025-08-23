// WAP to print the fabonacci series till a given number.
#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
    }
    else if (n == 1)
    {
        printf("Fibonacci Series: 0\n");
    }
    else
    {
        printf("Fibonacci Series: %d, %d", t1, t2);

        for (int i = 3; i <= n; i++)
        {
            nextTerm = t1 + t2;
            printf(", %d", nextTerm);
            t1 = t2;
            t2 = nextTerm;
        }
    }

    return 0;
}
