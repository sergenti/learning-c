int exp(int b, int e)
{
    if (e == 0)
        return 1;
    else
        return b * exp(b, e - 1);
}