#include <stdio.h>
#include <math.h>

void order(double *x, double *y);

int main(void)
{
    double num1, num2, num3;

    printf("enter 3 numbers separated by blanks > ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);

    // order the 3 nums
    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);

    printf("\nThe numbers in ascending order are: %.2f %.2f %.2f\n", num1, num2, num3);
    return (0);
}

void order(double *x, double *y)
{
    double temp;
    if (*y > *x)
    {
        temp = *x;

        *x = *y;
        *y = temp;
    }
}