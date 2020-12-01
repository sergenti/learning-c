#include <stdio.h>

// Basic
factorial(n)
{
    int ans = 1;

    if (n == 0 || n == 1) // Base case
        ans = 1;
    else
        ans += factorial(n - 1);
}

// Best
unsigned long long factorialOf(int number)
{
    unsigned long long factorial = 1;
    while (number)
    {
        factorial *= number;
        number--;
    }
    return factorial;
}

// unsigned long long 8 0 to 18,446,744,073,709,551,615

//  for( i = 1; i <= number; i++ ) {
//       fact = fact * i;
//   }