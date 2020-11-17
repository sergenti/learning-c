#include <stdio.h>

//Letto dall'utente un valore n, disegnare il triangolo di tartaglia

#define N 100

void creaMatrice(int matrix[][2 * N], int n);
void stampaMatrice(int matrix[][2 * N], int n);
void stampaMatriceSenzaZeri(int matrix[][2 * N], int n);

int main()
{
    int triangolo[N][2 * N];
    int n;

    printf("Inserisci la dimensione del triangolo (>0): ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
            printf("N deve essere >=1\n");
    } while (n <= 0);

    creaMatrice(triangolo, n);
    stampaMatriceSenzaZeri(triangolo, n);

    return 0;
}

void creaMatrice(int matrix[][2 * N], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
        for (j = 0; j < 2 * (n - 1); j++)
            matrix[i][j] = 0;

    matrix[0][n - 1] = 1;
    matrix[n - 1][0] = 1;
    matrix[n - 1][2 * (n - 1)] = 1;

    for (i = 1; i < n; i++)
        for (j = 1; j < 2 * (n - 1); j++)
            matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j + 1];
}

void stampaMatrice(int matrix[][2 * N], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= 2 * (n - 1); j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void stampaMatriceSenzaZeri(int matrix[][2 * N], int n)
{
    int i, j;
    int cont;

    for (i = 0; i < n; i++)
    {
        cont = 0;
        for (j = 0; j <= 2 * (n - 1); j++)
        {
            if (((cont == 0) || (cont > i)) && (matrix[i][j] == 0))
                printf(" %3s ", "");
            else
            {
                if (matrix[i][j] != 0)
                    cont++;
                printf(" %3d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}
