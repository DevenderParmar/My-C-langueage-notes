#include<stdio.h>
int stack[5];
int top = -1;
void push(int value)
{
    top++;
    stack[top] = value;
}


int main()
{
    push(10);
    push(20);
    push(30);
    printf("%d",stack[top]);
    return 0;
}