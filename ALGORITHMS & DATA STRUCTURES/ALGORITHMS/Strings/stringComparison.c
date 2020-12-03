// strcmp - returns 0 if equal values
stringComparison(name)
{
    if (strcmp(name, "Caleb") == 0) //make sure you remember == 0
    {
        printf("Your name is Caleb!\n");
    }
}

// STRCMP could be implemented in this way
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
