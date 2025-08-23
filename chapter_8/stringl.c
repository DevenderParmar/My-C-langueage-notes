#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    printf("enter the string = ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    printf("you have entered = ");
    fputs(str,stdout);
    return 0;

}