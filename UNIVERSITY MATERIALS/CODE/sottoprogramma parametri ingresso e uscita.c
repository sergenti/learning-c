#include <stdio.h>
#include <math.h>

void separate(double num, char *signp, int *wholep, double *fracp);

int main()
{
    double value;
    char sn;
    int whl;
    double fr;

    printf("Enter a value to analyze>");
    scanf("%lf", &value);

    separate(value, &sn, &whl, &fr);

    printf("parts of %.4f\n", value);
    printf("whole number magnitude: %d", whl);
    printf("sign: %c\n", sn);
    printf("fractional part: %c\n", fr);
}

void separate(double num, char *signp, int *wholep, double *fracp)
{
    int magnitude = fabs(num);
    *wholep = floor(magnitude);
    *fracp = magnitude - *wholep;

    if (num > 0)
        *signp = '+';
    else if (num == 0)
        *signp = ' ';
    else
        *signp = '-';
}
