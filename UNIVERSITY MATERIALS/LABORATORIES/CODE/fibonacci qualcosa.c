// L'ESERCITATRICE di informatica fa schifo, non sa scrivere codice,
// non voglio passare per maschilista ma non si capisce un cazzo di quello che scrive
// se ho questo codice disordinato è tutta colpa tua
// fatti un clistere e vai a lavorare al posto di inquinare le mie repository

#include <stdio.h>

long fibo(int n);

int main(void)
{
  int n;

  long int sum = 0;
  for (int i = 1; fibo(i) < 4E+6; i++)
    if (fibo(i) % 2 == 0)
      sum += fibo(i);

  printf("%ld\n", sum);

  return 0;
}

long fibo(int n)
{
  if (n == 1 || n == 2)
    return 1;
  else
    return fibo(n - 1) + fibo(n - 2);
}

//ES 7: Fibonacci pari

#include <stdio.h>
int main()
{
  int primo, secondo, nuovoTermine = 0, somma = 0; //Sequenza di Fibonacci generica
  printf("Inserisci i primi due numeri della sequenza: ");
  scanf("%d", &primo);
  scanf("%d", &secondo);
  while (nuovoTermine < 4000000)
  {
    //nuovoTermine è il successivo elemente della sequenza
    nuovoTermine = primo + secondo;
    if (nuovoTermine % 2 == 0)
      somma += nuovoTermine;
    //ora, il vecchio secondo elemento diventa il primo
    //e il nuovo elemento il secondo
    primo = secondo;
    secondo = nuovoTermine;
  }

  printf("La somma richiesta è: %d", somma);
}