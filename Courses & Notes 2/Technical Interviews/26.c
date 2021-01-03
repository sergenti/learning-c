// what is the output?

#include <stdio.h>

void fun(int);

void main()
{
    int x = 2;
    fun(x++);
}

void fun(int x)
{
    printf("x value: %d\n", x++);
}

/*

FUNCTION CONSEPTS

output: 2
image below

POST incremental function
in fun we are only incrementing the interna value


*/