#include <stdio.h>
#define size 5    // If you're checking rear == 4, then size must be 5

int queue[size];
int rear = -1;
int front = -1;

void enqueue(int data)
{
    if (rear == size - 1)
    {
        printf("Overflowed!!\n");
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
    if (front == -1)
    {
        printf("Queue underflow\n");
        return -1;
    }

    int copy = queue[front];

    if (front == rear)
    {
        // Queue becomes empty
        front = -1;
        rear = -1;
    }
    else
    {
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

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
}
