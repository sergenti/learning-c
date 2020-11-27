#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 10

bool isFull(int *top);
bool isEmpty(int *top);
int peak(int stack[], int *top);
void pop(int stack[], int *top);
void traverse(int stack[], int *top);
void push(int element, int *stack, int *top);

int main()
{

    /*

    STACK

    algorithm
    store info following a rule: LIFO

    LIFO Last In First Out
    what you inserted last will come up first

    POP     =>    inserting
    PUSH    =>    removing

    Capacity - static or dynamic
    in static we are using the consept of array
    HOW? rotating in 90 degrees

    how can we make it dynamic?

    declaring int pointer variale
    allocating using calloc() and reallocating using realloc()

    */

    int *testStack = (int *)calloc(CAPACITY, sizeof(int)); // static size

    /*

    STACK OPERATIONS

    1) creation                     either static or dynamic
    2) push(int element)            insertion, adding element at the top
    3) pop()                        no parameter, removing last element
    4) traverse()                   printing all elements of the function  
    5) isEmpty()                    is the stack empty? bool
    6) isFull()                     is the stack full? bool
    7) size()                       how many elements are there
    8) peek()                       returns first element of stack (without removing it)

    we can perform operation only regarding the first element of the stack

    IMPLEMENTING USING STATIC STACKS
    int capacity = 5; // NO it is beter to use a MACRO

    important: in every programming language you CANNOT delete memory, you can just
    make the pointer pointing to a variable null, data is still there, if that cell will be used again, we would just overwrite

    IT IS IMPOSSIBLE TO DELETE THE DATA INSAIDE A MEMORY LOCATION, only just a pointer not poiting to location
    ONLY REWRITE POSSIBILITY IS THERE, REPLACEMENT 

    */

    // Creation
    int stack[CAPACITY]; // in pre-processing phase the value will be substitited
    int top = -1;        // WHY? not pointing to any index

    // Push
    push(2, stack, &top);
    push(3, stack, &top);
    push(4, stack, &top);

    // Pop
    pop(stack, &top);

    // Peak
    peak(stack, &top);

    // Traversing
    traverse(stack, &top);
}

bool isEmpty(int *top)
{
    return (*top == -1) ? true : false;
}

bool isFull(int *top)
{
    return (*top == CAPACITY - 1) ? true : false;
}

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