#include <stdio.h>
#include<string.h>
typedef struct bank_account
{
    char name[100];
    int account_numer;
    float balance;
}ba;

int main()
{
    ba b1;
    printf("\nenter the details of the customer:\n\n");

    printf("enter the name of the customer = ");
    fgets(b1.name,sizeof(b1.name),stdin);
    b1.name[strcspn(b1.name,"\n")] = '\0';
    
    printf("enter the account number of the customer = ");
    scanf("%d",&b1.account_numer);
    
    printf("enter the balaance of the customer = ");
    scanf("%f",&b1.balance);
    
    printf("the name of the customer = %s\n",b1.name);
    printf("the account number of the customer = %d\n",b1.account_numer);
    printf("the balance of the customer = %f\n",b1.balance);


    return 0;
}
