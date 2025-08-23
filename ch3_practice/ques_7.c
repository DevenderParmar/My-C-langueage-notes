#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("enter the numbers one by one = ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
        printf("%d is the greater of among them", num1);
    else if (num2 > num3 && num2 > num4)
        printf("%d is the greater among them", num2);
    else if (num3 > num4)
        printf("%d is the greater among them", num3);
    else
        printf("%d is the greater ", num4);

    return 0;
}
