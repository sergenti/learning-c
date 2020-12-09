#include <stdio.h>
#define ARRAY_LENGTH 10

int isRepetition(int n, int array[])
{
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (array[i] == n)
            return 1;
    }
    return 0;
}

int main()
{
    int count;
    int array[ARRAY_LENGTH];
    int arrayWithNoRepetitions[ARRAY_LENGTH];

    // Fill array

    count = 0;
    while (count < ARRAY_LENGTH)
    {
        printf("please insert element %d/%d: ", count + 1, ARRAY_LENGTH);
        scanf("%d", &array[count++]);
    }

    // Fill Array & check for repetitions

    count = 0;
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (isRepetition(array[i], arrayWithNoRepetitions))
            continue;
        else
            arrayWithNoRepetitions[count++] = array[i];
    }

    printf("\n\n");
    printf("Here is your array with no repetitions, completley sanitized\n\n");

    // Print Array With No Repetitions
    for (int i = 0; i < count; i++)
        printf("element %d: %d\n", i + 1, arrayWithNoRepetitions[i]);
}
