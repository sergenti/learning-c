#include <stdio.h>
#include <stdbool.h>

// returns true if leap year
bool IsLeapYear(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}