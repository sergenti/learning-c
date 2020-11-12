#include <stdio.h>

// FUNCTIONS => only writing things once, easy to change and maintain

// Prototype
int square(int input);
int cube(int input);
int power(int input, int exponent);
int recursivePower(int input, int exponent);
int oldestValue(int ages[], int size);
void changeVal(int *a);

int main()
{
    // KEYWORDS:

    // argument             - data passed
    // parameter            - variable to hold argument
    // return               - output from function which can be used in expression
    // return type          - data type to be returned
    // void function        - a function that doesn't return anything
    // variable scope       - data exist only within curtly brackets of a function
    // recursive function   - a function that calls itself

    // CALLING FUNCITONS

    printf("%d ", power(2, 4)); //keep output on calling side
    printf("%d ", recursivePower(2, 4));

    // FUNCTIONS THATA USE POINTERS

    // if you pass a variable inside a function and then change its value, it will not do it,
    // when passing a variable you are only giving access to its value not its position in memory
    // (it is only creating a copy of its value)
    // you can send its position instead of its value using pointers

    int val = 5;
    changeVal(&val);
    printf("Val = %d\n", val);

    // FUNCTIONS WITH ARRAYS AS INPUT
    // always remember to send its size as well

    int const size = 7;
    int ages[size] = {1, 4, 53, 23, 23, 9, 52};
    printf("Oldest age: %d\n", oldestValue(ages, size));
    return 0;
}

int square(int input)
{
    return input * input;
}

int cube(int input)
{
    return input * input * input;
}

int power(int input, int exponent)
{
    int total = 1;
    for (int i = 0; i < exponent; i++)
    {
        total *= input;
    }
    return total;
}

int oldestValue(int ages[], int size)
{
    int largest = ages[0];
    for (int i = 1; i < size; i++)
    {
        if (ages[i] > largest)
        {
            largest = ages[i];
        }
    }
    return largest;
}

void changeVal(int *a) // THIS IS A POINTER !!
{
    *a *= 2;
}

int recursivePower(int input, int exponent)
{
    if (exponent < 1) //base case
    {
        return 1;
    }

    return input * recursivePower(input, exponent - 1);
}