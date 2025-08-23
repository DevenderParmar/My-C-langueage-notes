#include <stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[100];
    float salary;
};

int main(){
    struct employee s2,s1;

    printf("enter the code of first empoyee = ");
    scanf("%d",&s2.code);
    getchar();
    
    printf("enter the name of first empoyee = ");
    fgets(s2.name,sizeof(s2.name),stdin);
    s2.name[strcspn(s2.name,"\n")] = '\0';
    
    printf("enter the salary of first empoyee = ");
    scanf("%f",&s2.salary);
    getchar();

    printf("name = %s\ncode = %d\nsalary = %f\n",s2.name,s2.code,s2.salary);
    
    
    
  return 0;
}