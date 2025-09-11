#include <stdio.h>
#include <math.h>
int main()
{
  // int x1, y1, x2, y2;
  // float radius;

  // printf("Enter the radius of the radar = ");
  // scanf("%f", &radius);

  // printf("Enter the coordinates of the center of the radar = ");
  // scanf("%d %d", &x1, &y1);

  // printf("Enter the coordinates of the object = ");
  // scanf("%d %d", &x2, &y2);

  // float distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  // if (distance < radius)
  //   printf("The object is within the radar range");
  // else if (distance == radius)
  //   printf("The object is on the radar range");
  // else
  //   printf("The object is out of the radar range");
  int n;
  printf("Enter the number  =  ");
  scanf("%d", &n);

  if(n&1)
    printf("The number is odd");
  else
    printf("The number is even");

  return 0;
}
