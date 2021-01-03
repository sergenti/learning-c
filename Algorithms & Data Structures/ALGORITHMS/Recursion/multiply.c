#include <stdio.h>

/*

MULTIPLICATION USING RECURSIVE SUMS

a*b = a + a + a + ... + a (a summed to itself b times)

*/

// RECURSIVE

int multiply(int a, int b)
{
    int ans;
    if (b == 1)
        ans = a;
    else
        ans = a + multiply(a, b - 1);
    return ans;
}

// ITERATIVE

int multiply(int a, int b)
{
    for (int i = 1; i < b; i++)
        a += a;
    return a;
}