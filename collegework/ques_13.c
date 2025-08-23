// write a program to print the LCM of two given numbers.
#include <stdio.h>
int main()
{
    int a, b, max;
    printf("enter the number a and b = ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    while(1)
    if(max%a == 0 && max%b == 0){
        printf("THE LCM OF THE GIVEN NUMBER IS %d",max);
        break;
    }
    else{
        max++;
    }
    return 0;
}
