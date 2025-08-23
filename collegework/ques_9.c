#include <stdio.h>
int main()
{
    int a, b, i;
    printf("enter  your number = ");
    scanf("%d", &a);
    b = a;
    i = 1;
    do
    {
        i = i * a;
        a--;
    } while (a > 1);
    {
        printf("%d! = %d", b, i);
    }

    return 0;
}