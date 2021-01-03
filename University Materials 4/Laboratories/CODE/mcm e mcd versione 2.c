//ES 3: Multipli di 3 e 5

#include <stdio.h>

int min(int a, int b)
{
    //Quest funzione restituisce il più piccolo dei due valori a e b
    if (a < b)
        return a;
    return b;
}

int max(int a, int b)
{
    //Quest funzione restituisce il più grande dei due valori a e b
    if (a > b)
        return a;
    return b;
}

int mcm(int a, int b)
{
    int mcm;
    if ((a == 0) || (b == 0))
        return 0;
    //Facciamo qualche considerazione: il minimo comune multiplo
    //è un multiplo, quindi vuol dire che non sarà mai più piccolo
    //di uno di due numeri. Anzi, sicuramente non sarà mai più piccolo
    //del più grande dei due.
    int multiploMinimo = max(a, b);
    //Ora, ci basta incrementare questo valore fin quando esso sia
    //un multiplo di entrambi i numeri
    do
    {
        multiploMinimo++;
    } while ((multiploMinimo % a != 0) || (multiploMinimo % b != 0));
    return multiploMinimo;
}

int MCD(int a, int b)
{
    //Il massimo comun divisore non è altro che il numero più alto
    //che divide due numeri, con resto zero. Una soluzione veloce
    //è la seguente
    if ((a == 1) || (b == 1))
        return 1; //Attenzione ai casi limite!
    int divisore = 1;
    do
    {
        if (divisore == a * b)
            return 1; //I numeri sono primi
        divisore++;
    } while ((a % divisore != 0) || (b % divisore != 0));

    return divisore;
}

int main()
{
    int num1, num2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    printf("Il minimo comune multiplo dei due è: %d", mcm(num1, num2));
    printf("\n");
    printf("Il massimo comune divisore dei due è: %d", MCD(num1, num2));
    printf("\n");
    return 0;
}