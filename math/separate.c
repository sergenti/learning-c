#include <stdio.h>
#include <math.h>

void separate(double num, char *sign, int *wholePart, double *fractionalPart)
{
    double magnitude;

    if (num < 0)
        *sign = '-';
    else if (num == 0)
        *sign = ' ';
    else
        *sign = '+';

    magnitude = fabs(num);
    *wholePart = floor(magnitude);
    *fractionalPart = magnitude - *wholePart;
}

int main(void)
{
    //INPUT
    double num;

    // OUTPUT
    char sign;
    int wholePart;
    double fractionalPart;

    printf("insert a real number > ");
    scanf("%lf", &num);

    // Calculations
    separate(num, &sign, &wholePart, &fractionalPart);

    printf("\nsign: %c", sign);
    printf("\nwhole part: %d", wholePart);
    printf("\nfractional part: %f", fractionalPart);
    return (0);
}