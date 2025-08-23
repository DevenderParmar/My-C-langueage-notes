#include <stdio.h>
int main()
{
    char ch;
    printf("Emter the character i OR d =");
    scanf("%c", &ch);
    india( ch);
    return 0;
}

void india(char ch)
{
    if( ch == 'i' || ch == 'I')
    printf("India");
    else
    dubai(ch);
}
void dubai(char ch)
{
    if( ch == 'd' || ch == 'D')
    printf("Dubai");
    else
    printf("invalid character");
}