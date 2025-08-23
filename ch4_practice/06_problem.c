#include <stdio.h>
int main()
{
    int n,sum = 0;
    printf("enter the number = ");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        sum += (n*i);
    }
    printf("%d",sum);
    return 0;
}
