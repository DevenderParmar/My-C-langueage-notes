#include <stdio.h>
char *slice(char str[], int m , int n ){
  static char sliced[100];
  int i = 0;
  for(int j = m;j<=n;j++)
  {
    sliced[i] = str[j];
    i++;
  }
  sliced[i] = '\0';
  return sliced;

}
int main(){
    char string[100];
    printf("enter the string = ");
    fgets(string,sizeof(string),stdin);
    
    printf(" the sliced string = %s",slice(string,2,5));
  return 0;
}
