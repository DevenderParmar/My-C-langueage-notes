#include <stdio.h>
#define size 100
int stack[size];
int top = -1;
void push(int value)
{
    if (top == size)
    {
        printf("stack overflow");
        return;
    }
    top++;
    stack[top] = value;
}
int pop()
{
    if(top == -1)
    {
        printf("stack under flow");
        return -1;
    }
    int copy = stack[top];
    top--;
    return copy;
}
void peek()
{
    printf("%d",stack[top]);
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(30);
    push(30);
    push(30); // stack overflow after that
    push(30);
    push(30);
    printf("%d", stack[top]);
    return 0;
}