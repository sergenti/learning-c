// Stack Implementation in C

#include <stdio.h>
#include <stdbool.h>

#define STACK_CAPACITY 8

int stack[8];
int top = -1;

bool isEmpty()
{
    return (top == -1) ? true : false;
}

bool isFull()
{
    return (top == STACK_CAPACITY) ? true : false;
}

int peek()
{
    return stack[top];
}

int pop()
{
    if (isEmpty())
        printf("Could not retrieve data, Stack is empty.\n");
    else
        return stack[top--];
}

int push(int data)
{
    if (isFull())
        printf("Could not insert data, Stack is full.\n");
    else
        stack[top++] = data;
}

void traverse()
{
    if (isEmpty())
        printf("ERROR: nothing to traverse!");
    else
    {
        for (int i = top; i <= 0; i--)
            printf("stack[%d] = %d", i, stack[i]);
    }
}

// int main()
// {
//     // push items on to the stack
//     push(3);
//     push(5);
//     push(9);
//     push(1);
//     push(12);
//     push(15);

//     printf("Element at top of the stack: %d\n", peek());
//     printf("Elements: \n");

//     // print stack data
//     while (!isEmpty())
//     {
//         int data = pop();
//         printf("%d\n", data);
//     }

//     printf("Stack full: %s\n", isFull() ? "true" : "false");
//     printf("Stack empty: %s\n", isEmpty() ? "true" : "false");

//     return 0;
