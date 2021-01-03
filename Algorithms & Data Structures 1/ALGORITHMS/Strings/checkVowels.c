int check_vowel(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;

    return 0;
}

#include <stdio.h>

int main()
{
    char ch;
    int lowercase_Vowel, uppercase_Vowel;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);

    lowercase_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lowercase_Vowel || uppercase_Vowel)
    {
        printf("\n %c is a VOWEL.", ch);
    }
    else
    {
        printf("\n %c is a CONSONANT.", ch);
    }
    return 0;
}