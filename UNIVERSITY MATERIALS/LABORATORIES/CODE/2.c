//Esercizio 2
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int somma(int dati[])
{
    int somma = 0;
    for (int i = 0; i < MAX && dati[i] > 0; i++)
        somma += dati[i];
    return somma;
}

int min(int dati[])
{
    int min = dati[0];
    for (int i = 1; i < MAX && dati[i] > 0; i++)
        if (dati[i] < min)
            min = dati[i];
    return min;
}

int max(int dati[])
{
    int max = dati[0];
    for (int i = 1; i < MAX && dati[i] > 0; i++)
        if (dati[i] > max)
            max = dati[i];
    return max;
}

int contaElementi(int dati[])
{
    for (int i = 0; i < MAX; i++)
    {
        if (dati[i] < 0)
            return i;
    }
    return MAX;
}

int media(int dati[])
{
    return somma(dati) / contaElementi(dati);
}

int mediaSenzaMaxMin(int dati[])
{
    int sommaSenzaMaxMin = somma(dati) - min(dati) - max(dati);
    return sommaSenzaMaxMin / (contaElementi(dati) - 2);
}

void soloNumeriDispariNoPuntatori(int dati[])
{
    //Se non posso usare i puntatori, dovrò utilizzare un array della stessa lunghezza di quello in input
    //Dato che quello in input avrà solo valori positivi, sostituirò i dispari con valori speciali "-1"
    //che il main interpreterà in maniera opportuna
    for (int i = 0; i < MAX && dati[i] > 0; i++)
        if (dati[i] % 2 == 0)
            dati[i] = -1;
}

int sonoNumeroPrimo(int x)
{
    if (x == 1)
        return 1;
    int primo = 1;
    for (int i = 2; i < x - 1; i++)
        if (x % i == 0)
            primo = 0;
    return primo;
}

int nuovoArrayDiPrimi(int dati[], int arrayPrimi[])
{
    //Stavolta utilizziamo i puntatori per restituire un nuovo array
    int contPrimi, i;
    for (i = contPrimi = 0; i < MAX && dati[i] > 0; i++)
    {
        if (sonoNumeroPrimo(dati[i]))
        {
            arrayPrimi[contPrimi] = dati[i];
            contPrimi++;
        }
    }
    return contPrimi;
}

void acquisiciArray(int dati[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("Inserisci elemento %d dell'array: ", i);
        scanf("%d", &dati[i]);
        if (dati[i] < 0)
            return;
    }
}

int main()
{
    //Testare le varie funzioni
    int array[20];
    acquisiciArray(array);
    //1.
    printf("La somma degli elementi nell'array e': %d\n", somma(array));
    printf("Il massimo degli elementi nell'array e': %d\n", max(array));
    printf("Il minimo degli elementi nell'array e': %d\n", min(array));
    //2.
    printf("La media senza massimo e minimo e': %d\n", mediaSenzaMaxMin(array));
    //3.
    //Creo una copia di array
    int arrayNuovo[20];
    for (int i = 0; i < MAX; i++)
        arrayNuovo[i] = array[i];

    //Chiamo la funzione apposita
    soloNumeriDispariNoPuntatori(arrayNuovo);

    //Visualizzo
    printf("Visualizzo valori dispari e controllo che siano primi\n");
    for (int i = 0; i < MAX && array[i] > 0; i++)
    {
        if (arrayNuovo[i] > 0)
        {
            printf("%d ", arrayNuovo[i]);
            //4.
            if (sonoNumeroPrimo(arrayNuovo[i]))
                printf("Il  valore e' primo \n");
        }
    }
    //5. (sull'array originale)
    int arrayPrimi[20];
    int numeroPrimiInArray = nuovoArrayDiPrimi(array, arrayPrimi);
    printf("\nStampo i valori primi: ");
    for (int i = 0; i < numeroPrimiInArray; i++)
        printf("%d ", arrayPrimi[i]);

    printf("\n\n");
    return 0;
}
