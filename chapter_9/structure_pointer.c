#include <stdio.h>
struct employee
{
    int id;
    char name[100];
    int salary;
};

int main()
{
    struct employee e1;
    printf("enter the id of first employee = ");
    scanf("%d",&e1.id);
    struct employee *ptr;
    ptr = &e1;
    printf("the id of first employee = %d\n",ptr->id); // they both works the
    printf("the id of first employee = %d",(*ptr).id);
    return 0;
}
