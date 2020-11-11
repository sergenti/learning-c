int asterischi()
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