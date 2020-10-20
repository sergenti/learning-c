int factorial(int n)
{
    int i;
    int product;

    product = 1;

    for (i = n; i > 1; --i)
        product *= i;

    return (product);
}