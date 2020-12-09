// check if in a 10x10 matrix there is a row of all negatives elements;
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

    int found; // 1 if found, 0 if not
    int valid; // 1 ho rispettato condizione

    int row = 0, column = 0;

    // Analyze Rows
    for (row = 0; row < ROW_LENGTH; row++)
    {
        found = 1;

        for (column = 0; column < COLUMN_LENGTH; column++)
        {
            if (matrix[row][column] > 0)
                found = 0;
        }

        if (found == 1)
            valid = 1;
    }

    // Analyze Columns
    for (column = 0; column < COLUMN_LENGTH; column++)
    {
        found = 1;

        for (row = 0; row < ROW_LENGTH; row++)
        {

            if (matrix[row][column] > 0)
                found = 0;
        }

        if (found == 1)
            valid = 1;
    }

    if (valid)
        printf("matrix contains at lest a row or a column negative");
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