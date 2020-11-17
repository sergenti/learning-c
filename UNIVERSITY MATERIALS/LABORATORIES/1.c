//Esercizio 1 di partenza

#include <stdio.h>
int main(){
   int num1, num2, risultato;
   scanf("%d", &num1);
   scanf("%d", &num2);
   risultato = num1 + num2 ;
   printf("%d", risultato);
   return 0;
}

//Esercizio 1 senza variabile risultato

#include <stdio.h>
int main(){
   int num1, num2;
   scanf("%d", &num1);
   scanf("%d", &num2);
   printf("%d", num1 + num2); 
   //Notare come le istruzioni nella printf vengano
   //valutate, poi il risultato visualizzato
   return 0;
}

//Esercizio 1 che stampa il risultato solo se positivo, altrimenti errore

#include <stdio.h>
int main(){
   int num1, num2, risultato;
   scanf("%d", &num1);
   scanf("%d", &num2);
   risultato = num1 + num2
   if (risultato > 0 )
        printf("%d", risultato); 
   else printf("ERRORE!");
   return 0;
}

//Esercizio 1 che effettua la somma solo se gli addendi sono positivi

#include <stdio.h>
int main(){
   int num1, num2;
   scanf("%d", &num1);
   scanf("%d", &num2);
   if ((num1 > 0) && (num2 > 0))
        printf("%d", num1 + num2); 
   else printf("ERRORE!");
   return 0;
}

//Come prima, ma controlliamo all'intero di un while che gli addendi sia positivi
//in modo da permettere all'utente il reinserimento

#include <stdio.h>
int main(){
   int num1 = -1;
   int numb2 = -1;
   while(num1 < 0 && num2 < 0){
        scanf("%d", &num1);
        scanf("%d", &num2);
        if (num1 < 0 || num2 < 0)
            printf("Uno dei due addendi è minore di zero. Reinserirli.")
   }
   risultato = num1 + num2
   printf("%d",risultato);
   return 0;
}