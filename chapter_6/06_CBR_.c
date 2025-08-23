#include <stdio.h>
void swap(int *,int *);
void swap(int* a,int* b){
    int temp ;
    temp = *a;
    *a= *b;
    *b = temp;
    printf("the value of a = %d \n teh value of b = %d",*a,*b);
}
int main(){
    int a ,b;
    printf("enter the value of a and b = ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
  return 0;
}
