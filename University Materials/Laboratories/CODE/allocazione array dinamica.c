#include <stdio.h>
#include <stdlib.h> //malloc.h

void inserisci(int *array, int num);
int somma(int *array, int num);

int main(int argc, const char *argv[])
{
    int num;
    int *val;

    printf("Quanti valori vuoi inserire: ");
    scanf("%d", &num);

    val = (int *)malloc(sizeof(int) * num);

    printf("Inserisci %d numeri: ", num);
    inserisci(val, num);
    printf("La somma vale %d", somma(val, num));

    return 0;
}

void inserisci(int *array, int num)
{
    int *start = array;

    while (array < start + num)
    {
        scanf("%d", array);
        array++;
    }
}

int somma(int *array, int num)
{
    int *i;
    int somma = 0;
    for (i = array; i < array + num; i++)
        somma = somma + *i;
    return somma;
}
