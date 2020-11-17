//ES 5: Scrivere un programma che inverta la posizione
// delle cifre di un numero intero inserito dall'utente 
//(4321 > 1234). Inoltre, il programma avvisa se il numero
//inserito è palindromo (ad esempio, 121, 32123, ...).

//Versione avanzata (con le stringhe)

#include <stdio.h>
#include <string.h>
int main(){
    char numero[255];
    int palindromo = 1;
    int i,j;
    printf("Inserisci il numero");
    scanf("%s",numero);
    printf("\n\n");
    for (i=strlen(numero),j=0; i>=0; i--,j++){
        if (numero[i]!=numero[j]) palindromo = 0;
        printf("%c", numero[i]);
    }
    printf("\n\n");
    if (palindromo) printf("Il numero è palindromo");
    else printf("Il numero non è palindromo");

    return 0;
    
}