#include <stdio.h>
int main(){
    int a;
    int *p= &a;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("the address of the a = %u\n",&a);
    printf("the at address %u is %d",p ,*p);  

  return 0;
}
