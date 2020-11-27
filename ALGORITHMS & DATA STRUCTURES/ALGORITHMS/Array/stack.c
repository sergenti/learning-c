
#define STACK_EMPTY -1

#define STACK_SIZE 10
char stack[STACK_SIZE];
int stack_top = -1;

char push(char stack[], char item, int *top, int max)
{
    if (*top < max - 1)
    {
        ++(*top);
        stack[*top] = item;
    }
}

char pop(char stack[], int *top)
{
    char item;

    if (*top >= 0)
    {
        item = stack[*top];
        --(*top);
    }
    else
    {
        item = STACK_EMPTY;
    }

    return item;
}