#include<stdio.h>
float avg(float,float,float);
float avg(float a,float b,float c){
    float avg = (a+b+c)/3;
    printf("the average is = %.2f",avg);
}
int main(){
    float a , b ,c;
    printf("enter the three numbers = ");
    scanf("%f%f%f",&a,&b,&c);
    avg(a,b,c);
    return 0;
}