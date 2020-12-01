// what is the output?

void main()
{
    int a = 53;
    printf("\na = %o", a);
}

/*

53 is a DECIMAL integer constant
%o is a FORMAT SPECIFIER
%o displays OCTAL integer constant

INTEGER CONSTANTS in C:

Hexadecimal                  %x or %X(for upper case letters)
Decimal                      %d
Octal                        %o
Binary                       %0

53(10) = 65(8)

to convert is easier to pass from base 2 and get 3 bits at time
53(10) = 110101(2)

110  101  = 110101 (2)
 6    5   = 65(8)

*/