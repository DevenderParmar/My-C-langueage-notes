#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100],string2[100];

    printf("enter the first string = ");
    fgets(string1,sizeof(string1),stdin);
    string1[strcspn(string1,"\n")] = '\0';

    printf("enter the second string = ");
    fgets(string2,sizeof(string2), stdin);
    string2[strcspn(string2,"\n")]= '\0';

    // int lenght = strlen(string1);
    // printf("the lenght of first string is = %d\n", lenght);

    // int lenght2 = strlen(string2);
    // printf("the lenght of second string is = %d\n", lenght2);

    // printf(" Total string = %s",strcat(string1,string2));
    // printf("\ncopied string = %s",strcpy(string1,string2));

    int comp = strcmp(string1,string2);

    if(comp == 0){
        printf("both strings are equal ");
    }
    else if ( comp >0){
        printf("the first string is greater than the second string ");
    }
    else {
        printf("the second string is greater than the first string.");
    }

    return 0;
}
