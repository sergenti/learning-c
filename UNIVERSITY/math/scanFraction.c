#include <stdio.h>

void scanFraction(int *num, int *denom)
{
    char slash;

    int status;
    int error;
    char discard;

    do
    {
        error = 0;

        printf("enter a common fraction as two integer separated by a slash");
        printf("example: 2/3 ");
        printf("> ");

        status = scanf("%d %c%d", num, &slash, denom);

        //convalida frazione

        if (status < 3)
        {
            error = 1;
            printf("Invalid please read directions carefully\n");
        }
        else if (slash != '/')
        {
            error = 1;
            printf("Invalid-separate numerator and denominator by a slash ( / )\n");
        }
        else if (denom <= 0)
        {
            error = 1;
            printf("invalid - denominator must be positive");
        }

        do
        {
            scanf("%c", &discard);

        } while (discard != '\n');

    } while (error);
}

int main()
{
    int num;
    int denom;

    scanFraction(&num, &denom);
    return (0);
}