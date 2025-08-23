#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rohitt.txt", "w");
    if (ptr == NULL)
    {
        printf("Something went wrong !");
    }
    int num,n,mul ;
    printf("enter the number for mulitplication table = ");
    scanf("%d",&num);
    for(int i = 1;i<=10;i++)
    {
        mul = num*i;
        fprintf(ptr,"%d X %d = %d\n",num,i,mul);

    }
    printf(" written succesfully");
    fclose(ptr);

    return 0;
}
