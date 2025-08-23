#include <stdio.h>
// void adrs(int i)
// {
//     int* ptr;
//     ptr = &i;
//     printf("the address of i =%u",ptr); this is what is did. so at this one i maded a new variable at function
// }                                        so thats why it returnig diff address .
int returning_5(int* ptr){
    printf("the value at ptr is %d\n",*ptr);
    printf("the address at ptr is  %u",ptr);

}
int main()
{
    int i = 5;
    // int p = 6;
    // int *p = &i;
    int* ptr;
    ptr = &i;
    printf("the address of i is = %u\n", ptr);
    returning_5(&i);
    return 0;
}
