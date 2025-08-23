#include <stdio.h>
int factorial(int);
int factorial(int n )
{
    // if (n == 1 || n == 0)// base condition.
    // {
    //     return 1;
    // }
    return factorial(n - 1) * n;
}
int main()
{
    int a;
    printf("enter the number = ");
    scanf("%d",&a);
    int c = factorial(a);
    printf("%d! = %d",a,c);

    return 0;
}
