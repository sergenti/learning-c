#include <stdio.h>
#include <stdbool.h>

// determine if a given year is a leap year

int main()
{
    int year;
    bool isLeap = false;

    printf("year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if ((year % 100 == 0) && (year % 400 != 0))
            isLeap = false;
        else
            isLeap = true;
    }

    if (isLeap)
        printf("%d is a leap year ", year);
    else
        printf("%d is NOT a leap year ", year);
}