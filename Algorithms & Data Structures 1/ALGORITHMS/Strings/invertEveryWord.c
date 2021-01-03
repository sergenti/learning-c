#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100
#define WORD_LENGTH 20

int main()
{

    char str[STRING_LENGTH];
    char delimiter[] = " ";

    // Collect a string from the user

    printf("insert a generic string,feel free to type whatever you like > \n");
    fgets(str, STRING_LENGTH, stdin);
    strtok(str, "\n"); // removing trayling \n (newline char)

    char *ptr = strtok(str, delimiter);

    int i;
    char wordArray[i][WORD_LENGTH];

    // Split string on blank char " " and push it to wordArray

    for (i = 0; ptr != NULL; i++)
    {
        strcpy(wordArray[i], ptr);
        ptr = strtok(NULL, delimiter); // update ptr
    }

    // Print string @ reverse order

    for (int j = i; j >= 0; j--)
        printf("%s ", wordArray[j]);

    return 0;
}
