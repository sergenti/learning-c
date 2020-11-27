// I like stars, how many do you want?

// IT'S ALL FREE :)

int howManyStars()
{
    int n;

    printf("How many stars?");
    scanf("%d", &n);

    int count = 0;
    while (count < n)
    {
        printf("*");
        count++;
    }
}