// what is the output?

#include <stdio.h>

void main()
{
    int X = 3, Y = 3;
    while (--X && --Y)
        printf("%d, %d\n", X, Y);
}

/* 

LOGICAL AND && (Flow)
checks more than one expression at time

if first is true checks the second
if first is false terminates the while without checking the second

OUTPUT:
2, 2
1, 1
0, 1             (since first is false the --Y will not get executed)

*/