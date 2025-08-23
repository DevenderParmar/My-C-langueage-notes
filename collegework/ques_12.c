// WAP to print the size of a given string including the space.
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("The length of the string including spaces is: %d\n", length);

    return 0;
}
