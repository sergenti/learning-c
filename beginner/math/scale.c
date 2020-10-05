#include <stdio.h>
#include <math.h>

double scale(double x, int n)
{
    double scale_factor = pow(10, n);
    return (x * scale_factor);
}

int main(void)
{
    double num_1;
    int num_2;

    printf("insert a real number");
    scanf("%lf", &num_1);

    printf("insert a integer");
    scanf("%d", &num_2);

    printf("Here is the result of the scale function: %f", scale(num_1, num_2));
    return (0);
}