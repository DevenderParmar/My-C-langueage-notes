
#include <stdio.h>
int main()
{
  int n, t1 = 0, t2 = 1, next_term;

  printf("Enter the length of the series:\n");
  fflush(stdout);
  scanf("%d", &n);

  if (n <= 0) {
    printf("Please enter a positive integer.\n");
  } else if (n == 1) {
    printf("Fibonacci series: %d\n", t1);
  } else if (n == 2) {
    printf("Fibonacci series: %d %d\n", t1, t2);
  } else {
    printf("Fibonacci series: %d %d ", t1, t2);
    for (int i = 3; i <= n; i++) {
      next_term = t1 + t2;
      printf("%d ", next_term);
      t1 = t2;
      t2 = next_term;
    }
    printf("\n");
  }

  return 0;
}
