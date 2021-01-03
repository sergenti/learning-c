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