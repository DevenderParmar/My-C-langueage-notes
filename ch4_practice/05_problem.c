#include <stdio.h>
int main(){
    int n , sum = 0,i;
    printf("ente the no. = ");
    scanf("%d",&n);
    i = n;
    do
    {
        sum += i;
        i--;
    } while (i>=0);
        printf("%d",sum);
    
  return 0;
}
