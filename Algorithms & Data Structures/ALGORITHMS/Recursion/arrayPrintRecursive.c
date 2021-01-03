#include <stdio.h>

// Recursive

// Prints an array recursively within a given range.
void printArrayR(int arr[], int start, int len)
{
    if (start >= len) /* Recursion base condition */
        return;
    printf("%d, ", arr[start]);       /* Prints the current array element */
    printArrayR(arr, start + 1, len); /* Recursively call printArray to print next element in the array */
}

main()
{
    int SIZE = 5;
    int array[] = {1, 2, 3, 4, 5};
    printArrayR(array, 0, SIZE);
}
