#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int id;
    char name[100];
    int salary;
} emp;

int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    printf("enter the details of the first empoyee ;\n");

    printf("enter the id of first employee = ");
    scanf("%d",&ptr->id);
    getchar();

    printf("enter the name of first employee = ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = '\0';

    printf("enter the salary of first employee = ");
    scanf("%d",&ptr->salary);

    printf("\n\nthe id of first employee = %d\n\n", ptr->id);

    printf("the id of name employee = %s\n\n", ptr->name);

    printf("the id of salary employee = %d\n\n", ptr->salary);

    return 0;
}
