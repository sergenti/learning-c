#define COLUMN_LENGTH 10
#define ROW_LENGTH 10

/*

In Main:

int matrix[ROW_LENGTH][COLUMN_LENGTH];
------- fillMatrix(matrix); -------
printMatrix(matrix);

*/

printMatrix(int matrix[ROW_LENGTH][COLUMN_LENGTH])
{
    int row, column = 0;

    for (row = 0; row < 3; row++)
    {
        for (column = 0; column < 4; column++)
        {
            printf("%d     ", matrix[row][column]);
        }
        printf("\n");
    }
}