// code for encription.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("enter a string = ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    for(int i = 0;str[i] != '\0';i++)
    {
        str[i] = str[i]+1;
    }
    fputs(str,stdout);

  return 0;
}
