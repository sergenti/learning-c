#include <stdio.h>

#define SENTINEL 0

int FOR()
{

    int score;
    int sum = 0;

    for (
        scanf("%d", &score);
        score != SENTINEL;
        scanf("%d", &score))
    {
        sum += score;
        printf("Enter next score (or '%d' to quit)", SENTINEL);
    }
}

int WHILE()
{

    int score;
    int sum = 0;

    scanf("%d", &score);
    while (score != SENTINEL)
    {
        sum += score;
        printf("Enter next score (or '%d' to quit)", SENTINEL);
        scanf("%d", &score);
    }
}