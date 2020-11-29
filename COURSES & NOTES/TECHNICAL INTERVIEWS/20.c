// what is the output?

#include <stdio.h>

void main()
{
    char x = 120;
    while (++x > 0)
        printf("%d\t", x);
}

// CHAR, if you don't specify the character it will just be a signed character (by default)

// LIMITS OF SIGNED CHAR -128 to +127 (C2)

// 121, 122 ... 127 after that  the next value will be -128 witch is less than 0, no loop

// see image below