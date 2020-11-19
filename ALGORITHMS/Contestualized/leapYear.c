#include <stdio.h>
#include <stdbool.h>

// determine if a given year is a leap year

int isLeapYear()
{
    int year;
    int isLeap = false;

    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 != 0)
            isLeap = true;
        else
        {
            if (year % 400 == 0)
                isLeap = true;
        }
    }

    /* oneliner

    if ((year % 4 == 0) && (!(year % 100 == 0) || (year % 400 == 0)))
        isLeap = true;

    */

    if (isLeap == true)
        printf("%d is a leap year.\n", year);
    else
        printf("%d isn't a leap year.\n", year);

    return 0;
}