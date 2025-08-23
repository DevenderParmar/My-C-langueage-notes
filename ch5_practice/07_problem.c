#include <stdio.h>
int sum(int);
int sum(int n){
    if (n == 1 ){
        return 1;
    }
    return sum(n-1)+n;
}
int main(){
    int a ,c;
    printf("enter the nomber = ");
    scanf("%d",&a);
    c = sum(a);
    printf("the sum is = %d ",c);
    
  return 0;
}
