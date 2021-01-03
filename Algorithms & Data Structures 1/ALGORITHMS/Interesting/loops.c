void WHILE()
{
    int count = 0;
    while (count < n)
    {
        printf("*");
        count++;
    }
}

void FOR()
{
    for (int count = 0; count < n; count++)
        printf("*");
}

void DO_WHILE()
{
    int count = 0;
    do
    {
        printf("*");
        count++;
    } while (count < n)
}

// THERE ARE NO DIFFERENCES, THEY CAN ALL SOLVE THE SAME PROBLEM
// JUST DIFFERENT SYNTAX FOR BETTER CODE READABILITY