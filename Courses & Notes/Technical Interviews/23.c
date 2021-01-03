// what is the output?

#include <stdio.h>

void main()
{
    if (!!7)
        printf("Hi\n");
    else
        printf("Hello\n"); // Just this statement belongs to else
    printf("Bye\n");
}

/*

! operator: if you pass true, it will return false, and vice versa

7 is a true value
!!true = !false = true

OUTPUT:
HI,
Bye

if you don't represent the block {}, it will execute only first line after it

*/