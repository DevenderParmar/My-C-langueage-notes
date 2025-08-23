#include <stdio.h>
// Function Prototype
int sum(int, int);

// Function definition
int sum(int x, int y)
{
    printf("The sum  is %d\n", x + y);
    return x + y;
}
int main()
{
    int a;
    int b;
    printf("enter the first number and second number = ");
    scanf("%d%d",&a,&b);

    // int c = a+b;

    sum(a,b); // Function call.
    int a2;
    int b2;
    printf("enter first and second number = ");
    scanf("%d%d",&a2,&b2);

    sum(a2,b2);
    return 0;
}