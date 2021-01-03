#define SIZE 10
float array[];

// all in one

float arrayMean(float array[])
{
    float sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        sum += array[i];
    }

    return sum / SIZE;
}

/*=================================================================*/
/*=================================================================*/

// splitted in 2 functions

float arraySum(float array[])
{
    float sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += array[i];
    return sum;
}

float arrayMean(float array[])
{
    return arraySum(array) / SIZE;
}
