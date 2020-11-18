// char copy[20] = name THIS WILL NOT WORK!!
stringCopy()
{
    char name[] = "Filippo";
    char copy[20];
    strcpy(copy, name); //destination must be first
    printf("Copy of name: %s\n", copy);
}
