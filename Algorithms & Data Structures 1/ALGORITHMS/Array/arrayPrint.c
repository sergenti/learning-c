#include <stdio.h>

// Iterative

void printArray(int array[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        printf("array[%d] = %d\n", i, array[i]);
}

// Recursive
// Prints an array recursively within a given range.
void printArrayRecursive(int arr[], int start, int len)
{
    if (start >= len) /* Recursion base condition */
        return;
    printf("%d, ", arr[start]);               /* Prints the current array element */
    printArrayRecursive(arr, start + 1, len); /* Recursively call printArray to print next element in the array */
}

main()
{
    int SIZE = 5;
    int array[] = {1, 2, 3, 4, 5};
    printArray(array, SIZE);
    printArrayRecursive(array, 0, SIZE);
}
