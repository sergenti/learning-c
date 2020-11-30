//Esercizio 3
/* Scrivete un programma che generi a caso due array di N=10 elementi interi, il cui valore sia compreso tra 1 a 200. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define MAX 200

void generaArrayCasuale(int array[]){
    for(int i=0; i<N; i++)
        array[i] = rand() % MAX;
}

void stampaArray(int array[], int dim){
    for(int i=0; i<dim; i++)
        printf("%d ",array[i]);
}

/*Creare una procedura che costruisca un terzo array di dimensione 2N i cui elementi di posizione pari
siano gli elementi del primo vettore e gli elementi di posizione dispari siano gli elementi del secondo vettore*/

//Non complichimoci la vita con difficili raggionamenti tra pari e dispari!
//Se partiamo da 0 (pari), l'indice successivo sarà 1, dispari, quello dopo ancora pari e così via.
//Quindi: 

void mixaArray(int array1[], int array2[], int arrayRisultato[]){
    int i,j;
    for (i=j=0; i<N; i++, j+=2 ){
        arrayRisultato[j] = array1[i];
        arrayRisultato[j+1] = array2[i];
    }
}

int main(){
        srand(time(NULL)); 
        int primoArray[N];
        int secondoArray[N];
        int terzoArray[2*N];
        generaArrayCasuale(primoArray);
        printf("\nIl primo array casuale e' il seguente: ");
        stampaArray(primoArray,N);
        generaArrayCasuale(secondoArray);
        printf("\nIl secondo array casuale e' il seguente: ");
        stampaArray(secondoArray,N);
        mixaArray(primoArray,secondoArray,terzoArray);
        printf("\nL'array mixato e' il seguente: ");
        stampaArray(terzoArray,2*N);
        printf("\n\n");
      
        return 0;

}