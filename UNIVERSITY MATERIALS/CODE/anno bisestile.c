#include <stdio.h>
#include <stdbool.h>

// calcolare se un anno è bisestile

int bisestile()
{
    int anno;
    int bisestile = false;

    scanf("%d", &anno);

    if (anno % 4 == 0)
    {
        if (anno % 100 != 0)
        {
            bisestile = true;
        }
        else
        {
            if (anno % 400 == 0)
                bisestile = true;
        }
    }

    /* implementazione in una sola riga

    if ( (anno%4==0) && (!(anno%100==0) || (anno%400==0) ) )
        bisestile = true;

    */

    if (bisestile == true)
        printf("L'anno %d è bisestile.\n", anno);
    else
        printf("L'anno %d non è bisestile.\n", anno);

    return 0;
}