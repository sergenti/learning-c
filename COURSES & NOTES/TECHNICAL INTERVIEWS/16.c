// what is the output?

#include <stdio.h>
#include <limits.h>

void main()
{
    printf("%d", USHRT_MAX);
}

// LIMITS.H headerfile
// provides info about limits of each data types

// USHRT_MAX (capital letters, constant)
// UnSigned SHort MAXimum limit
// already defined in limits.h

// short occupies 2 bytes from 0 to 2^16 -1 (65535)

// but we are using %d, specifier of signed
// so in C2 we will have -2^15 to +2^15 -1

// the problem here is that 65535 in %d concides with 0
// see image 16.png below.