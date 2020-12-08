#include <stdio.h>

// Filled

int main()
{
    int l, h;
    printf("length: ");
    scanf("%d", &l);
    printf("height: ");
    scanf("%d", &h);

    for (int i = 0; i < h; i++)
    {
        printf("\n");

        for (int j = 0; j < l; j++)
            printf("*");
    }
}

// Empty

void drawBase(int l)
{
    for (int i = 0; i < l; i++)
        printf("*");
}

int main()
{
    int l, h;
    printf("length: ");
    scanf("%d", &l);
    printf("height: ");
    scanf("%d", &h);

    // base
    drawBase(l);
    printf("\n");

    // height empty
    for (int k = 0; k < h - 2; k++)
    {
        printf("*");
        for (int j = 2; j < l; j++)
            printf(" ");
        printf("*");
        printf("\n");
    }

    // base
    drawBase(l);
}