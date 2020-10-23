#include <stdio.h>
// presi due interi, calcolare l'elevamento a potenza
int ese1()
{
    float base;
    int esponente;
    int i;
    float risultato;

    printf("Inserire la base: ");
    scanf("%f", &base);

    printf("Inserire l'esponente: ");
    scanf("%d", &esponente);

    if (esponente < 0)
    {
        base = 1 / base;
        esponente = -esponente;
    }

    risultato = 1;

    for (i = 0; i < esponente; i++)
    {
        risultato = risultato * base;
    }

    printf("%.2f elevato a %d è %.2f\n", base, esponente, risultato);

    return 0;
}