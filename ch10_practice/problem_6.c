// take name and salary of two employee as input from the user and wrtie them in a text file.
#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[100];
    int salary;
} emp;
int main()

{

    emp e1, e2;

    printf("enter the name of the first employee = ");
    fgets(e1.name, sizeof(e1.name), stdin);
    e1.name[strcspn(e1.name, "\n")] = '\0';

    printf("enter the salary of the first employee = ");
    scanf("%d", &e1.salary);
    getchar();

    printf("enter the name of the second employee = ");
    fgets(e2.name, sizeof(e2.name), stdin);
    e2.name[strcspn(e2.name, "\n")] = '\0';

    printf("enter the salary of the second employee = ");
    scanf("%d", &e2.salary);

    FILE *ptr;
    ptr = fopen("rohitt.txt", "w");
    if (ptr == NULL)

    {

        printf("Something went wrong");
    }
    fprintf(ptr,"1. %s,%d\n",e1.name,e1.salary);
    fprintf(ptr,"2. %s,%d",e2.name,e2.salary);
    fclose(ptr);
    printf("written succesfully");


    return 0;
}
