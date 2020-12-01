// what is the output?

#include <stdio.h>

void main()
{
    int a = 4;
    int b = 5;

    b = a++ + a--;
    a = ++b + b--;

    printf("%D %d", a, b);
}

/*

PRE & POST INCREMENT OPERATORS

*/