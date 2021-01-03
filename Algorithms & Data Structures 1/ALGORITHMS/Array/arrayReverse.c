#define SIZE 10
float array[];

int main()
{
    int i,

        i = 0;
    while (i < SIZE)
    {
        printf(" \n insert a number: ");
        scanf("%d", &array[i]);
        i++;
    }

    i--;
    while (i >= 0)
    {
        printf("%d\n", array[i]);
        i--;
    }
}
