/*

HOW TO COMPILE LIBRARIES
( linkers and objectfiles )

gcc -c 5.2-libraries.c                      => compiling the code of our library
gcc -c 5.2-libraries-main.c                 => compiling the main C file
gcc 5.2-libraries.o 5.2-libraries-main.o    => linking - combine them in just one executible
./a.exe                                     => executing the compile .exe file

objectfiles are intermediate step between compiling and the final product
if no objectfile just compile them both at the same time
.o files only if you want to give the library and not the source code,
headerfile works only as interface to work with that file

gcc 5.2-libraries.c 5.2-libraries-main.c

You can also get a custom name like this:
gcc -o main 5.2-libraries.o 5.2-libraries-main.o

research makefile to make life easier

*/

#include "5.2-libraries.h"
#include <stdio.h>

int main()
{
    printf("%d ", power(2, 4)); //keep output on calling side
    printf("%d ", recursivePower(2, 4));

    int val = 5;
    changeVal(&val);
    printf("Val = %d\n", val);

    int const size = 7;
    int ages[] = {1, 4, 53, 23, 23, 9, 52};
    printf("Oldest age: %d\n", oldestValue(ages, size));
    return 0;
}