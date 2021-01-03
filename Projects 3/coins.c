#include <stdio.h>

int main(void)
{
    // input - 3 initials
    char first, middle, last;

    // coins input
    int pennies, nickels, dimes, quarters, dollars;

    // outputs
    int change, total_dollars, total_cents;

    // Get and show client initials.
    printf("Type 3 initials and press return> ");
    scanf("%c%c%c", &first, &middle, &last);
    printf("%c%c%c, please enter your coin information.\n\n", first, middle, last);

    // Get number of coin
    printf("Number of $ coins > ");
    scanf("%d", &dollars);

    printf("Number of quarters > ");
    scanf("%d", &quarters);

    printf("Number of dimes > ");
    scanf("%d", &dimes);

    printf("Number of nickels > ");
    scanf("%d", &nickels);

    printf("Number of pennies > ");
    scanf("%d", &pennies);

    // Calculate the total number of cents
    total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;

    // Calculate the total worth in dollars and the change in cents
    total_dollars = total_cents / 100;
    change = total_cents % 100;

    // Show Coin credit in dollars and cents
    printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents", first, middle, last, total_dollars, change);

    // Exit Execution
    return (0);
}