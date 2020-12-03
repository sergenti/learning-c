int exp(int b, int e)
{
    int i, r = 1;
    for (i = 1; i <= e; i++)
        r = r * b;
    return r;
}