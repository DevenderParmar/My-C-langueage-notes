#include <stdio.h>
int main()
{
    int age ;
    printf("enter age :");
    scanf("%d",&age);
    if (age > 18)
    {
        printf("you are an adult now\n");
    }
    else
    printf("you are still a minor");
    return 0;
}