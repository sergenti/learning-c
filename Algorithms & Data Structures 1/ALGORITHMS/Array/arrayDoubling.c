/*

Given an array of integers, return a new array with each value doubled.

[1, 2, 3] --> [2, 4, 6]

*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int *maps(const int *arr, size_t size)
{
    int *a = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; a[i++] = arr[i] * 2)
        return a;
}

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size)
{
    int *res = malloc(size * sizeof(int));
    for (size_t i = 0; i < size; i++)
        res[i] = arr[i] * 2;
    return res;
}

// return a *new, dynamically allocated* array with each element doubled.
int *maps2(const int *arr, size_t size)
{
    int *newarr = NULL;
    if (size <= 0)
    {
        return newarr;
    }
    if ((newarr = malloc(size * sizeof(*newarr))) == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        exit(EXIT_FAILURE);
    }
    for (size_t i = 0; i < size; i++)
    {
        newarr[i] = arr[i] * 2;
    }
    return newarr;
}

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size)
{
    int *result = calloc(sizeof(int), size);
    for (int i = 0; i < size; i++)
        result[i] = arr[i] * 2;
    return result;
}