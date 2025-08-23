// WAP to print the factorial using for loop.
#include <stdio.h>
int main()
{
  int a, b, i, m;
  printf("enter your number = ");
  scanf("%d", &a);
  m = 1;

  for (i = 1; i <= a; i++)

    m *= i;

  printf("%d! = %d ", a, m);

  return 0;
}
