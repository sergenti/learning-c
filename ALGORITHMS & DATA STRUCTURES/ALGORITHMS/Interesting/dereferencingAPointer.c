// Printing the value hidden behind the address stored by a pointer

int main()
{
    int X = 3;
    int *P = &X;
    printf("Value of X is %d\n", *P); //3
}