#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/******************************************************************************

                            Tic-Tac-Toe
                     Filippo Sergenti 17/09/2020
I was bored to death and I tried to do something as useless as the language
my university (POLIMI Politecnico of Milan) requires me to learn.

                            (pls help me)

*******************************************************************************/

// V2

char square[10] = {
    'o',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
};

int main()
{
    int player, i, choice;
    char mark;

    player = 1;

    // Game Loop

    do
    {
        // Draw the Board
        board();

        // Handle Game Turn
        player = (player % 2) ? 1 : 2;

        // Asking player to choose a valid cell
        printf("\n   Player %d, enter a number: ", player);
        scanf("%d", &choice);

        // Handling Different marks depending on the player
        mark = (player == 1) ? 'X' : 'O';

        // If cell is clear and someone choses it, update it to display player's mark
        // However if cell is already taken, display an error!
        for (int i = 1; i <= 9; i++)
        {
            if (choice == i && square[i] == i + '0')
            {
                square[i] = mark;
                return 0;
            }
            else
            {
                printf("\nInvalid move");
                player--;
                getch();
            }
        }

        // Check who won
        i = checkwin();

        player++;

    } while (i == -1);

    // Draw the Board
    board();

    // Display the winner
    if (i == 1)
        printf("\n\n\tPlayer %d won", --player);
    else
        printf("Game draw");

    getch();

    return 0;
};

/**************************************************************************
 * 
 *         FUNCTION  TO  RETURN  GAME  STATUS  RESULTS
 *  
 *          1       FOR GAME OVER  WITH RESULTS
 *         -1       FOR GAME IN PROGRESS
 *          0       GAME IS OVER AND NO RESULTS
 * 
**************************************************************************/

int checkwin()
{

    // int a[3][4] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9},
    //     {1, 4, 7},
    //     {2, 5, 8},
    //     {3, 6, 9},
    //     {1, 5, 9},
    //     {3, 5, 7}};

    if (square[1] == square[2] && square[2] == square[3])
    {

        return 1;
    }

    else if (square[4] == square[5] && square[5] == square[6])
    {

        return 1;
    }

    else if (square[7] == square[8] && square[8] == square[9])
    {

        return 1;
    }

    else if (square[1] == square[4] && square[4] == square[7])
    {

        return 1;
    }

    else if (square[2] == square[5] && square[5] == square[8])
    {

        return 1;
    }

    else if (square[3] == square[6] && square[6] == square[9])
    {

        return 1;
    }

    else if (square[1] == square[5] && square[5] == square[9])
    {

        return 1;
    }

    else if (square[3] == square[5] && square[5] == square[7])
    {

        return 1;
    }

    else if (
        square[1] != '1' &&
        square[2] != '2' &&
        square[3] != '3' &&
        square[4] != '4' &&
        square[5] != '5' &&
        square[6] != '6' &&
        square[7] != '7' &&
        square[8] != '8' &&
        square[9] != '9')
    {

        return 0;
    }

    else
    {

        return -1;
    }
};

/**************************************************************************
 * 
 *        FUNCTION TO DRAW BOARD OF TIC-TAC-TOE WITH PLAYER MARKS
 * 
**************************************************************************/

void board()
{
    system("cls");
    printf("\n\n\t  Tic Tac Toe\n\n");
    printf("  Player 1 (X)  -  Player 2 (O)\n\n");

    printf("\t     :     :     \n");
    printf("\t  %c  :  %c  :  %c  \n", square[1], square[2], square[3]);

    printf("\t_____:_____:_____\n");
    printf("\t     :     :     \n");

    printf("\t  %c  :  %c  :  %c  \n", square[4], square[5], square[6]);

    printf("\t_____:_____:_____\n");
    printf("\t     :     :     \n");

    printf("\t  %c  :  %c  :  %c  \n", square[7], square[8], square[9]);
    printf("\t     :     :     \n");
};
