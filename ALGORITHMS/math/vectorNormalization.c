#include <math.h>
#include <stdio.h>

void scanVector(int *DIMENSIONS, double vector[]);
void printVector(int DIMENSIONS, double vector[]);
void normalizeVector(int DIMENSIONS, double vector[], double normalizedVector[]);

int main()
{

    int DIMENSIONS;

    double vector[DIMENSIONS];
    scanVector(&DIMENSIONS, vector);

    double normalizedVector[DIMENSIONS];
    normalizeVector(DIMENSIONS, vector, normalizedVector);
}

void printVector(int DIMENSIONS, double vector[])
{
    printf("\n");
    for (int i = 0; i < DIMENSIONS; i++)
        printf("vector[%d] = %f\n", i, vector[i]);
}

void scanVector(int *DIMENSIONS, double vector[])
{
    printf("in how many dimensions do you want to work in ?");
    scanf("%d", DIMENSIONS);

    // Add components to vector
    for (int i = 0; i < *DIMENSIONS; i++)
    {
        printf("please insert vector %d of %d component > ", i, *DIMENSIONS);
        scanf("%lf", &vector[i]);
    }

    printVector(*DIMENSIONS, vector);
}

void normalizeVector(int DIMENSIONS, double vector[], double normalizedVector[])
{
    double normalizationFactor;

    double sum = 0;

    for (int i = 0; i < DIMENSIONS; i++)
        sum += pow(vector[i], 2);

    normalizationFactor = sqrt(sum);

    for (int i = 0; i < DIMENSIONS; i++)
        normalizedVector[i] = vector[i] / normalizationFactor;

    printVector(DIMENSIONS, normalizedVector);
}
