// "Hey if you have already included it, don't do it again, so we don't re-declare this HEDERFILE"
// optional but recommended

#ifndef HEADER_FILE // include guards prevent multiple includsion
#define HEADER_FILE // if not yet defined, define it

// Prototypes (Signatures)
// this can just work without the other stuff around (#ifndef etc)
int square(int input);
int cube(int input);
int power(int input, int exponent);
int recursivePower(int input, int exponent);
void changeVal(int *a);
int oldestValue(int *ages, int size);

#endif

/* 

HEADER FILE
- list of all funcitons declaration
- what input type they need
- what type they return

( just copy all the functions an get rid of the bodies, only signatures)

libraries.h  =>  definitions
libraries.c  =>  actual code of all the functions

*/