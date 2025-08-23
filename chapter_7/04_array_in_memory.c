#include <stdio.h>
int main(){
    int array[10];
    for(int i = 0;i<10;i++){
        printf("enter the element at index array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    for(int i = 0;i<10;i++){
        printf("the adress of element %d = %u\n",array[i],&array[i]);
    }
  return 0;
}
// it shows us that the array take place as contigous blocks in the memory.