#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    // inputs (sides of thetriangle)
    double a, b, c;

    // outputs (obtained by Erone's formula)
    double semiP, area;

    // conditions to verify
    bool isValidTriangle;
    bool areValidSides;

    // is process running?
    bool execution = true;

    // using a while loop so that if the user puts a wrong value,
    // after showing why it is wrong, he will be asked to re-insert it

    while (execution)
    {
        // Getting all 3 sides of the triangle from the user

        printf("Insert the first side > ");
        scanf("%lf", &a);

        printf("Insert the second side > ");
        scanf("%lf", &b);

        printf("Insert the third side > ");
        scanf("%lf", &c);

        // Before making the calculations it is better to verify whether
        // the conditions of the formulas are met

        areValidSides = (a > 0 && b > 0 && c > 0); // 1 - all sides must not be negative

        isValidTriangle = (a + b > c && b + c > a && c + a > b); // 2 - the sum of 2 sides must be bigger than the 3rd side

        // calculating triangle area using Erone's formula

        if (areValidSides)
        {
            if (isValidTriangle)
            {
                semiP = (a + b + c) / 2;
                area = sqrt(semiP * (semiP - a) * (semiP - b) * (semiP - c));
                printf("the are of the triangle is: %lf", area);
                execution = false;
            }
            else
            {
                printf("\033[0;31m"); //Set the text to the color red
                printf("\nERROR: the sum of 2 sides must be greater than the 3rd side");
                printf("\nPlease re-insert the values\n\n");
                printf("\033[0m"); //Resets the text to default color
            }
        }
        else
        {
            printf("\033[0;31m"); //Set the text to the color red
            printf("\nERROR: all sides must be positive numbers!");
            printf("\nPlease re-insert the values\n\n");
            printf("\033[0m"); //Resets the text to default color
        }
    }

    return (0);
}