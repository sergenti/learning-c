// divisor

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    // Input
    int num;
    int divisor;

    // Output
    bool isDivisible; // int if not using stdbool.h
    int result;

    printf("Enter an integer> ");
    scanf("%d", &num);

    printf("Enter divisor> ");
    scanf("%d", &divisor);

    // Calculating
    isDivisible = (num % divisor) == 0;
    result = num / divisor;

    if (isDivisible)
        printf("\033[0;32m\n%d is divisible by %d\n%d : %d = %d\033[0m\n", num, divisor, num, divisor, result);
    else
        printf("\033[0;31m\n%d is NOT divisible by %d\033[0m\n", num, divisor);

    return 0;
}