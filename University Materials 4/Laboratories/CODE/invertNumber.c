#include <stdio.h>

int invertNumber(int N)
{
    int inverted = 0;
    int temp = N;

    while (temp > 0)
    {
        inverted *= 10;
        inverted += temp % 10;
        temp /= 10;
    }

    printf("Inverted number is: %d.\n", inverted);

    if (inverted == N)
        printf("Number is Palindrome\n");

    return inverted;
}