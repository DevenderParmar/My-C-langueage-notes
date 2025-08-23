// #include <stdio.h>
// int main(){
//     int n, fact=1;
//     printf("enter the number = ");
//     scanf("%d",&n);
//     for(int i = n;i >0;i--){
//         fact *= i;
//     }
//     printf("%d",fact);

//   return 0;
// }
#include <stdio.h>
int main(){
    int n, fact=1;
    printf("enter the number = ");
    scanf("%d",&n);
    int i = n;
    while (i>0){
        fact *= i;
        i--;
    }
    printf("%d",fact);

  return 0;
}