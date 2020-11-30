#include <stdio.h>
#include <math.h>

unsigned int factorial(unsigned int );
double maclaurin(double, double);

int main(void) {
  int n;
  double x;

  do 
  { 
    printf("Inserisci n: ");
    scanf("%d", &n);
  }
  while( n < 0 );

  printf("Inserisci x: ");
  scanf("%lf", &x);

  double res = maclaurin(x, n);
  double exp_n = exp(x);

  printf("%lf %lf - %lf", exp_n, res, fabs(exp_n - res) );

  return 0;
}

unsigned int factorial(unsigned int n) {
  if( n == 0 )
    return 1;

  return n * factorial( n - 1 );
}

double maclaurin(double x, double n) 
{
  double sum = 0.0;

  for(int i=0; i<=n; i++)
    sum += pow(x, i) / factorial(i);

  return sum;
}