// WAP to check wheather a number is divisible by 97 or not.
#include <stdio.h>
int main()
{

    int a;
    printf("enter the nuber you want to check = ");
    scanf("%d", &a);
    if (a % 97 == 0)
        printf("divisible by 97");
    else
        printf("not divisible by 97");

    return 0;
}