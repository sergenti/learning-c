/* Esercizio 1 -> Serie di McLaurin */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fattoriale(int n)
{
    int risultato = 1;
    for (int i = 1; i < n; i++)
    {
        risultato *= i;
    }
    return risultato;
}

int expMcLaurin(int x, int iterazioni)
{
    int somma = 0;
    for (int n = 0; n < iterazioni; n++)
    {
        somma += pow(x, n) / fattoriale(n);
    }
    return somma;
}

int main()
{

    int exp;
    int n;
    printf("Inserisci esponente di e: ");
    scanf("%d", &exp);
    printf("Inserisi massimo sviluppo della serie di McLaurin: ");
    scanf("%d", &n);
    printf("L'esponenziale calcolato con Math.pow e': %f", pow(M_E, exp));
    printf("L'esponenziale con Mclaurin al %d sviluppo e': %d", n, expMcLaurin(exp, n));
    return 0;
}