#include <stdio.h>
int fab(int);
int fabo(int n)
{

    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fabo(n - 1) + fabo(n - 2);
}
int main()
{
    int n, ser;
    printf("enter the number = ");
    scanf("%d", &n);
    ser = fabo(n);
    printf("the value of fabonacci series at %d is = %d", n, ser);
    return 0;
}