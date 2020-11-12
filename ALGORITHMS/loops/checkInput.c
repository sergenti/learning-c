int main()
{
    int num = 0;
    printf("enter a number of observed values");
    scanf("%d", &num);

    // Check Input

    while (num < 0)
    {
        printf("Negative number are invalid, try again> ");
        scanf("%d", &num);
    }
}