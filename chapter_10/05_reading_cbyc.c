#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rohit.txt", "r");
    if (ptr == NULL)
    {
        printf("something went wrong");
    }
    else
    {
        char c;
        while((c = fgetc(ptr)) != EOF)
        {
            printf("%c",c);
        }

    }
    fclose(ptr);
    return 0;
}
