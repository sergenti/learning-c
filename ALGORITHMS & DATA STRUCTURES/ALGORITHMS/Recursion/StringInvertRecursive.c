void inversion(char str[], int n)
{
    if (n <= 1)
        return; // base case

    inversion(&str[1], n - 2); // inductive pass

    char temp = str[n - 1];
    str[n - 1] = str[0];
    str[0] = temp;
}

// Version 2

char *inversion2(char *s, char *t)
{
    if (strlen(s) <= 1) // base case
        return strcpy(t, s);
    else // inductive pass
        return strncat(inversion2(s + 1, t), s, 1);
}