// Basic way - using the definition of a power:
// X to the Y-th power => X multiplied by itself Y times!

#include <stdio.h>

int main()
{
    int base, exponent, res;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (int i = 0, res = 1; i < exponent; i++)
    {
        res *= base;
    }

    printf("risultato: %d", res);
    return 0;
}

// Using a oneliner-for-loop

#include <stdio.h>

int main()
{
    int base, exponent, res;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (int i = 0, res = 1; i < exponent; i++, res *= base)
        ;

    printf("risultato: %d", res);
    return 0;
}

// Using Math.h

#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent, res;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    res = pow(base, exponent);

    printf("risultato: %d", res);
    return 0;
}