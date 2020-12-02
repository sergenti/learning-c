// Queue Implementation in C

#include <stdio.h>
#include <stdbool.h>

#define QUEUE_CAPACITY 8

int stack[8];
int top = -1;

bool isEmpty()
{
    return (top == -1) ? true : false;
}

bool isFull()
{
    return (top == QUEUE_CAPACITY) ? true : false;
}

int peek()
{
    return stack[top];
}

int dequeue()
{
}

int enqueue(int data)
{
}
