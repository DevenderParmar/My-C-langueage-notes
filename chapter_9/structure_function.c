#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[100];
    int salary;
};

void show(struct employee e)
{
    printf("the name of the first employee =%s \n", e.name);

    printf("the id of the first employee = %d\n", e.id);

    printf("the salary of the first employee =%d \n", e.salary);
}

int main()
{
    struct employee e1;
    printf("enter the id of first employee = ");
    scanf("%d", &e1.id);
    getchar();

    printf("enter the name of the first employee = ");
    fgets(e1.name, sizeof(e1.name), stdin);
    e1.name[strcspn(e1.name, "\n")] = '\0';

    printf("enter the sa;ary of first employee = ");
    scanf("%d", &e1.salary);

    show(e1);

    return 0;
}
