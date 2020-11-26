#include <stdio.h>

int factorial(int n)
{
    int i;
    int product;

    product = 1;

    for (i = n; i > 1; i--)
        product *= i;

    return (product);
}

int main()
{
    int n;
    printf("dammi il numero");
    scanf("%d", &n);
    int f = factorial(n);

    printf("%d", f);
    return (0);
}