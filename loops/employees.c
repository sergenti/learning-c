#include <stdio.h>

int employees(float hours, float rate)
{

    int numberOfEmployees = 0;
    int count = 0;

    printf("How many employees?> ");
    scanf("%d", &numberOfEmployees);

    while (count < numberOfEmployees)
    {
        printf("Hours>");
        scanf("%lf", &hours);

        printf("Rate>");
        scanf("%lf", &rate);

        float pay = rate * hours;
        printf("Pay is $%6.2f\n", pay);

        count++;
    }

    printf("All employees processed");
}
