#define SIZE 3
int array1[SIZE];
int array2[SIZE];
int arrayFinal[SIZE];

int arraySum(int array1[], int array2[], int arrayFinal[])
{
    for (int i = 0; i < SIZE; i++)
        arrayFinal[i] = array1[i] + array2[i];
}