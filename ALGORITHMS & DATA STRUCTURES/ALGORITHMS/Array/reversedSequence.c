// Reversing an array

#include <stdio.h>
#define SIZE 10
int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int arrayReversed[SIZE];

int reverse_sequence()
{
    int j = 0;
    for (int i = SIZE - 1; i >= 0; i--)
    {
        arrayReversed[j] = array[i];
        printf("arrayReversed[%d] = %d\n", j, array[i]);
        j++;
    }
}
