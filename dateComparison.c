#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

enum month
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    instruct();

    date d1, d2;
    d1 = scanDate();
    d2 = scanDate();

    date mostRecent = compareDate(d1, d2);
    printDate(mostRecent);
}

// Gives instruction on how to use the program
instruct()
{
    printf("\t\tDATE COMPARISON\n");
    printf("Write 2 dates & I'll tell you which one is be the most recent\n\n");
}

// Get user input and convert it into date-struct to better manipulate it in the program
date scanDate()
{
    date d;

    do
    {
        printf("insert Day:");
        scanf("%d", &d.day);

        printf("insert Month:");
        scanf("%d", &d.month);

        printf("insert Year:");
        scanf("%d", &d.year);
    } while (!isValidDate(d));

    return d;
}

void printDate()
{
}

// Compares 2 dates and return the most recent one
date compareDate(date d1, date d2)
{
    if (d1.year > d2.year)
        return d1;
    else if (d1.year = d2.year)
    {
        if (d1.month > d2.month)
            return d1;
        else if (d1.month = d2.month)
        {
            if (d1.day > d2.day)
                return d1;
            else if (d1.day = d2.day)
                printf("not enough information, same date");
            else
                return d2;
        }
        else
            return d2;
    }
    else
        return d2;
}

date dateComparison(date d1, date d2)
{
    int isD1Leap = isLeapYear(d1.year);
    int isD2Leap = isLeapYear(d2.year);
}