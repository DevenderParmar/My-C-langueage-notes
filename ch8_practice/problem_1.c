#include <stdio.h>
#include <string.h>
int main()
{
    char string[6];

    for (int i = 0; i < 5; i++)
    {
        
        printf("enter the %d charater = ",i+1);
        scanf("%c", &string[i]);
        fflush(stdin);
    }
    string[5] = '\0';
    printf("%s", string);

    return 0;
}
