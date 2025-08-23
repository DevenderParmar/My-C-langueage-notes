#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rohit.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is = %d", num);
    fscanf(ptr, "%d", &num);
    printf("\nthe value of num is = %d", num);

    return 0;
}
