#include <stdio.h>
int main()
{
  int i = 32;
  int *ptr = &i;
  printf("the address of i = %u\n", &i);
  printf("the address of i = %u\n", ptr);
   ptr++;                       // THE ptr will be incremented by the no of bytes taken by its datatype for eg = in this the datatype is int so increment will +4
  printf("the address of i = %u", ptr);
  return 0;
}
