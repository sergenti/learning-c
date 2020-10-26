#include <stdio.h>

int main()
{
    // INPUT
    int base, exponent;

    // OUTPUT
    int result;

    printf("inserire la base: ");
    scanf("%d", &base);
    printf("inserire l'esponente: ");
    scanf("%d", &exponent);

    result = 1;

    for (int i = 0; i < exponent; i++)
        result *= base;

    printf("%d elevanto a %d = %d", base, exponent, result);

    return 0;
}