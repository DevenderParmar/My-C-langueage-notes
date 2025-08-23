#include <stdio.h>
int sum(int* a, int* b)
{

  // // sum should change the value of a.
 *a = 6;
 *b = 6;
  printf("the sum is = %d\n",*a + *b);
  return 0;
}

int main()
{
  int x,y;
  printf("enter the value of x and y = ");
  scanf("%d%d", &x, &y);
  sum(&x, &y);
  printf("the valua of x is %d \n",x);
  printf("the valua of y is %d \n",y);
  return 0;
}
