// what is the output?

#include <stdio.h>

void main()
{
    char sport[] = "cricket";

    int X = 1;
    int Y = X++ + ++X;
    printf("%c", sport[++Y]);
}

/*

X = 1
Y = X++ + ++X;

X = 2
Y = X++ + 2;

X = 3
Y = 2 + 2 = 4;

sport[5] = "e" OUTPUT

*/