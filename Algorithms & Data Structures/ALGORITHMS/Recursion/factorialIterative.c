
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