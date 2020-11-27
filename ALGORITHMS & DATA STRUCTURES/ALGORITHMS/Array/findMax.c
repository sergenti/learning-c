// Find MAX value in array

#define SIZE 3
int array[];

findMax()
{
    int max = array[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}