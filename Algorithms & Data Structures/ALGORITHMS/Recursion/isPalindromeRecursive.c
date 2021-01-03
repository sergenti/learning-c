int isPalindrome(char string[], int from, int to)
{
    if (from >= to)
        return 1;
    else
        return (string[from] == string[to] &&
                isPalindrome(string, from + 1, to - 1));
}

// isPalindrome(s, 0, strlen(s) - 1);
