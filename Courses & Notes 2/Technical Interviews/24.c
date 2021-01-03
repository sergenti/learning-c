// what is the output?

#include <stdio.h>

void main()
{
    int x = 5;
    int y = 0;

    int a, b;

    a = ++y || ++x;
    b = --y && ++x;

    printf("%d %d %d %d", x, y, a, b);
}

/*

PRE INCREMENT:

&& both tue? then true
|| at least one true? then true

==========  IMPORTANT  ==========
=================================

if the first value in || is true:
THE OTHER CONDITION WILL NOT RUN

if the first value in && is false:
THE OTHER CONDITION WILL NOT RUN

compiler does this fot fast
execution times

=================================
=================================

x = 5+1 = 6 THE OTHER CONDITION WILL NOT RUN
y = 0+1 = 1 
a = 1||5 = true || true = 1
 
x = 5+1 = 6 THE OTHER CONDITION WILL NOT RUN
y = 1-1 = 0
b = 0&&6 = false && true = 0

OUTPUT:
x = 5
y = 0
a = 1
b = 0

*/