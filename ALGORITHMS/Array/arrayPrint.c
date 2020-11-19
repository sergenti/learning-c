#include <stdio.h>

void arrayPrint(int array[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        printf("array[%d] = %d\n", i, array[i]);
}

main()
{
    int SIZE = 5;
    int array[] = {1, 2, 3, 4, 5};
    arrayPrint(array, SIZE);
}
