// #include <stdio.h>
// #include <math.h>
// int main()
// {
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
  // int n;
  // printf("Enter the number  =  ");
  // scanf("%d", &n);

  // if(n&1)
  //   printf("The number is odd");
  // else
  //   printf("The number is even");

//   int n;
//   printf("enter the number = ");
//   scanf("%d", &n);

//   int temp = n;
//   int ans = 0;

//   while (temp != 0)
//   {
//     int rem = temp % 10;
//     ans += rem * rem * rem;
//     temp /= 10;
//   }
//   if (n == ans)
//   {
//     printf("YES IT IS A ARMSTRONG NUMBER ");
//   }
//   else
//   {
//     printf("NO ITS NOT A ARMSTRONG NUMBER ");
//   }


//   return 0;
// }
// given a odd length number find the middle digit
// #include <stdio.h> 
// #include <math.h>
// int main()
// {
//   int n;
//   printf("enter the number = ");
//   scanf("%d", &n);

//   int digits = (int)log10(n) + 1;
//   int hund = digits -1;
//   int first = n / pow(10, hund);

//   digits = digits / 2;
//   int mid = (n / (int)pow(10, digits)) % 10;
//   printf("the middle digit is %d", mid);

//   return 0;
// } 
// array[7] means add 7 to the base address so thats why we start array from the 0 because it stores the arr[] stores the address in the memory;
#include <stdio.h>
int main(){
  int sum = 0;
  int array[5];
  for(int i = 0;i<5;i++)
  {
    printf("Enter the value in array at %d = ",i);
    scanf("%d",&array[i]);
  }
  for(int i = 0;i<5;i++)
  {
    sum+= array[i];
  }
  printf("%d",sum);
  return 0;
}
