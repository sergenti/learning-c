#define SIZE 10

void INIT()
{

    // Declaration
    int a[20];

    // Initialization (Homogeneous)

    for (int i = 0; i <= 19; i++)
    {
        a[i] = 0;
    }

    // • initialization from terminal

    for (int i = 0; i <= 19; i++)
    {
        printf("\ninsert a number: ");
        scanf("%d", &a[i]);
    }
}
