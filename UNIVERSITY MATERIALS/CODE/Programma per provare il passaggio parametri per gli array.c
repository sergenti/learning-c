//
//  main.c
//  Array
//
//  Created by Alfonso Fuggetta on 27/10/20.
//

#include <stdio.h>

void fill_array(int list[],   /* output - array di n numeri interi */
                int n,        /* input - numero di elementi dell'array */
                int in_value) /* input - valore iniziale */
{

    int i; /* indice dell'array e variabile di controllo del ciclo */

    for (i = 0; i < n; ++i)
        list[i] = in_value;
}

int calcolaQuadrato(int *numDaCalcolare)
{
    *numDaCalcolare = 5;

    return ((*numDaCalcolare) * (*numDaCalcolare));
}

void stampaVettore(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Il valore di vettore di %d è %d\n", i, v[i]);
    }
}

int main(int argc, const char *argv[])
{

    int vettore[20];
    // int risultato;
    int i;

    /*
     vettore[5] = 200;
    
     // risultato = vettore[5] * vettore [5];
    
    risultato = calcolaQuadrato(&vettore[5]);
    
    printf("Il quadrato di %d vale %d\n",vettore[5],risultato);

    
    for (i=0;i<10;i++)
    {
        vettore[i] = 8;
    }
         
    stampaVettore(vettore);
    printf("Il valore di vettore di 0 è %d\n",vettore[0]);
     
     */

    fill_array(vettore, 20, 99);

    stampaVettore(vettore, 20);

    // printf("Valore di vettore[21]: %d\n",vettore[21]);
}
