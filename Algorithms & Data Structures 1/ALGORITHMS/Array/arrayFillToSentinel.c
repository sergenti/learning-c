#include <stdio.h>
#define SIZE 20
#define SENTINEL -1

void fillToSentinel(int maxSize, int sentinel, int array[], int *sizeInUSe);

int main()
{
    int array[SIZE];
    int inUse;

    fillToSentinel(SIZE, SENTINEL, array, &inUse);

    printf("\nlist of values\n");
    for (int i = 0; i < inUse; i++)
        printf("%12d\n", array[i]);
}

void fillToSentinel(int maxSize, int sentinel, int array[], int *sizeInUSe)
{
    int data;
    int i, status;

    i = 0;
    printf("\ninserisci valore: ");
    status = scanf("%d", &data);
    while (status == 1 && data != sentinel && i < maxSize)
    {
        printf("inserisci valore: ");
        array[i] = data;
        ++i;
        status = scanf("%d", &data);
    }

    if (status != 1)
    {
        printf("error in data format\n");
        printf("using first %d data values\n", i);
    }
    else if (data != sentinel)
    {
        printf("too much data before sentinel");
        printf("using first %d data values\n", i);
    }

    *sizeInUSe = i;
}