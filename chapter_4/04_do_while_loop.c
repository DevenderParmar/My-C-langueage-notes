#include <stdio.h>
int main()
{
    static i = 1;
    do
    {
        printf("the value of i = %d\n", i);
        i++;
    } while (i < 11);

    return 0;
}
