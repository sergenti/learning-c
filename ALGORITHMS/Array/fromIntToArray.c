// From Integer to array

// Use n % 10 to get the last digit and n / 10 to get the others. For example, 5=12345%10, 1234=12345/10.

// Convert integer to array:

fromIntToArray()
{
    int array[6];
    int n = 123456;
    for (int i = 5; i >= 0; i--)
    {
        array[i] = n % 10;
        n /= 10;
    }
}