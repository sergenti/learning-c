#define COLUMN_LENGTH 10
#define ROW_LENGTH 10

/*

In Main:

int matrix[ROW_LENGTH][COLUMN_LENGTH];
fillMatrix(matrix);

*/

void fillMatrix(int matrix[ROW_LENGTH][COLUMN_LENGTH])
{
    int row = 0, column = 0;

    for (int row = 0; row < ROW_LENGTH; row++)
    {
        for (int column = 0; column < COLUMN_LENGTH; column++)
        {
            printf("insert element at ( row: %d, column: %d ) of M(%dx%d) > ", row + 1, column + 1, ROW_LENGTH, COLUMN_LENGTH);
            scanf("%d", &matrix[row][column]);
        }
    }
}