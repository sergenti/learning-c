#include <stdio.h>
#include <math.h>

/******************************************************************************

                            C Calculator
                     Filippo Sergenti 17/09/2020
I was bored to death and I tried to do something as useless as the language
my university (POLIMI Politecnico of Milan) requires me to learn.

                            (pls help me)

*******************************************************************************/

// V1: only working with ints

int main()
{
  printf("Choose the operator you desire\n\n1)somma\n2)differenza\n3)moltiplicazione\n4)divisione\n\n>");

  int operator= 0;
  scanf("%d", &operator);

  double a, b;

  a = 0;
  b = 0;

  if (operator== 1)
  {
    // SOMMA
    a = getA();
    b = getB();

    int c = a + b;
    printf("%d", c);
    return 0;
  }
  if (operator== 2)
  {
    // DIFFERENZA
    a = getA();
    b = getB();

    int c = a - b;
    printf("%d", c);
    return 0;
  }
  if (operator== 3)
  {
    // MOLTIPLICAZIONE
    a = getA();
    b = getB();

    int c = a * b;
    printf("%d", c);
    return 0;
  }
  if (operator== 4)
  {
    // DIVISIONE
    a = getA();
    b = getB();

    int c = a / b;
    printf("%d", c);
    return 0;
  }
  if (operator== - 5)
  {
    printf("i byte non sono sufficienti");
  }
  else
  {
    printf("stronzo il numero va da 1 a 4");
  }

  return 0;
}

int getA()
{
  int a;
  printf("\nEnter the value of the FIRST number> ");
  scanf("%d", &a);
  return a;
}

int getB()
{
  int b;
  printf("Enter the value of the SECOND number> ");
  scanf("%d", &b);
  return b;
}
