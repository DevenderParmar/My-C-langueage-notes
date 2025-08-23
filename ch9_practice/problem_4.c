#include <stdio.h>
typedef struct complex
{
    int real ;
    int complex;
}com;

int main(){
    com c1;

    printf("enter the real part of complex number = ");
    scanf("%d",&c1.real);

    printf("enter the complex part of complex number = ");
    scanf("%d",&c1.complex);

    printf("the complex number = %d + i%d",c1.real,c1.complex);
  return 0;
}
