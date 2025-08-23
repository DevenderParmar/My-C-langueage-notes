#include<stdio.h>
int main()
{ 
    int r,t;
    float p;
    printf("enter the principal , rate of interest and time = ");
    scanf("%f%d%d",&p,&r,&t);
    float i;
    i = (p*r*t)/100;
    printf("the simple interest of given values = %f",i);
    return 0;
}