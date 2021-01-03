// ES 3: Multipli di 3 e 5

#include <stdio.h>
int main()
{
    int somma, i;

    for (somma = 0, i = 0; i < 1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
            somma += i;
    }

    printf("La somma richiesta è: %d", somma);
    return 0;
}