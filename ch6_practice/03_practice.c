#include <stdio.h>
void change_to_30_times(int *i);
void change_to_30_times(int *i)
{
    *i = *i * 30;
}

int main()
{
    int a;
    printf("enter the number = ");
    scanf("%d", &a);

    printf("the value of a is = %d\n", a);
    change_to_30_times(&a);
    printf("the 30 times value of a is = %d", a);
    return 0;
}
