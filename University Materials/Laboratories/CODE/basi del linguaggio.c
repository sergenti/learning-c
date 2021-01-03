// Esercizio 1 di partenza

#include <stdio.h>
int main()
{
   int num1, num2, risultato;
   scanf("%d", &num1);
   scanf("%d", &num2);
   risultato = num1 + num2;
   printf("%d", risultato);
   return 0;
}

// Esercizio 1 senza variabile risultato
// Notare come le istruzioni nella printf vengano valutate, poi il risultato visualizzato

#include <stdio.h>
int main()
{
   int num1, num2;
   scanf("%d", &num1);
   scanf("%d", &num2);
   printf("%d", num1 + num2);

   return 0;
}

// stampa il risultato solo se positivo, altrimenti errore

#include <stdio.h>
int main()
{
   int num1, num2, risultato;
   scanf("%d", &num1);
   scanf("%d", &num2);
   risultato = num1 + num2;
   if (risultato > 0)
      printf("%d", risultato);
   else
      printf("ERRORE!");
   return 0;
}

// effettua la somma solo se gli addendi sono positivi

#include <stdio.h>
int main()
{
   int num1, num2;
   scanf("%d", &num1);
   scanf("%d", &num2);
   if ((num1 > 0) && (num2 > 0))
      printf("%d", num1 + num2);
   else
      printf("ERRORE!");
   return 0;
}

// Come prima, ma controlliamo all'intero di un while che gli addendi sia positivi
// in modo da permettere all'utente il reinserimento

#include <stdio.h>
int main()
{
   int num1 = -1;
   int num2 = -1;
   int res;

   while (num1 < 0 && num2 < 0)
   {
      scanf("%d", &num1);
      scanf("%d", &num2);
      if (num1 < 0 || num2 < 0)
         printf("Uno dei due addendi è minore di zero. Reinserirli.");
   }

   res = num1 + num2;
   printf("%d", res);
   return 0;
}