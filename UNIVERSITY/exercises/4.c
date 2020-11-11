#include <stdio.h>
#include <math.h>

int ese4()
{
    int a, b;
    int risultato = 0;
    int risultatoParziale;

    printf("Inserisci il primo numero e premi invio: ");
    scanf("%d", &a);
    printf("Inserisci il primo numero e premi invio: ");
    scanf("%d", &b);

    if (!(a == 0 || b == 0))
    {
        risultatoParziale = a;
        while (!((risultatoParziale % a) == 0 && (risultatoParziale % b) == 0))
            risultatoParziale += a;

        risultato = risultatoParziale;
    }
    printf("Il mcm di %d e %d è %d.\n", a, b, risultato);
    return 0;
}