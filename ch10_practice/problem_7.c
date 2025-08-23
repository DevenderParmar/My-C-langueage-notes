#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Rohit.txt", "r");
    if (ptr == NULL)
    {
        printf("something went wrong !!");
    }
    int num;
    fscanf(ptr, "%d", &num);
    ptr = fopen("Rohit.txt", "w");
    if (ptr == NULL)
    {
        printf("something went wrong !!");
        fclose(ptr);
    }
    int double_ = 2 * num;
    
    fprintf(ptr, "%d", double_);
    printf("written succesfully");
    fclose(ptr);

    return 0;
}
