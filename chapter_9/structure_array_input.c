#include <stdio.h>
#include<string.h>
struct employee 
{
    int id;
    char name[100];
    int salary;
};

int main(){
    struct employee emp[3];

    for(int i = 0;i < 3;i++)
    {
        printf("enter the id of %d employee = ",i+1);
        scanf("%d",&emp[i].name);
        getchar();
        
        printf("enter the name of the %d employee =",i+1);
        fgets(emp[i].name,sizeof(emp[i].name),stdin);
        emp[i].name[strcspn(emp[i].name,"\n")] = '\0';
        // scanf("%s",&emp[i].name);
        
        printf("enter the salary of the %d employee = ",i+1);
        scanf("%d",&emp[i].salary);
        getchar();

    }
    for(int i = 0;i < 3;i++)
    {
        printf("Employee = %d\n",i+1);

        printf("the id of %d employee = %d\n",i,emp[i].id);

        printf("the name of the %d employee = %s\n",i,emp[i].name);

        printf("the salary of the %d employee = %d\n",i,emp[i].salary);

        printf("\n");

    }
  return 0;
}
// #include <stdio.h>
// #include <string.h>

// struct employee {
//     int id;
//     char name[100];
//     int salary;
// };

// int main() {
//     struct employee emp[3];

//     for(int i = 0; i < 3; i++) {
//         // Read the employee's id
//         printf("Enter the id of employee %d: ", i + 1);
//         scanf("%d", &emp[i].id);
//         getchar(); // to consume the newline character after scanf

//         // Read the employee's name
//         printf("Enter the name of employee %d: ", i + 1);
//         fgets(emp[i].name, sizeof(emp[i].name), stdin);
//         emp[i].name[strcspn(emp[i].name, "\n")] = '\0';  // Remove the trailing newline character from fgets

//         // Read the employee's salary
//         printf("Enter the salary of employee %d: ", i + 1);
//         scanf("%d", &emp[i].salary);
//         getchar(); // to consume the newline character after scanf
//     }

//     // Display the employee details
//     for(int i = 0; i < 3; i++) {
//         printf("Employee %d: \n", i + 1);
//         printf("ID: %d\n", emp[i].id);
//         printf("Name: %s\n", emp[i].name);
//         printf("Salary: %d\n", emp[i].salary);
//         printf("\n");
//     }

//     return 0;
// }

