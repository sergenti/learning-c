#include <stdio.h>

int ese5()
{
    int numero;
    int invertito;
    int temp;

    printf("Inserire un numero positivo: ");
    scanf("%d", &numero);

    invertito = 0;
    temp = numero;

    while (temp > 0)
    {
        invertito *= 10;
        invertito += temp % 10; // resto della divisione
        temp /= 10;
    }

    printf("Il risultato è %d.\n", invertito);

    if (invertito == numero)
        printf("Il numero è palindromo.\n");

    return 0;
}