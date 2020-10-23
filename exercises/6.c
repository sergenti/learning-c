#include <stdio.h>
#include <stdbool.h>

#define VERO 1
#define FALSO 0
// calcolare se un anno è bisestile
int ese6()
{
    int anno;

    int bisestile = FALSO; // 0 se NON è bisestile, 1 se lo è

    scanf("%d", &anno);

    if (anno % 4 == 0)
    {
        if (anno % 100 != 0)
        {
            bisestile = VERO;
        }
        else
        {
            if (anno % 400 == 0)
                bisestile = VERO;
        }
    }
    /*
  if ( (anno%4==0) && (!(anno%100==0) || (anno%400==0) ) )
    bisestile = VERO;
  */

    if (bisestile == VERO)
        printf("L'anno %d è bisestile.\n", anno);
    else
        printf("L'anno %d non è bisestile.\n", anno);

    return 0;
}