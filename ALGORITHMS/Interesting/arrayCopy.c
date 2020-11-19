#include <stdio.h>
#define SIZE 10

void arrayCopy(int array[], int newArray[])
{
    for (int i = 0; i < SIZE; i++)
        newArray[i] = array[i];
}

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int newArray[SIZE];

    arrayCopy(array, newArray);

    printf("array copied successfully\n");
    for (int i = 0; i < SIZE; i++)
        printf("array[%d] = %d\n", i, newArray[i]);

    return 0;
}
