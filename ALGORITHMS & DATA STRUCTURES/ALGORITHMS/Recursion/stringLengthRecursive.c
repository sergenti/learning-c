int length(char *s)
{
    if (*s == '\0')
        return 0;
    else
        return 1 + length(s + 1);
}