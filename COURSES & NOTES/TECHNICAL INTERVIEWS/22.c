// what is the output?

#include <stdio.h>

void main()
{
    int a = 35,
        b = 15,
        c = 25,
        d,
        e;

    d = a > c > b;
    e = c - b > a <= d;
}

/*

RELATIONAL OPERATORS HAVE THE SAME PRIORITY: LEFT TO RIGHT
-------------> -------------> -------------> ------------->

d = a > c > b;
d = 35 > 25 > 15;  in math it would be true, but in C it isn't

35 > 25 condition is true => 1 
d = 1 > 15 => d is false
d = 0;

e = c - b > a <= d;
e = 25 - 10 > 35 <= 0;
e = 10 > 35 <= 0;
e = 0 <= 0;
e = 1;

d = 0;
e = 1;

- relational have all same priority
- general priority from left to right
- mathematical operators have more priority on relational

*/