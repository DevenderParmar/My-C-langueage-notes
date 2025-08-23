
#include <stdio.h>
int main()
{
    int marks1, marks2, marks3;
    printf("enter the marks of the subjecrts = ");
    scanf("%d%d%d", &marks1, &marks2 ,&marks3 );
    printf("The Marks are %d %d %d. \n",marks1,marks2,marks3);
    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    printf("you are failed due to less marks in individual subject");
    else if (( marks1 + marks2 + marks3)/3 < 40){
        printf("you are failed because of less total percentage ");
    }
    else
    printf("you are passed");
        return 0;
}