#include <stdio.h>
#include <stdbool.h>

// =========================================================================
// FUNCTIONS

bool isEven(int N)
{
    (N % 2 == 0) ? true : false;
}

bool isOdd(int N)
{
    (N % 2 == 0) ? false : true;
}

bool isPrime(int N)
{
    int N;
    bool isPrime = false;

    for (int i = 2; i <= (N / 2); ++i)
    {
        if (N % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (N == 1)
        return false;
    else
    {
        if (isPrime)
            return true;
        else
            return false;
    }
}

// =========================================================================
// ARRAYS

#define SIZE 10
int array[];

int evenArray[];
void onlyEvenArray()
{
    int countEven, i;

    for (i = countEven = 0; i < SIZE; i++)
    {
        if (isEven(array[i]))
        {
            oddArray[countEven] = array[i];
            countEven++;
        }
    }
}

int oddArray[];
void onlyOddArray()
{
    int countOdd;

    for (int i = countOdd = 0; i < SIZE; i++)
    {
        if (isOdd(array[i]))
        {
            oddArray[countOdd] = array[i];
            countOdd++;
        }
    }
}

int primeArray[];
void onlyPrimeArray(int array[], int primeArray[])
{
    int countPrime;

    for (int i = countPrime = 0; (i < SIZE && array[i] > 0); i++)
    {
        if (isPrime(array[i]))
        {
            primeArray[countPrime] = array[i];
            countPrime++;
        }
    }
}