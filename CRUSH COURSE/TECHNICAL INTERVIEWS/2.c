// what is the output?

void main()
{
    printf("%X", -1 << 4); // %X stands for hexodecimals
}

/*

<< LEFT-SHIFT OPERATOR

-1 is stored in C2


.                CONVERTING (16bit)
assuming that sizeof(integer) = 2 bytes = 16bits

extended binary code for 1:      0000 0000 0000 0001 
evaluate complement :            1111 1111 1111 1110
add binary bit 1 to complement:  1111 1111 1111 1111


.             APPLY LEFT SHIF OPERATOR BY 4

c2(-1):              1111 1111 1111 1111
shifted:        1111 1111 1111 1111 0000 (we lost the first 4 bits)

binary input:       1111 1111 1111 0000
hex output:           F    F    F    0
