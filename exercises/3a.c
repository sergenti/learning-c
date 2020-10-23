#include <stdio.h>

#define TRE 3
#define CINQUE 5

#define LIMITE 1000

int main()
{
    int risultato = 0;

    for (int i = 1; i < LIMITE; i++)
        if (i % TRE == 0 || i % CINQUE == 0)
            risultato += i;

    printf("Il totale è %d.\n", risultato);

    return 0;
}