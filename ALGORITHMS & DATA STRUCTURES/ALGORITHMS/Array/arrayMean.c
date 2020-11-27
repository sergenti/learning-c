#define SIZE 10
int array[];

int arraySum(int array[])
{
    int somma = 0;
    for (int i = 0; i < SIZE; i++)
        somma += array[i];
    return somma;
}

int arrayMean(int array[])
{
    return arraySum(array) / SIZE;
}
