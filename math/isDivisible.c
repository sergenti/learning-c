// divisor

#include <stdio.h>
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

    // Condition to Verify
    isDivisible = (divisor != 0 && (num % divisor) == 0);

    if (isDivisible)
    {
        // Calculating
        result = num / divisor;
        printf("\033[0;32m\n%d is divisible by %d\n%d : %d = %d\033[0m\n", num, divisor, num, divisor, result);
    }
    else
    {
        if (divisor == 0)
            printf("\033[0;31mERROR: cannot devide by 0!\033[0m\n");
        else
            printf("\033[0;31m\n%d is NOT divisible by %d\033[0m\n", num, divisor);
    }

    return 0;
}
