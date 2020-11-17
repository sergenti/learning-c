#include <stdio.h>

int main()
{
    int array[] = {90, 45, 12, 25, 34, 64, 36};
    int len = 7;

    int temp;
    int swap = 0;

    for (int j = 0; j < len - 1; j++)
    {
        if (array[j] > array[j + 1])
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j = -1;
        }
    }

    for (int i = 0; i < len; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}
