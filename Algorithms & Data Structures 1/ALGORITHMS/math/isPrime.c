#include <stdio.h>
#include <stdbool.h>

// there is no mathematical model (Yet) to predict whether a number is prime or not just by looking at it
// so right now we have to do loads of calculation and verify it indirecly

int main()
{
    int N;
    bool isPrime = false;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    for (int i = 2; i <= (N / 2); ++i)
    {
        if (N % i == 0) // condition for non-prime
        {
            isPrime = false;
            break;
        }
    }

    if (N == 1)
        printf("1 is neither prime nor composite.");
    else
    {
        if (isPrime)
            printf("%d is a prime number.", N);
        else
            printf("%d is not a prime number.", N);
    }

    return 0;
}