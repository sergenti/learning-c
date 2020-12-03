#include <stdio.h>
#include <string.h>

#define N 10
#define M 15

int main()
{
    char str1[32]; /* str1 ha spazio per 32 char. */
    char str2[64]; /* str2 ha spazio per 64 char. */

    strcpy(str1, "alfa"); /* inizializza str1 con la stringa "alfa" */

    strcpy(str2, str1); /* copia str1 in str2 */

    int x = strlen(str1); /* lunghezza di str1 */

    printf("%s", str1); /* scrive str1 su stdout */

    scanf("%s", str1); /* str1 “riceve” da stdin */

    int i = 0;
    while (str1[i] != '\0') // working with \0
    {
        printf("%c ", str1[i++]);
    }

    // comparison
    int different = strcmp(str1, str2);
    if (different == 0)
        printf("SAME\n");
    else if (different < 0)
        printf("%s PRECEDES %s\n", str1, str2);
    else
        printf("%s FOLLOWS %s\n", str1, str2);
}

// strcpy(string, destination)
// copy a string into another
void strcpy(char *s1, char *s2)
{
    if (strlen(s1) > strlen(s2))
        printf("ERROR string has not enough memory");

    for (int i = 0; i < strlen(s1); i++)
        s2[i] = s1[i];
}

// comparing 2 strings
int strcmp(char *s1, char *s2)
{
    if (strlen(s1) != strlen(s2))
        return 0;

    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s2[i])
            return 0;
    }

    return 1;
}