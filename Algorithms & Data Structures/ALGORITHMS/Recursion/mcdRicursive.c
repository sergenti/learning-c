int mcdEuclid(int m, int n)
{
    if (m == n)
        return m;
    if (m > n)
        return mcdEuclid(m - n, n);
    else
        return mcdEuclid(m, n - m);
}