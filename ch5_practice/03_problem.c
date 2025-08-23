#include<stdio.h>
void force(float);
void force(float a){
    printf("the force is of mass %.2f = %.2f",a,a*9.8);
}
int main(){
float m;
printf("enter the mass of the object = ");
scanf("%f",&m);
force(m);
}