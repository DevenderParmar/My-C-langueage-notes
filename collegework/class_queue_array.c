#include <stdio.h>
#define size 100
int queue[size];
int rear = -1;
int front = -1;
void enqueue(int data)
{
    if (rear == 4)
    {
        printf("Overflowed!!");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}
int dequeue()
{
    if (front = -1)
    {
        printf("queue underflow");
        return -1;
    }
    int copy = queue[front];
    if (front == size - 1)
    {
        front = -1;
        rear = -1;
    }
    else{

        front++;
    }
        return copy;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", queue[i]);
    }
    return 0;
}