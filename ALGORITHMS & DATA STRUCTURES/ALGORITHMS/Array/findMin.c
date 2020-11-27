// find MIN value in array

#define SIZE 3
int array[];

findMin()
{
    int min = array[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}