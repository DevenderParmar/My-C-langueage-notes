#include <stdio.h>
typedef struct complex
{
    int real;
    int complex;
}com;

void display(com c[])
{
    for(int i = 0;i < 5;i++)
    {
        printf(" the %d complex number = %d + i%d\n",i+1,c[i].real,c[i].complex);
    }
}

int main(){

    com c1[5];
    for(int i = 0;i<5;i++)
    {
        printf("enter the real part of %d complex number = ",i+1);
        scanf("%d",&c1[i].real);

        printf("enter the complex part of %d complex number = ",i+1);
        scanf("%d",&c1[i].complex);
    }
    display(c1);

  return 0;
}
