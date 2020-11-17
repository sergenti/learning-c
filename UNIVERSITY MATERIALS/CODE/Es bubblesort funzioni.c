#include <stdio.h>

//Scrivere 4 funzioni
//1. riempire un array, data una lunghezza;
//2. stampa l'array
//3. bubblesort - ordinamento di un array
//4. Binary search - ricerca di un elemento all'interno di un array

int riempiArray(int vettore[]); //la lunghezza è letta all'interno
void riempiArray2(int vettore[], int *len);
void riempiArray3(int vettore[], int len);

void stampaArray(int vettore[], int len);
void stampaArrayContrario(int vettore[], int len);

void bubbleSort(int vettore[], int len);

int binarySearch(int vettore[], int len, int x);

int main() {
    
    int array[100];
    int l = 0;
    int x;
    char cmd;
    int posNumTrovato;
    
    //Attraverso un menu fatto con lo switch
    do{
        printf("MENU\n");
        printf("a) Inserisci l'array\n");
        printf("b) Stampa l'array\n");
        printf("c) Ordina l'array\n");
        printf("d) Cerca elemento nell'array\n");
        printf("e) Esci\n");
        printf(">> ");
        
        do{
            scanf(" %c",&cmd);
            if ((cmd<'a') || (cmd>'e'))
                printf("Comando non valido\n");
        }while((cmd<'a') || (cmd>'e'));
        
        //Ho il comando, eseguo operazioni a seconda del comando
        switch (cmd) {
            case 'a':
                //l = riempiArray(array);
                //riempiArray2(array, &l);
                printf("Quanto è lungo l'array? ");
                scanf("%d",&l);
                riempiArray3(array,l);
                break;
            case 'b':
                stampaArray(array, l);
                stampaArrayContrario(array, l);
                break;
            case 'c':
                bubbleSort(array, l);
                stampaArray(array, l);
                break;
            case 'd':
                printf("Inserisci l'intero da ricercare: ");
                scanf("%d",&x);
                posNumTrovato = binarySearch(array, l, x);
                if (posNumTrovato != -1)
                    printf("Il numero è stato trovato in posizione %d array[%d] = %d\n\n",posNumTrovato,posNumTrovato,array[posNumTrovato]);
                else
                    printf("Numero non trovato\n\n");
                break;
        }
    }while(cmd!='e');
    return 0;
}

int riempiArray(int vettore[]){
    int i;
    int l;
    printf("Quanto è lungo l'array? ");
    scanf("%d",&l);
    for (i=0; i<l; i++)
        scanf("%d",&vettore[i]);
    /*
    for (i=1; i<=l; i++)
     scanf("%d",&vettore[i-1]);
    */
    return l;
}

void riempiArray2(int vettore[], int *len){
    int i;

    printf("Quanto è lungo l'array? ");
    scanf("%d",len);
    for (i=0; i<*len; i++)
        scanf("%d",&vettore[i]);
    /*
    for (i=1; i<=*len; i++)
     scanf("%d",&vettore[i-1]);
    */
}

void riempiArray3(int vettore[], int len){
    int i;
    for (i=0; i<len; i++){
        //scanf("%d",&vettore[i]);
        scanf("%d",vettore+i);
    }
}

void stampaArray(int vettore[], int len){
    int i;
    for (i=0; i<len; i++)
        printf("%d ",vettore[i]);
    printf("\n");
}


void stampaArrayContrario(int vettore[], int len){
    int i;
    for (i=len-1; i>=0; i--)
        printf("%d ",vettore[i]);
    printf("\n");
}


void bubbleSort(int vettore[], int len){
    int i,j, temp;
    int swap = 0;
    
    for (i = 0; ((i<len) && (swap ==0)); i++){
        swap = 1;
        for (j=0; j<len-1; j++)
        {
            if (vettore[j]>vettore[j+1]){
                temp = vettore[j];
                vettore[j] = vettore[j+1];
                vettore[j+1] = temp;
                swap = 0;
            }
        }
    }
}

int binarySearch(int vettore[], int len, int x){
    int inizio = 0;
    int fine = len-1;
    int medio;
    
    //Non so l'array è ordinato, lo ordine
    bubbleSort(vettore, len);
    
    //Ora il mio vettore è ordinato
    while(inizio<=fine){
        medio = inizio + (fine - inizio)/2;
        if (vettore[medio] == x)
            return medio;
        if (vettore[medio]<x)
            inizio = medio+1;
        else
            fine = medio-1;
    }
    return -1;
}

