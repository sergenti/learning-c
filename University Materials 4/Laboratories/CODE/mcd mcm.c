#include <stdio.h>

int max(int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}

int min(int a, int b)
{
  if (a < b)
    return a;
  else
    return b;
}

int main(void)
{

  int a, b;

  do
  {
    printf("a = ");
    scanf("%d", &a);
  } while (a < 0);

  do
  {
    printf("b = ");
    scanf("%d", &b);
  } while (b < 0);

  int mcm = 0;
  for (int i = max(a, b); (a != 0) && (b != 0); i++)
    if (i % a == 0 && i % b == 0)
    {
      mcm = i;
      break;
    }

  int MCD = 1;
  for (int i = min(a, b); (a != 0) && (b != 0); i--)
    if (a % i == 0 && b % i == 0)
    {
      MCD = i;
      break;
    }

  printf("mcm = %d, MCD = %d", mcm, MCD);

  return 0;
}