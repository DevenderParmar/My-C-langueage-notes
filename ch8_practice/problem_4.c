#include <stdio.h>
char *strcpy(char str1[],char str2[]){
    char temp ;
    int i ;
    for( i = 0;str2[i] != '\0';i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
    return str1;
    
}
int main(){
    char s1[100],s2[100];
    printf("enter the first string = ");
    fgets(s1,sizeof(s1),stdin); 

    printf("enter the second string = ");
    fgets(s2,sizeof(s2),stdin);

    printf("the first string becomes = %s",strcpy(s1,s2));
  return 0;
}
