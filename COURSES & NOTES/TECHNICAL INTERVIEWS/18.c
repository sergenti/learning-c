// what is the output?

#include <stdio.h>

void main()
{
    int i = 2, j = 2;

    while (i + 1 ? --i : --j)
        printf("i: %d\n", i);
}

// CONDITIONAL  (trionitary operator)  ?:

// by the way there is a difference between:

// i = 1                does not modify the value
// i = i + 1   (++i)     modifies the value

// if false the loop will gte terminated, no chance to tun --j

// OUTPUT:
// i=1