#include <stdio.h>

#define TRE 3
#define CINQUE 5

#define LIMITE 1000

int ese3B()
{
    int risTre, risCinque, risQuindici;
    int risultato; // = 0;
    risTre = 0;
    risCinque = 0;
    risQuindici = 0;

    for (int i = TRE; i < LIMITE; i += TRE)
    {
        risTre += i; // 333*332/2
    }
    //printf("Il totale è %d.\n", risTre);
    for (int i = CINQUE; i < LIMITE; i += CINQUE)
    {
        risCinque += i;
    }
    //printf("Il totale è %d.\n", risCinque);
    for (int i = TRE * CINQUE; i < LIMITE; i += TRE * CINQUE)
    {
        risQuindici += i;
    }
    //printf("Il totale è %d.\n", risQuindici);
    printf("Il totale è %d.\n", risTre + risCinque - risQuindici);
    printf("\n");
    // versione due
    risTre = ((LIMITE - 1) / TRE) * ((LIMITE - 1) / TRE + 1) / 2;
    risTre *= TRE;
    //printf("Il totale è %d.\n", risTre);
    risCinque = ((LIMITE - 1) / CINQUE) * ((LIMITE - 1) / CINQUE + 1) / 2 * CINQUE;
    //printf("Il totale è %d.\n", risCinque);
    risQuindici = ((LIMITE - 1) / (TRE * CINQUE)) * ((LIMITE - 1) / (TRE * CINQUE) + 1) / 2;
    //printf("Il totale è %d.\n", risQuindici);
    risQuindici *= (TRE * CINQUE);
    //printf("Il totale è %d.\n", risQuindici);
    risultato = risTre + risCinque - risQuindici;
    printf("Il totale è %d.\n", risultato);

    return 0;
}