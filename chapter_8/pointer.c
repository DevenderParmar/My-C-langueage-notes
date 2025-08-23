#include <stdio.h>
#include<string.h>
int main()
{
    char *string = "hello world";
    for(int i  = 0; *string != '\0';i++)
    {
        printf("%c",*string);
        string++;                     
        
    }
    return 0;
}
