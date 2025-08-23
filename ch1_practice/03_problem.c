// WAP to convert celsuis temperature to farenheit
#include<stdio.h>

int main(){

    float c ;
    float f;
    printf("enter your temperture = ");
    scanf("%f",&c);
    f = (9.0/5.0)*c+32;
    printf("the %.3f celcius  is %.3f is farenheit ",c,f);


    return 0;
}