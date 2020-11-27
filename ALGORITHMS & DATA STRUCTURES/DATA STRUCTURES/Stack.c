// Stack implementation using STATIC array

// Libraries
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Pre-Processor MACRO
#define CAPACITY 10

// Prototypes
void instruct(int *choice);

bool isFull(int *top);
bool isEmpty(int *top);
int peak(int stack[], int *top);
void pop(int stack[], int *top);
void traverse(int stack[], int *top);
void push(int element, int *stack, int *top);

int main()
{
    // if top: -1 stack is empty
    int stack[CAPACITY];
    int top = -1;

    int choice;
    bool execution = true;

    while (execution)
    {
        instrcut(&choice);

        switch (choice)
        {
        case 1:
            push();
        case 2:
            pop();
        case 3:
            peak();
        case 5:
            exit(0);
        default:
            printf("invalid input");
        }
    }
}

/* ===============================================================
** INSTRCUT FUNCTION: gives instrcutions & collects user's choice
*/

void instruct(int *choice)
{
    printf("Stack Implementation Inferface\n");
    printf("Enter your Choice:\n\n");

    printf("1) Push\n");
    printf("2) Pop\n");
    printf("3) Peek\n");
    printf("4) Traverse\n");
    printf("5) Quit\n");

    scanf("%d", choice);
}

/* ===============================================================
** IS EMPTY FUNCTION: gives instrcutions & collects user's choice
*/

bool isEmpty(int *top)
{
    return (*top == -1) ? true : false;
}

/* ===============================================================
** IS FULL FUNCTION: gives instrcutions & collects user's choice
*/

bool isFull(int *top)
{
    return (*top == CAPACITY - 1) ? true : false;
}

/* ===============================================================
** PUSH FUNCTION: gives instrcutions & collects user's choice
*/

void push(int element, int stack[], int *top)
{
    // cannot store directly, check if there is free space left
    if (isFull(top))
        printf("ERROR: stack is full!");
    else
    {
        top++;
        stack[*top] = element;
        printf("\nelement %d pushed into the stack\n", element);
    }
}

/* ===============================================================
** POP FUNCTION: gives instrcutions & collects user's choice
*/

void pop(int stack[], int *top)
{
    // cannot store directly, check if there is space occipied
    if (isEmpty(top))
        printf("ERROR: nothing to pop!");
    else
    {
        int element = stack[*top];
        top--;
        printf("\nelement %d popped from the stack\n", element);
    }
}

/* ===============================================================
** PEAK FUNCTION: gives instrcutions & collects user's choice
*/

int peak(int stack[], int *top)
{
    if (isEmpty(top))
        printf("ERROR: nothing to peak!");
    else
    {
        printf("top element of stack is: %d", stack[*top]);
        return stack[*top];
    }
}

/* ===============================================================
** TRAVERSE FUNCTION: gives instrcutions & collects user's choice
*/

void traverse(int stack[], int *top)
{
    if (isEmpty(top))
        printf("ERROR: nothing to traverse!");
    else
    {
        for (int i = *top; i <= 0; i--)
            printf("stack[%d] = %d", i, stack[i]);
    }
}