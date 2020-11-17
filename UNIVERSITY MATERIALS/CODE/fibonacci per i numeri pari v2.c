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