#include <stdio.h>
#include<string.h>
typedef struct employee
{
    int id;
    char name[100];
    int salary;
}emp ;

int main(){
    emp e1[3];
    for(int i = 0; i<3;i++)
    {
        printf(" enter the %d employee detail\n",i+1);
        printf("enter the id of employee %d = ",i+1);
        scanf("%d",&e1[i].id);
        getchar();
        
        printf("enter the name of employee %d = ",i+1);
        fgets(e1[i].name,sizeof(e1[i].name),stdin);
        e1[i].name[strcspn(e1[i].name,"\n")] = '\0';
        
        printf("enter the salary of employee %d = ",i+1);
        scanf("%d",&e1[i].salary);
        getchar();
        printf("\n");
    }
    for(int i = 0; i<3;i++)
    {
        printf("the %d employee detail\n",i+1);
        printf("the id of employee %d = %d\n",i+1,e1[i].id);
        
        printf("the name of employee %d = %s\n",i+1,e1[i].name);

        printf("the salary of employee %d = %d\n",i+1,e1[i].salary);

        printf("\n");
    }

  return 0;
}
