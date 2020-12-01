#include <stdio.h>

/*

MULTIPLICATION USING RECURSIVE SUMS

a*b = a + a + a + ... + a (a summed to itself b times)

*/

int multiply(int a, int b)
{
    int ans;
    if (b == 1)
        ans = a;
    else
        ans = a + multiply(a, b - 1);
    return ans;
}