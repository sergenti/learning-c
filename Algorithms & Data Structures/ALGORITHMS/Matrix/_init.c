#include <stdio.h>

#define COLUMN_LENGTH 3
#define ROW_LENGTH 3

void printMatrix(int matrix[ROW_LENGTH][COLUMN_LENGTH]);
void fillMatrix(int matrix[ROW_LENGTH][COLUMN_LENGTH]);

int main()
{
    // Initialize matrix
    int matrix[ROW_LENGTH][COLUMN_LENGTH];
    fillMatrix(matrix);
    printMatrix(matrix);
}

/*=======================================================================================
                                    F U N C T I O N S                                    
=======================================================================================*/

void printMatrix(int matrix[ROW_LENGTH][COLUMN_LENGTH])
{
    printf("\n\n");
    int row, column = 0;

    for (row = 0; row < ROW_LENGTH; row++)
    {
        for (column = 0; column < COLUMN_LENGTH; column++)
            printf("%d     ", matrix[row][column]);
        printf("\n");
    }
}

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