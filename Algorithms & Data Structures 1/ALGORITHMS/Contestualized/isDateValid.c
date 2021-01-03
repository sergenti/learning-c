#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define MAX_YEAR 9999
#define MIN_YEAR 1900

//structure to store date
typedef struct
{
    int day;
    int month;
    int year;
} date;

// returns 1 if leap year
bool IsLeapYear(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

// returns 1 if given date is valid.
bool isValidDate(date d)
{
    // Check range of year,month and day
    if (d.year > MAX_YEAR || d.year < MIN_YEAR)
        return false;
    if (d.month < 1 || d.month > 12)
        return false;
    if (d.day < 1 || d.day > 31)
        return false;

    // Handle feb days in leap year
    if (d.month == 2)
    {
        if (IsLeapYear(d.year))
            return (d.day <= 29);
        else
            return (d.day <= 28);
    }

    // Handle months which has only 30 days
    // (April, June, September, November)
    if (d.month == 4 || d.month == 6 ||
        d.month == 9 || d.month == 11)
        return (d.day <= 30);
    return true;
}

/*

int main(void)
{
    date d;         //variable to store date
    int status = 0; //variable to check status

    //get date year,month and day from user
    printf("\n\n Enter date in format (day/month/year): ");
    scanf("%d/%d/%d", d.day, d.month, d.year);
    //check date validity

    status = isValidDate(d);

    if (status != 1)
        printf("\n\n Please enter a valid date!\n");
    else
        printf("\n\n Date is valid!\n");
    return 0;
}

*/