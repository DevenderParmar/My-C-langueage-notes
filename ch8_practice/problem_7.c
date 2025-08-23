#include <stdio.h>
#include <string.h>
int main()
{

    char check;
    char string[100];
    int occurance = 0;

    printf("enter the string = ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    printf("enter the charater whose occurance you want to check = ");
    scanf("%c", &check);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == check)
        {
            occurance++;
        }
    }
    printf("'%c' comes %d times in the given string .", check, occurance);
    return 0;
}
