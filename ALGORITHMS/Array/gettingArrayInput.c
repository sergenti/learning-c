#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Asking user of the size of the array

    int SIZE = 0;
    while (SIZE <= 0)
    {
        printf("How many items? > ");
        scanf("%d", &SIZE);

        if (SIZE <= 0)
            printf("\nsize must be bigger than 0\n\n");
    }

    // Letting user insert the items of the array in order

    int array[SIZE];
    printf("\n"); // styling
    for (int i = 0; i < SIZE; i++)
    {
        printf("please insert element %d of %d: ", i, SIZE - 1);
        scanf("%d", &array[i]);
    }

    // Displaying the array inserted by the user

    printf("\nHere is your array:"); // styling
    for (int i = 0; i < SIZE; i++)
        printf("array[%d] = %d\n", i, array[i]);

    return 0;
}