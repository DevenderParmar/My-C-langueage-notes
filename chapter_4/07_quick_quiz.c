#include <stdio.h>
int main()
{
    int n;
    printf("enter the number = ");
    scanf("%d", &n);
    for (int i = n; i ; i--)
    {
        printf("the given number - 1= %d\n", i);
    }
    return 0;
}
