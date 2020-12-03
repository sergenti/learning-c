int mcdEuclid(int m, int n)
{
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
        return m;
    }