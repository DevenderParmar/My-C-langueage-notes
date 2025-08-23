#include <stdio.h>
int main(){
    int n;
    printf("enter your number = ");
    scanf("%d",&n);
    for(int i = 1;i< n+1;i++)
    {
        printf("the value of i = %d\n",i);
        printf("\n");
    }
  return 0;
}