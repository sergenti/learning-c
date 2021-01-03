// INclude statement allows us to use functions from this function
#include <stdio.h>

// this is a function
// first function to be executed
int main()
{

    printf("Hello World!"); // Console Logging

    int X = 50; // This is variable, allows us to use the name (x) to reference its value (50)

    int Y;  // Declaration
    Y = 10; // Initialization => Assign operator

    printf("The value of X is %d\n", X);                               // %d decimal
    printf("The value of Y is %d\n", Y);                               // %d decimal
    printf("The value of X is %d while the value of Y is %d\n", X, Y); // multiple parameters is order

    printf("%s World\n", "Hello"); // %s strings

    // Getting User Input
    int radius;
    printf("please insert radius > ");
    scanf("%d", &radius); // & => address of operator
    printf("You chose the value %d", radius);

    // Strings - "this is a string \0" - array of characters
    char name[20]; // Max characters 19 because one if for \0
    scanf("%19s", name);

    return 0; // This return that is all OK
}

/*

COMPILING

gcc nameOfTheFile.c             // this wil create a.exe in your folder
gcc -o name nameOfTheFile.c     // renaming the exe file

every change you have to compile!

EXECUTING

./a.out


*/
