int isPalindrome(char string[])
{
    // assign index to first and last char of the string

    int from = 0;
    int to = strlen(string) - 1;

    while (from < to)
    {
        // moves indexes from both ends to the center
        // & returns false at the first char missmatch
        if (string[from] != string[to])
            return 0;
        ++from;
        --to;
    }

    // if it ends the loop without finding any differences, the string is palindrome
    return 1;
}