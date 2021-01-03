#include <stdio.h>

// still have random bugs

int main()
{
    int LENGTH;
    int count;

    printf("Length of the 2 arrays? ");
    scanf("%d", &LENGTH);

    // Fill First Array

    int array1[LENGTH];
    count = 0;

    printf("\nFIRST ARRAY\n");
    for (int i = 0; i < LENGTH; i++)
    {
        printf("element %d/%d: ", count + 1, LENGTH);
        scanf("%d", &array1[count++]);
    }

    // Fill Second  Array

    int array2[LENGTH];
    count = 0;

    printf("\nSECOND ARRAY\n");
    for (int j = 0; j < LENGTH; j++)
    {
        printf("element %d/%d: ", count + 1, LENGTH);
        scanf("%d", &array2[count++]);
    }

    // Merging array1 & array2 in one single array containing all the evens

    int mergedArrayOfEvens[LENGTH * 2];
    count = 0;

    for (int i = 0; i < LENGTH; i++)
        mergedArrayOfEvens[i] = -1;

    for (int t = 0; t < LENGTH; t++)
    {
        if (array1[t] % 2 == 0)
            mergedArrayOfEvens[count++] = array1[t];

        if (array2[t] % 2 == 0)
            mergedArrayOfEvens[count++] = array2[t];
    }

    // Print merged array of evens
    printf("\nMERGED ARRAY OF EVENS\n");
    for (int z = 0; z < count; z++)
        printf("element %d: %d\n", z + 1, mergedArrayOfEvens[z]);
}