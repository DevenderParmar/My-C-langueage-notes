#include <stdio.h>
int main()
{
    int a;
    printf("enter the number = ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you entered 1");
        break;
    case 2:
        printf("you have entered 2");
        break;
    case 3:
        printf("you have entered 3");
        break;
    default:
        printf("something is wrong with you");
    }

    return 0;
}