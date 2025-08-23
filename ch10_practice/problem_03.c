#include <stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rohitt.txt", "r");
    if (ptr == NULL)
    {
        printf("something went wrong!");
    }
    char c;
    while ((c = fgetc(ptr)) != EOF)
    {
        printf("%c", c);
        if((c = fgetc(ptr)) == '\n')
        {
            break;
        }
    }
    fclose(ptr);
    return 0;
}
