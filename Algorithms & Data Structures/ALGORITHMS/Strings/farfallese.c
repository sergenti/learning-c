// Rules of Farfallese Language
// after every vowel insert an F (case sensitive)

#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 101

int main()
{
    // Get a sentence as an input by the user

    char string[STRING_LENGTH];
    char stringInFarfallese[2 * STRING_LENGTH];

    printf("write something here > ");
    fgets(string, STRING_LENGTH, stdin);

    // Add every letter to new string at J-th position
    // if we find a vowel, after adding it to our string
    // we will append an F or f depending on the case

    int count = 0;

    for (int i = 0; i < STRING_LENGTH; i++)
    {
        stringInFarfallese[count++] = string[i];

        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
            stringInFarfallese[count++] = 'f';

        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
            stringInFarfallese[count++] = 'F';
    }

    // Add null terminator
    stringInFarfallese[count] = 0;

    // Output
    printf("%s", stringInFarfallese);
}