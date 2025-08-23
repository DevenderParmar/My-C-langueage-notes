#include <stdio.h>
int main(){
  int n,a;
  printf("enter the element = ");
  scanf("%d",&n);
  printf("enter the number for multiplication table  = ");
  scanf("%d",&a);

  int arr[n];
  for(int i = 0;i <=n;i++){
    arr[i]= a*(i+1);
  }
  for(int i = 0;i<n;i++){
    printf(" %d x %d = %d\n",a,(i+1),arr[i]);
  }

  return 0;
}
