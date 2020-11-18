int MultiplyUntill1000()
{
    int item = 0;
    int product = 1;

    while (product < 100)
    {
        printf("%d\n", product);

        printf("enter next item> ");
        scanf("%d", &item);
        product = product * item;
    }
}