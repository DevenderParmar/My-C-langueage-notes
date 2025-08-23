// WAP to swap to numbers using 3rd variable.
#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping:");
    printf("\nFirst number: %d", num1);
    printf("\nSecond number: %d", num2);

    return 0;
}
