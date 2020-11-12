int letter = 0;
while (name[letter] != '\0')
{
    printf("%c\n", name[letter]);
    letter++;
}

// or just using strings.h
// strlen(name)