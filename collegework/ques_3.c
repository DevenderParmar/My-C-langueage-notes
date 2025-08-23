// WAP to check wheater the given number is odd or even
int main()
{
    int a;
    printf("Enter the no. = ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the number %d is even", a);
    }
    else
    {
        printf("the number %d is odd", a);
    }
    return 0;
}