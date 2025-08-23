#include <stdio.h>
int main(){
    char i ='UN';
    char*ptr = &i; // where ptr is a char address




    // similarly with other datatype .
    printf("%p\n",ptr);
    printf("%=-0\n",*ptr);

  return 0;
}
