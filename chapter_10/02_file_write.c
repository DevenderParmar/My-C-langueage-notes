#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rohit.txt", "w");
    if (ptr == NULL)
    {
        printf("This file is not exist");
    }
    else
    {
        int num;
        num = 69;
        fprintf(ptr, "%d\t", num);
        printf("\nwritten successfully");
        num = 69;
        fprintf(ptr, "%d\t", num);
        printf("\nwritten successfully");
    }
    fclose(ptr);
    return 0;
}
