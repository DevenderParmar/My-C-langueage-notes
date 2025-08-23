// wap to swap two number using 2 variables only.
#include <stdio.h>
int main()
{
  int a, b;
  printf("enter the nomber a = ");
  scanf("%d", &a);
  printf("enter the nomber b = ");
  scanf("%d", &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("AFTER SWAPPING a = %d and b = %d ", a, b);
  return 0;
}
