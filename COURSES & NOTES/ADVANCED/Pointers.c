int main()
{
    int X = 3;
    printf("Address of X is: %s", &X); // 0xbffff984
    printf("Value of X is: %s", X);    // 3

    /*

        A VARIABLE IN ANY PROGRAMMING LANGUAGE CONSISTS ON:

        ADDRESS: place in memory (RAM)
        VALE: what is stored at that address in memory

        ====================================================

        a variable can change value but not address

        ====================================================

        IN GENERAL               address = value.

    */

    int X, Y;
    X = 3; // storing value 3 at &x
    Y = X; // storing value of *x in &y

    /*

        POINTERS: variables whose values are the address of another variable

    */

    int N = 1000; // this variable contains a value
    int *nRef;
    nRef = &N; // this variable (pointer) contains an address of an another variable

    /*

        This is what really is happening:
        pointer and variables have different types!!

        int != *int 

    */

    typedef int *intRef;
    intRef myRef, yourRef;

    int *herRef; // shorthanded castyping

    /*

        We can extract the value behind the address stored in the pointer just by DEREFERENCING IT.

        int *P;

        &P   =>   address of the pointer USELESS
        P    =>   address stored by pointer
        *P   =>   value in address stored by pointer

    */

    int X = 3;
    int *P = &X; /* inizializzazione di p */
    printf("The value of X is %d\n", *P);

    // dio è morto.

    // ===========================================================================================
    // ===========================================================================================
    // ===========================================================================================

    int i = 5, j = 9;

    typedef int *punt;
    punt p; // "int * punt p;"

    p = &j; //   p = &j  =>  *p = j                   p points to j                      i=5 , j=9

    *p = i; //   &(*p) = p = &j = i = 6               j changes  to 5                    i=5 , j=5

    ++i; //      &i = i + 1                           i changes  to 5+1=6                i=6 , j=5

    i = *p; //   &i = *p = j = 5                      i changes  to 5                    i=5 , j=5

    (*p)++; //   &(*p)++ = &j++ =>  &j = j + 1        j changes to 6                     i=5 , j=6

    p = &i; //   p = &i  =>  *p = i                   p points to i                      i=5 , j=6

    *p = j; //   &(*p) = p = &i = j = 6               i changes to 6                     i=6 , j=6

    // dio resta morto.

    // ===========================================================================================
    // ===========================================================================================
    // ===========================================================================================

    int *p, *q;

    p = q; //    p = q                    =>          p, q points to the same variable (they are both poiting at the same address in memory)

    *p = *q; //  p = &var = *q = val      =>          we are assigning the value q is pointing to the value of the variable pointed by p

    // &var = val

    // e noi l'abbiamo ucciso.
}
