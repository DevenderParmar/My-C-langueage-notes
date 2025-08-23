#include <stdio.h>
void printArray(int n, int m, int arr[n][m])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%d", arr[i][j]);
    }
    printf("\n");
  }
}
void scanArray(int n, int m, int arr[n][m]) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          printf("Enter element for position [%d][%d]: ", i, j);
          scanf("%d", &arr[i][j]); // Corrected the scanning part
      }
  }
}
int main()
{
  int n, m;

  printf("enter the rows and column = ");
  scanf("%d%d", &n, &m);

  int arr[n][m];

  printf("put the elements in the 2D matrix\n");
  scanArray(n, m, arr);

  printf("following are the elements of a 2D array\n");
  printArray(n, m, arr);
  return 0;
}
