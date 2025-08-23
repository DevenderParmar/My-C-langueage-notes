#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value at index marks[%d] = ", i);
        scanf("%d", &marks[i]);
    }
    printf("The marks of five subjects are = ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ,", marks[i]);
    }
    return 0;
}
