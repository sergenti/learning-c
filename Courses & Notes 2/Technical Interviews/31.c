// what is the output?

#include <stdio.h>

void main()
{
    int a = 3, b = 4, c = 5;

    if (a > b)
        if (b > c)
            printf("Hi\n");
        else
        {
            printf("Hello");
        }
}

/*

NESTED IF BLOCK
defining if inside another if block

since 3 is not greater than for, the nested will be skipped

*/