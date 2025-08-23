#include <stdio.h>
int main()
{
  int marks[] = {12, 43, 21, 35, 67};
  int *ptr = marks; // same as int *ptr = &marks[0];
  for (int i = 0; i < 5; i++)
  {
    printf("the element at index %d is = %d\n", i, marks[i]);
  }
  printf("\n\n");
  for (int i = 0; i < 5; i++)
  {
    printf("the address of elements %d is = %d\n", marks[i], ptr);
    ptr++;
  }

  return 0;
}
