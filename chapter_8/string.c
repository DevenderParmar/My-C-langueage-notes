#include <stdio.h>
int main(){
    char string[] = "Hello world";
    for(int i = 0; string[i] != '\0' ;i++)
    {
        printf("%c",string[i]);
    }
    printf("\n%s",string);

  return 0;
}
