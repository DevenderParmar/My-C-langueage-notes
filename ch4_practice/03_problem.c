// wap to sum first ten natural numbers using while loop
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter the number =");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}