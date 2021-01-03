// what is the output?

#include <stdio.h>

void main() // WITHOUT SEMICOLON
{
    int i = 1;
    while (i++ <= 12)
        printf("i: %d", i);
}

/*

i: 2
i: 3
i: 4
i: 5
i: 6
i: 7
i: 8
i: 9
i: 10
i: 11
i: 12
i: 13

*/

void main() // SEMICOLON
{
    int i = 1;
    while (i++ <= 12)
        ;
    printf("i: %d", i);
}

/*

is semicolon, blank code 

*/

void main()
{
    int i = 1;
    while (i++ <= 12)
    {
    }
    printf("i: %d", i); // i = 14
}