#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size, int rescalingFactor)
{
    int *res = malloc(size * sizeof(int));
    for (size_t i = 0; i < size; i++)
        res[i] = arr[i] * rescalingFactor;
    return res;
}