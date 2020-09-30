#include <stdio.h>
#include <math.h>

int main(void)
{
    double first, second, first_sqrt, second_sqrt, sum_sqrt;

    // Getting First and Second number

    printf("Insert the first number > ");
    scanf("%lf", &first);

    printf("Insert the second number > ");
    scanf("%lf", &second);

    // Printing sqrts of first, sencond and sum of both

    first_sqrt = sqrt(first);
    printf("\nThe square root of the FIRST number is %0.2f\n", first_sqrt);

    second_sqrt = sqrt(second);
    printf("\nThe square root of the SECOND number is %0.2f\n", second_sqrt);

    sum_sqrt = sqrt(first + second);
    printf("\nThe square root of the SUM of the two numbers is %0.2f\n", sum_sqrt);

    return (0);
}