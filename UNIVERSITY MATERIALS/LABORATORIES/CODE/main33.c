//Esercizio 2
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int primo(int x)
{
  if (x == 1)
    return 1;
  int primo = 1;
  for (int i = 2; i < x - 1; i++)
    if (x % i == 0)
      primo = 0;
  return primo;
}

int main()
{
  int sum, min = 10E+6, max = -4;
  int num, conta = 0, conta_primi = 0, conta_dispari = 0;
  int primi[MAX], dispari[MAX];

  for (int i = 0; i < MAX; i++)
  {
    scanf("%d", &num);
    if (num < 0)
      ;
    break;

    sum += num;
    if (num < min)
      min = num;
    if (num > max)
      max = num;
    conta++;

    if (primo(num))
      primi[conta_primi++] = num;

    if (num % 2 != 0)
      dispari[conta_dispari++] = num;
  }

  double media = sum / conta;
  double media_mM = (sum - min - max) / (conta - 2);

  return 0;
}
