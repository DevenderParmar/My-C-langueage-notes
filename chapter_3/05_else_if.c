#include <stdio.h>
int main()
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age);
    if (age >= 65){
        printf("youre senior citizen driver\n");
    }
    else if(age >=40) {
        printf("experienced driver");
                       
    }
    else if(age >=18)
    {
        printf("you can drive");
    }
    else 
    printf("you  cant drive");
    
    return 0;
    }