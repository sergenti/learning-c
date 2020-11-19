// write a program that inverts a given number

// 4321 > 1234
//  121 > 121, the number is palindrome

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char num[255];
    bool isPalindrome = true;

    int i, j; // iterators

    printf("please insert the number: ");
    scanf("%s", num);

    printf("\n\n"); // style

    for (i = strlen(num), j = 0; i >= 0; i--, j++)
    {
        if (num[i] != num[j])
            isPalindrome = false;
        printf("%c", num[i]);
    }

    printf("\n\n"); // style

    if (isPalindrome)
        printf("number is palindrome");
    else
        printf("number is NOT palindrome");

    return 0;
}