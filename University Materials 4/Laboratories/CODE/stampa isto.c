#include <stdio.h>
#define SIZE 10

int main()
{
    /*
    int n[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int i,j;
    //Element   Value   Histogram
    //0         19      ************
    //1         3       ***
    
    printf("%s%13s%17s\n","Element","Value","Hisogram");
    for (i=0; i<SIZE; i++) {
        printf("%7d%13d         ",i,n[i]);
        //printf("%9s"," ");
        for (j=1; j<=n[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
     */

    int n[SIZE] = {3, 19, 15, 7, 11, 9, 13, 5, 17, 1};
    int i, j;

    //CALCOLO VALORE MASSIMO
    int max = n[0];
    for (i = 1; i < SIZE; i++)
    {
        if (max < n[i])
            max = n[i];
    }

    //DISEGNO ISTOGRAMMA
    for (j = max; j > 0; j--)
    {
        for (i = 0; i < SIZE; i++)
        {
            if (n[i] >= j)
                printf("  *  ");
            else
                printf("     ");
        }
        printf("\n\n");
    }
    for (i = 0; i < SIZE; i++)
        printf("%3d  ", n[i]);
    printf("\n");
    for (i = 0; i < SIZE; i++)
        printf("%3d  ", i);
    printf("\n");
}
