// insert 2 days, the program will tell you the most recent one
// Pre: user is inserting a valid date, there is no check on how many days there are in a specific month / leap years

#include <stdio.h>

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

// Helper function, from abstract struct to readable string
void printDate(date d)
{
    printf("%d/%d/%d", d.day, d.month, d.year);
}

// Get user input and convert it into date-struct to better manipulate it in the program
date scanDate()
{
    date d;

    printf("please insert a date in this format: DD/MM/YY > ");
    scanf("%d/%d/%d", &d.day, &d.month, &d.year);

    return d;
}

// Compares 2 dates and return the most recent one
void compareDate(date d1, date d2)
{
    printf("\nThe most recent date is:\n");

    if (d1.year > d2.year)
        printDate(d1);
    else if (d1.year == d2.year && d1.month > d2.month)
        printDate(d1);
    else if (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day)
        printDate(d1);
    else
        printDate(d2);
}
