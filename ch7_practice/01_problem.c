#include <stdio.h>
int main(){
  int n;
  printf("enter the element = ");
  scanf("%d",&n);

  int arr[n];
  for(int i = 0;i<n;i++){
    printf("enter the element at index %d = ",i);
    scanf("%d",&arr[i]);
  }
  printf("3rd elements of array = %d\n\n",arr[2]);
  int *ptr = arr;
  ptr = ptr + 2;
  printf("array 3rd element using ptr\n\n");
  printf("ptr = ptr + 2 = %d",*ptr);


  return 0;
}
