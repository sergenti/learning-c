// Printing both a variable's value & address in memory
// Printing the value hidden behind the address stored by a pointer

int main()
{
    int X = 3;

    int *P = &X;

    printf("Address of X is: %s", &X); // 0xbffff984

    printf("Value of X is: %s", X); // 3

    printf("Value of X is %d\n", *P); //3
}
