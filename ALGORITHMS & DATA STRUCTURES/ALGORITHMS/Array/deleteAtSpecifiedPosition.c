#include <stdio.h>
#define SIZE 5

int main()
{
    int array[SIZE] = {1, 2, 3, 4, 5};
    int newArray[SIZE];
    int position;

    printf("Here is an array:\n");
    for (int i = 0; i < SIZE; i++)
        printf("element at position %d: %d\n", i, array[i]);

    printf("\nposition of the element to delete? > ");
    scanf("%d", &position);

    if (position < 0 || position > SIZE)
    {
        printf("Invalid position! Please enter position between 1 to %d", SIZE);
        return 1;
    }

    // remove element
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (i != position)
            newArray[count++] = array[i];
    }

    // print new array
    printf("\nNew Array:\n");
    for (int i = 0; i < count; i++)
        printf("element at position %d: %d\n", i, newArray[i]);
}

// Easier way with shift

// for (int i = pos; i < size; i++)
// {
//     arr[i] = arr[i + 1];
// }