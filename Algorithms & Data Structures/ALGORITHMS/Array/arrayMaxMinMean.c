#define SIZE 10
float array[];

// find MAX MIN & MEAN in only one loop

float arrayStuff(float array[])
{
    float max, min, mean;
    max = min = mean = array[0];

    // INSERTING
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n Insert an element (%d/%d): ", i, SIZE);
        scanf("%d", &array[i]);
    }

    // EVALUATING
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] > max)
            max = array[i];

        if (array[i] < min)
            min = array[i];

        mean += array[i];
    }

    mean = mean / SIZE;

    // DISPLAYING
    printf("MAX: %f", max);
    printf("MIN: %f", min);
    printf("MEAN: %f", mean);
}