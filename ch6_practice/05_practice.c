#include <stdio.h>
int main(){
    int i = 3;
    int *p = &i;
    int **j= &p;
    printf("the value of the varible i = %d",**j);
  return 0;
}
