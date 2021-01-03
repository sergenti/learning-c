// char copy[20] = name THIS WILL NOT WORK!!

stringCopy()
{
    char name[] = "Filippo";
    char copy[20];
    strcpy(copy, name); //destination must be first
    printf("Copy of name: %s\n", copy);
}

// STRCPY could be implemented in this way

#define N 10
#define M 15

strcpy()
{
    char s1[N], s2[M];
    int i = 0;
    while (i <= strlen(s2) && i < N)
    {
        s1[i] = s2[i];
        ++i;
    }
}