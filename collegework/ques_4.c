// WAP write a program to check the greater number between to given number.
int main()
{
    int a, b;
    printf("Enter the first number =");
    scanf("%d", &a);
    printf("enter the second number =");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is grater than %d", a, b);
    }
    if (b > a)
    {
        printf("%d is greater than %d", b, a);
    }
    return 0;
}