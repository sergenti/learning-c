#include <conio.h>
#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")

void main()
{
    int h = 0, m = 0, s = 0;

    clrscr();

    printf("Please enter a time format in HH:MM:SS\n\n");

    printf("Please enter HH >");
    scanf("%d", &h);

    printf("Please enter MM >");
    scanf("%d", &m);

    printf("Please enter SS >");
    scanf("%d", &s);

start:

    for (h; h < 24; h++)
    {
        for (m; m < 60; m++)
        {
            for (s; s < 60; s++)
            {
                clrscr();
                printf("\n\n\n\t\t\t%d:%d:%d", h, m, s);
                printf("\n\n\n\t\t\tSunday 18 Nov 2018");

                // Handling ANTE or POST Meridiem (AM/PM)

                if (h < 12)
                {
                    printf(" AM");
                }
                else
                {
                    printf(" PM");
                }

                // Handling reset seconds

                for (double i = 0; i < 3619999; i++)
                {
                    i++;
                    i--;
                }
            }
            s = 0;
        }
        m = 0;
    }
    h = 0;

    goto start;

    getch();
}