#include <stdio.h>
#include <math.h>

/******************************************************************************

                            C Calculator
                     Filippo Sergenti 17/09/2020
I was bored to death and I tried to do something as useless as the language
my university (POLIMI Politecnico of Milan) requires me to learn.

                            (pls help me)

*******************************************************************************/

// V3: using pointers

void get_input(int *a, int *b)
{
    int A, B;

    printf("\nEnter the value of the FIRST number > ");
    scanf("%d", &A);

    printf("Enter the value of the SECOND number > ");
    scanf("%1d", &B);

    *a = A;
    *b = B;

    return;
}

int main()
{
    printf("< Choose the operator you desire: >\n\n1)   +\n2)   -\n3)   x\n4)   ÷\n\n>    ");

    int operator;
    scanf("%d", &operator);

    int a, b;
    a = 0;
    b = 0;

    if (operator== 1)
    {
        // SUM
        printf("\n< You've chosen SUM >\n");
        get_input(&a, &b);
        int c = a + b;
        printf("\n< %d + %d = %d >\n\n", a, b, c);
        system("pause");
        return 0;
    }
    if (operator== 2)
    {
        // DIFFERENCE
        printf("\n< You've chosen DIFFERENCE >\n");
        get_input(&a, &b);
        int c = a - b;
        printf("\n< %d - %d = %d >\n\n", a, b, c);
        system("pause");
        return 0;
    }
    if (operator== 3)
    {
        // MULTIPLICATION
        printf("\n< You've chosen MULTIPLICATION >\n");
        get_input(&a, &b);
        int c = a * b;
        printf("\n< %d x %d = %d >\n\n", a, b, c);
        system("pause");
        return 0;
    }
    if (operator== 4)
    {
        // DIVISION
        printf("\n< You've chosen DIVISION >\n");
        get_input(&a, &b);
        int c = a / b;
        printf("\n< %d ÷ %d = %d >\n\n", a, b, c);
        system("pause");
        return 0;
    }
    if (operator== - 5)
    {
        printf("i byte non sono sufficienti\n");
        return 0;
    }
    else
    {
        printf("ERROR, input should be between 1 and 4\n");
        return 0;
    }

    system("pause");
    return 0;
}
