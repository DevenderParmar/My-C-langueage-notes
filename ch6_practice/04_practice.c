#include <stdio.h>
int* sum(int a , int b){
    int s = a+b;
    int*ptr = &s;
    printf("the sum  = %d\n",s);
    return ptr;
}
float* avg(int a , int b){
    float avg = (a+b)/2.0;
    float*ptr = &avg;
    printf("the average  = %f\n",avg);
    return ptr;
}
int main(){
    int x , y ;
    x = 4;
    y = 6;
    int*ptr1;
    float* ptr2;
    ptr1 = sum(x,y);
    ptr2 = avg(x,y);
    printf("the address of sum = %u \nand address of averge = %u ",ptr1,ptr2);
  return 0;
}
