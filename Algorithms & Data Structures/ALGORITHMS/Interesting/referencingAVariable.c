// printing both a variable's value & address in memory

int main()
{
    int X = 3;
    printf("Address of X is: %s", &X); // 0xbffff984
    printf("Value of X is: %s", X);    // 3
}