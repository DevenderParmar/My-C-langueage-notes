#include <stdio.h>
#define size 100

int stack[size];
int top = -1;

void push(int value)
{
    if (top == size - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    int copy = stack[top];
    top--;
    return copy;
}

void peek()
{
    if (top == -1)
    {
        printf("Stack empty\n");
        return;
    }
    printf("%d\n", stack[top]);
}

int main()
{
    push(10);
    push(20);
    push(30);

    for(int i = 0; i < 105; i++)
        push(30);   // properly shows overflow

    printf("%d\n", stack[top]); // safe

    return 0;
}
