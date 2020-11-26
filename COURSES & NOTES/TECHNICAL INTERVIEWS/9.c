// what is the output?

void main()
{
    int i;
    i = 10 + 010 + 0x20;
    printf("&d", i);
}

//    10      -      decimal integer constant          -       (nothing)

//    010     -      octal integer constant            -       (preceded with 0)

//    0x20    -      hexodecimal integer constaant     -       (preceded with 0x)

//    10 octal = 8 decimal
//    20 hex = 32 decimal

//    why converting to decimal???

//    %d - to print value in integer format.
//    %o - to print value in octal format.
//    %x - to print value in hexadecimal format (letters will print in lowercase)
//    %X - to print value in hexadecimal format (letters will print in uppercase)

//    output: 10 + 8 + 32 = 50