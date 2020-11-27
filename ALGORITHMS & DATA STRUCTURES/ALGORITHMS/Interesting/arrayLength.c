// To determine the size of your array in bytes, you can use the sizeof operator:

int a[17];
int n = sizeof(a);

// To determine the number of elements in the array, we can divide the total size of the array by the size of the array element. You could do this with the type, like this:

int a[17];
int n = sizeof(a) / sizeof(int);

// and get the proper answer (68 / 4 = 17), but if the type of a changed you would have a nasty bug if you forgot to change the sizeof(int) as well.
// So the preferred divisor is sizeof(a[0]) or the equivalent sizeof(*a), the size of the first element of the array.

int a[17];
int n = sizeof(a) / sizeof(a[0]);

// Another advantage is that you can now easily parameterize the array name in a macro and get :

#define NELEMS(x) (sizeof(x) / sizeof((x)[0]))

int a[17];
int n = NELEMS(a);

// ================================================================================================================================================================================
// ================================================================================================================================================================================

// Code Example

#include <stdio.h>
#include <stdlib.h>

void printSizeOf(int intArray[]);
void printLength(int intArray[]);

int main(int argc, char *argv[])
{
    int array[] = {0, 1, 2, 3, 4, 5, 6};

    printf("sizeof of array: %d\n", (int)sizeof(array));
    printSizeOf(array);

    printf("Length of array: %d\n", (int)(sizeof(array) / sizeof(array[0])));
    printLength(array);
}

void printSizeOf(int intArray[])
{
    printf("sizeof of parameter: %d\n", (int)sizeof(intArray));
}

void printLength(int intArray[])
{
    printf("Length of parameter: %d\n", (int)(sizeof(intArray) / sizeof(intArray[0])));
}