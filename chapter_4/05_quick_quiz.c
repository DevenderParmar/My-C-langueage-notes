#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    printf("enter your number = ");
    scanf("%d", &n);
    do
    {
        printf("the natural numbers are = %d\n", i);
        i++;
    } while (i <= n);

    return 0;
    
}
