// Rules of Farfallese Language
// after every vowel insert an F (case sensitive)

#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100

int main()
{
    // Get a sentence as an input by the user

    char string[STRING_LENGTH];
    char stringInFarfallese[STRING_LENGTH];
    printf("write something here > ");
    scanf("%s", string);

    // find a vowel in the string,
    // add F or f depending on the case afterwards
    // shift all the other hars in the string

    int count = 0;

    for (int i = 0; i < STRING_LENGTH; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            stringInFarfallese[count++] = string[i];
            stringInFarfallese[count++] = 'f';
        }
        else if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            stringInFarfallese[count++] = string[i];
            stringInFarfallese[count++] = 'F';
        }
        else
            stringInFarfallese[count++] = string[i];
    }

    printf("%s", stringInFarfallese);
}