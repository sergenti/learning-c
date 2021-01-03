// what is the output?

#include <stdio.h>

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int i;

    int *ptr;
    ptr = arr; // points at arr[0]

    printf("%u\n", *++ptr + 3);
    printf("%u\n", *(ptr-- + 2) + 5);
    printf("%u\n", *(ptr + 3) - 10);
}

/*

POINTERS ALGBRA:

*++ptr + 3;
preincremental, we increment and substitute
arr[1] + 3 = 23

*(ptr-- + 2) + 5 ;
now ptr = 1 we substitute it than decrement it (after ptr = 0)
ptr[1+2] +5 = ptr[3] + 5 =  40 + 5 = 45


*(ptr + 3) - 10
can be transalted as:
ptr[0 + 3] - 10 =  40 - 10 = 30

============================================
IN GENERAL:

*(ptr + something) => ptr[ptr + something]
============================================

*/