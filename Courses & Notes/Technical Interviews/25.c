// what is the output?

#include <stdio.h>

void main()
{
    int x;
    x = 4 % 5 == 4 % 2 + 3;
    printf("x = %d", x);
}

/*

PRIORITY: MATHEMATICAL > COMPARISON/LOGICAL
( % more priority than +)

x = 4 % 5 == 4 % 2 + 3;
x = 4 == 0 + 3;
x = 4 == 3; FALSE
x = 0;

*/