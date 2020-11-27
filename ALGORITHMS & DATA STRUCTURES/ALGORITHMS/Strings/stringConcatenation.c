// strcat (concatenation)
stringConcatenation()
{
    char name[] = "Filippo";
    char secondName[] = "Sergenti";
    strcat(name, secondName);
    printf("Full name: %s\n", name);
    return name;
}