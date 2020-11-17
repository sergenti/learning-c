//ES 7: Fibonacci pari

#include <stdio.h>
int main(){
    int primo, secondo, nuovoTermine=0, somma = 0; //Sequenza di Fibonacci generica
    printf("Inserisci i primi due numeri della sequenza: ");
    scanf("%d", &primo);
    scanf("%d", &secondo);
    while (nuovoTermine < 4000000){
        //nuovoTermine è il successivo elemente della sequenza
        nuovoTermine = primo + secondo;
        if (nuovoTermine % 2 == 0) somma += nuovoTermine;
        //ora, il vecchio secondo elemento diventa il primo
        //e il nuovo elemento il secondo
        primo = secondo;
        secondo = nuovoTermine;
    }

    printf("La somma richiesta è: %d", somma);
        
    
}