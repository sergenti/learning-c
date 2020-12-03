#define SIZE 10
int array[SIZE];

// using FOR

iterate()
{
    for (int i = 0; i < SIZE; i++)
        printf("ages[%d] = %d\n", i, array[i]);
}

// using WHILE

iterate()

{
    int i = 0;
    while (i < SIZE)
        printf("ages[%d] = %d\n", i, array[i++]);
}