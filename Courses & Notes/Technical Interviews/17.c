// what is the output?

#include <stdio.h>

void main()
{
    int a = 5;
    a = ++a + ++a;
    printf("a: %d\n", a);
}

/*

MODIFIER OPERATORS
PRE-increment, increase value snd there substitute

FIRST increment them all, then substitute, how?

int a = 5;               5
++a                      6
++a                      7

a = ++a + ++a
a = 7 + 7                14

*/