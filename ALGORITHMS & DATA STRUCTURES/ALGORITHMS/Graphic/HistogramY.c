#include <stdio.h>
#define SIZE 10

int main()
{

    int n[SIZE] = {3, 19, 15, 7, 11, 9, 13, 5, 17, 1};
    int i, j;

    // finding mac value
    int max = n[0];
    for (i = 1; i < SIZE; i++)
    {
        if (max < n[i])
            max = n[i];
    }

    // drawing histogram
    for (j = max; j > 0; j--)
    {
        for (i = 0; i < SIZE; i++)
        {
            if (n[i] >= j)
                printf("  *  ");
            else
                printf("     ");
        }
        printf("\n\n");
    }

    // printing legend
    for (i = 0; i < SIZE; i++)
        printf("%3d  ", n[i]);
    printf("\n");

    for (i = 0; i < SIZE; i++)
        printf("%3d  ", i);
    printf("\n");
}
