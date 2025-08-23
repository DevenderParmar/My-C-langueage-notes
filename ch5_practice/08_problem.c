#include <stdio.h>
void pat(){
    int i,j;
    for(i = 1;i<=5;i=i+2){
        for(j = 1;j<=i;j++){
            printf("*");
        }
    printf("\n");
    printf("\n");


    }
}
int main(){
    pat();
  return 0;
}
