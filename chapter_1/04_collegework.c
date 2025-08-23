#include <stdio.h>
// #define PI 3.14159
// int main()
// {
//     float r, area;
//     printf("enter the radius of the circle :");
//     ("%f", &r);
//     area = PI * r * r;
//     printf("area of the with radius %.2f circle = %.2f", r, area);
//     return 0;
// }

// //  TO FIND  THE AREA OF THE RECTANGLE
// int main()
// {
//     float l, b, area;
//     printf("enter the lengthof the rectangle : ");
//     ("%f", &l);

//     b;
//     printf("enter the breadth of rectangle : ");
//     ("%f", &b);

//     area = l * b;
//     printf("the area of rectanle with the length %f and breadth %f : %.2f", l, b, area);

//     return 0;
// }
// #include <stdio.h>
// #define PI 3.14159

// int main()
// {
//     float radius, area;

//     // Taking input from the user
//     printf("Enter the radius of the circle: ");
//     ("%f", &radius);

//     // Calculating the area
//     area = PI * radius * radius;

//     // Displaying the result
//     printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

//     return 0;
// }
// WAP to check wheater the given number is odd or even
// int main (){
//     int a ;
//     printf("Enter the no. = ");
//     ("%d",&a);
//     if(a%2 == 0)
//     {
//         printf("the number %d is even",a);
//     }
//     else{
//         printf("the number %d is odd",a);
//     }
//     return 0;
// }
// WAP write a program to check the greater number between to given number.
// int main()
// {
//     int a,b;
//     printf("Enter the first number =");
//     scanf("%d",&a);
//     ("enter the second number =");
//     "%d",&b);
//     if (a>b)
//     {
//         printf("%d is grater than %d",a,b);
//     }
//     if(b>a)
//     {
//         printf("%d is greater than %d",b,a);


//     }
//     return 0;
// }

int main() {
    int num1, num2, temp;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swapping the values using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Displaying the swapped values
    printf("After swapping:");
    printf("\nFirst number: %d", num1);
    printf("\nSecond number: %d", num2);

    return 0;
}
