// Greatest Common Divisor

//E1

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}

//E2

#include <stdio.h>
int main()
{
    int n1, n2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d", n1);

    return 0;
}