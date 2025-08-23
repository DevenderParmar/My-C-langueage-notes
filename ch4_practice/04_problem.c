#include <stdio.h>
int main(){
    int n,sum = 0;
    printf("enter the number =");
    scanf("%d",&n);
    for(int i = n;i>=0;i--){
        sum =sum + i;
    }
    printf("%d",sum);
  return 0;
}
