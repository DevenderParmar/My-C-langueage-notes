#include <stdio.h>
#include<string.h>
// int strlen(char str[])
// {
//     int count = 0;

//     for(int i = 0 ;str[i] != '\0'; i++){
//         count++;

//     }
//     return count;
// }
int main(){
    char string[100];
    printf("enter a string = ");
    fgets(string,sizeof(string),stdin);

    printf("the length of the given string is = %d",strlen(string));
  return 0;
}
