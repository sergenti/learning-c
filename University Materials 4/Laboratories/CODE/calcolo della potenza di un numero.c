
// Esercizio 2

// Scrivere un programma che presi in ingresso la base e l’esponente
// calcoli per mezzo di un ciclo il risultato dell’elevamento a potenza.

#include <stdio.h>
int main()
{
    int base, exponent, res;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    for (int i = 0, res = 1; i < exponent; i++)
    {
        res *= base;
    }

    printf("risultato: %d", res);
    return 0;
}

// Notate che anche un for del genere avrebbe funzionato
// for (i=0; ris = 1; i < esponente; i++, ris *= base);
// Ma in questo caso, se fate tutto all'interno delle parentesi del for, ATTENZIONE AL PUNTO E VIRGOLA FINALE!!!

// Ricordiamo infatti che:
// - se la parentesi tonda del for è seguita da una coppia di graffe, il ciclo sarà applicato a tutte le linee all'interno delle graffe
// - se la parentesi tonda del for non è seguita da nulla, il ciclo si applicherà solo alla PRIMA ISTRUZIONE successiva al for
// - se la parentesi tonda del for è seguita da un punto e virgola, il ciclo non si applica ad alcuna istruzione successiva (ma le codizioni all'interno del for vengono eseguite)
