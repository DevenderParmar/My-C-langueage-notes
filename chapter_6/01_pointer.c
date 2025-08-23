// A pointer is a variable who stores the vlaue of an another variable

#include <stdio.h>
int main(){
    int c = 71;
    int k = 71875;
    int* j = &c;// to declare a pointer variable. use "datatype* varible"
    printf("%u\n",&c);
    printf("%u\n",j);
    printf("%u\n",&j);
    printf("%u\n",*j);
  return 0;
}
