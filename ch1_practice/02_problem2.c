// calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
#include<stdio.h>
#define PI 3.14
// int main(){
//     float r,area;
//     printf("Enter radius of the circle = ");
//     scanf("%f",&r);
//     area = PI*r*r;
//     printf("The area of the circle :%.3f",area);
//     return 0;
// }
int main(){
    float r,h,v;
    printf("Enter the radius of the cylinder = ");
    scanf("%f",&r);
    printf("Enter the height of the cylinder =");
    scanf("%f",&h);
    v = PI*r*r*h;
    printf("The volume of the cylinder = %.3f",v);
    return 0;
}