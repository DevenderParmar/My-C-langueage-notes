#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rohitt.txt", "r");
    if (ptr == NULL)
    {
        printf("Something went wrong");
    }
    else
    {
        // int digit1,digit2,digit3;
        // fscanf(ptr,"%d%d%d",&digit1,&digit2,&digit3);
        // printf("these are the three integers in the file = %d ,%d ,%d",digit1,digit2,digit3);
        int num;
        fscanf(ptr, "%d", &num);
        printf("the numbers are %d", num);
        fscanf(ptr, "%d", &num);
        printf(" %d", num);
        fscanf(ptr, "%d", &num);
        printf(" %d", num);
    }
    return 0;
}
