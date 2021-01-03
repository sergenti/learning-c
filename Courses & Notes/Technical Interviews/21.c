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
how do these operators executes?

a, b gets memory allocation

b = a++ + a--; ONLY POST ARE PRESENT

b = 4 + 4 = 8
a = a +1 -1 = a = 4

a = ++b + b--; ONE PRE AND ONE POST

a = (8+1) + 9 = 18
b = b +1 -1 = 8


PRE = > FIRST SUBSTITUTE AND THEN CHANGE VALUE
POST => FIRST CHANGE VALUE AND THAN SUBSTITUTES


*/