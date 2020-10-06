// interval

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // Input
    int x;
    int min, max;

    // Output
    bool isVaLidInterval; // int if not using stdbool.h
    bool isInInterval;    // int if not using stdbool.h

    printf("Enter an integer> ");
    scanf("%d", &x);

    printf("Enter the maximum integer of the interval> ");
    scanf("%d", &max);

    printf("Enter the minimum integer of the interval> ");
    scanf("%d", &min);

    // Condition to Verify
    isVaLidInterval = (max > min);
    isInInterval = (min <= x && x <= max);

    if (isVaLidInterval && isInInterval)
    {
        printf("\033[0;32m\n%d is in the interval [%d, %d]\033[0m\n", x, min, max);
    }
    else
    {
        if (!isVaLidInterval)
            printf("\033[0;31m\n[%d, %d] is NOT a valid interval\033[0m\n", min, max);
        else
            printf("\033[0;31m\n%d is NOT in the interval [%d, %d]\033[0m\n", x, min, max);
    }

    return 0;
}
