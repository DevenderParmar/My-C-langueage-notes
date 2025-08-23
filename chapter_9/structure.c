#include <stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[100];
    float salary;
};

int main(){
    struct employee s1,s2;
    s1.code = 1234;
    strcpy(s1.name,"vansh");


    s1.salary = 99999.99;

    printf("name = %s\ncode = %d\nsalary = %d\n",s1.name,s1.code,s1.salary);


    
  return 0;
}
