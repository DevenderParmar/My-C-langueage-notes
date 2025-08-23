#include <stdio.h>
int change(int a);
int change(int a){
    a= 5;
}
    
int main()
{
    int b= 22;
    int c = change(b);
    printf("%d",c);

    return 0;
}