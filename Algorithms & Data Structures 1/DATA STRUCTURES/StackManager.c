// Stack implementation using STATIC array

// Libraries

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Pre-Processor MACRO
#define CAPACITY 10

int stack[CAPACITY];
int top = -1;
int choice, data;
bool execution = true;

/* ======================================================================
** INSTRCUT FUNCTION: gives instrcutions & collects user's choice
*/

void instruct(int *choice)
{
    printf("\033[1;36mSTACK MANAGEMENT INTERFACE\n");
    printf("Enter your Choice:\n\n");

    printf("1) Push\n");
    printf("2) Pop\n");
    printf("3) Peek\n");
    printf("4) Traverse\n");
    printf("5) Quit\033[0m\n\n");

    scanf("%d", choice);
}

/* ======================================================================
** IS EMPTY FUNCTION: checks if stack is empty
*/

bool isEmpty()
{
    return (top == -1) ? true : false;
}

/* ======================================================================
** IS FULL FUNCTION: checks if stack is full
*/

bool isFull()
{
    return (top == CAPACITY - 1) ? true : false;
}

/* ======================================================================
** PUSH FUNCTION: pushes new data inside the stack (@ the top)
*/

void push(int data)
{
    if (isFull())
        printf("\n\033[1;31mCould not insert data, Stack is full.\033[0m\n\n");
    else
    {
        top++;
        stack[top] = data;
        printf("pushed element %d\n\n", data);
    }
}

/* ======================================================================
** POP FUNCTION: removes the first element of the stack (@ the top)
*/

void pop()
{
    if (isEmpty())
        printf("\n\033[1;31mCould not retrieve data, Stack is empty.\033[0m\n\n");
    else
    {
        int element = stack[top];
        printf("\npopped element %d from the stack\n\n", element);
        --top;
    }
}

/* ======================================================================
** PEAK FUNCTION: returns first element of stack (@ the top)
*/

void peak()
{
    if (isEmpty())
        printf("\n\033[1;31mERROR: nothing to peak!\033[0m\n\n");
    else
        printf("\nthe first element of the stack is: %d\n\n", stack[top]);
}

/* ======================================================================
** TRAVERSE FUNCTION:prints all items inside the stack from bottom to top
*/

void traverse()
{
    if (isEmpty())
        printf("\n\033[1;31mERROR: nothing to traverse!\033[0m\n\n");
    else
    {
        printf("\n");
        for (int i = top; i >= 0; i--)
            printf("stack[%d] = %d\n", i, stack[i]);
        printf("\n");
    }
}

/* ======================================================================
** MAIN METHOD
*/

int main()
{
    // if top: -1 stack is empty

    while (execution)
    {
        instruct(&choice);

        switch (choice)
        {
        case 1:
            printf("\nenter element: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
        default:
            printf("\n\033[1;31mInvalid input\033[0m\n\n");
        }
    }
}
