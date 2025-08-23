// #include <stdio.h>
// int main(){
//     int n,i;
//     int mul = n*i;
//     printf("enter the number = ");
//     scanf("%d",&n);
//     for(i = 1;i <= 10;i++){
//         printf("%d * %d = %d\n",n,i,n*i);
//     }
//   return 0;
// }
#include <stdio.h>
int main()
{
  int n;
  // int i = n;
  printf("enter the number = ");
  scanf("%d", &n);
  for (int i = 10; i > 0; i--)
  {
    printf("%d x %d = %d\n", n, i, n * i);
  }
  return 0;
}
