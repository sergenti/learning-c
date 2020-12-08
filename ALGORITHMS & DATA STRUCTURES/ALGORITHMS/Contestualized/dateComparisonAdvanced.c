// insert 2 days, the program will tell you the most recent one

#include <stdio.h>
#include <stdbool.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

void instruct(void);
void printDate(date d);
date scanDate(void);
void compareDate(date d1, date d2);
bool IsLeapYear(int year);
bool isValidDate(date d);

int main()
{
    instruct();

    date d1, d2;
    d1 = scanDate();
    d2 = scanDate();

    compareDate(d1, d2);
}

/*=======================================================================================
                                    F U N C T I O N S                                    
=======================================================================================*/

// Gives instruction on how to use the program
void instruct()
{
    printf("\t\t\t\t\t\tDATE COMPARISON:\n");
    printf("Write 2 dates & I'll tell you which one is be the most recent\n\n");
}

// returns true if leap year
bool IsLeapYear(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

// returns true if given date is valid.
bool isValidDate(date d)
{
    // Check range of month and day
    // (negative years are considere BC)
    if (d.month < 1 || d.month > 12)
        return false;
    if (d.day < 1 || d.day > 31)
        return false;

    // Handle february days in leap year
    if (d.month == 2)
    {
        if (IsLeapYear(d.year))
            return (d.day <= 29);
        else
            return (d.day <= 28);
    }

    // Handle months which has only 30 days
    // (April, June, September, November)
    if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11)
        return (d.day <= 30);
    return true;
}

// Helper function, from abstract struct to readable string
void printDate(date d)
{
    printf("%d/%d/%d", d.day, d.month, d.year);
}

// Get user input and convert it into date-struct to better manipulate it in the program
date scanDate()
{
    date d;

    bool error = false;

    do
    {
        printf("please insert a date in this format: DD/MM/YY > ");
        scanf("%d/%d/%d", &d.day, &d.month, &d.year);

        if (!isValidDate(d))
        {
            error = true;
            printf("invalid date, ");
        }
        else
        {
            error = false;
        }

    } while (error);

    return d;
}

// Compares 2 dates and return the most recent one
void compareDate(date d1, date d2)
{
    printf("\nfirst date: ");
    printDate(d1);
    printf("\nsecond date: ");
    printDate(d2);
    printf("\n\nThe most recent date is:\n");

    if (d1.year > d2.year)
        printDate(d1);
    else if (d1.year == d2.year && d1.month > d2.month)
        printDate(d1);
    else if (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day)
        printDate(d1);
    else if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
        printf("same date");
    else
        printDate(d2);
}
