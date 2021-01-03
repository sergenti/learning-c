// creating an infrastructure for working with fractions

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//TODO FIX

// Helper Functions
char getOperator(void);
void getFraction(int *num, int *denom);
void printFraction(int num, int denom);
void showCalculations(int n1, int d1, int n2, int d2, int nAns, int dAns, char operand);

// Mathematical calculations
int findGCD(int n1, int n2);
void reduceFraction(int *num, int *denom);
void addFractions(int n1, int d1, int n2, int d2, int *nAns, int *dAns);
void multiplyFractions(int n1, int d1, int n2, int d2, int *nAns, int *dAns);

int main()
{
    int n1, d1; // numerator and denominator of the first fraction
    int n2, d2; // numerator and denominator of the  second fraction

    char operand;   // type of operation
    char again;     // user can perform as many calculation as he wants
    int nAns, dAns; // answer in num & denom

    do
    {
        // Getting the data
        getFraction(&n1, &d1);
        operand = getOperator();
        getFraction(&n2, &d2);

        // Calculating
        switch (operand)
        {
        case '+':
            addFractions(n1, d1, n2, d2, &nAns, &dAns);
            break;
        case '-':
            addFractions(n1, d1, -n2, d2, &nAns, &dAns);
            break;
        case '*':
            multiplyFractions(n1, d1, n2, d2, &nAns, &dAns);
            break;
        case '/':
            multiplyFractions(n1, d1, d2, n2, &nAns, &dAns);
            break;
        }

        showCalculations(n1, d1, n2, d2, nAns, dAns, operand);

        printf("\n\033[1;36mDo another problem? (y/n) > \033[0m");
        scanf("%c", &again);
        printf("\n=====================================================\n");
    } while (again == ('Y' | 'y'));
}

char getOperator(void)
{
    char operand;

    printf("\n\033[1;36mEnter an arithmetic operand > \033[0m");

    for (scanf("%c", &operand);
         operand == ('+' | '-' | '*' | '/');
         scanf("%c", &operand))
    {
        if (operand != '\n')
            printf("\033[1;31m%c invalid, reenter operand", operand);
    }

    return operand;
}

void showCalculations(int n1, int d1, int n2, int d2, int nAns, int dAns, char operand)
{
    printf("\n");
    printFraction(n1, d1);
    printf(" %c ", operand);
    printFraction(n2, d2);
    printf(" = ");
    printFraction(nAns, dAns);
    printf("\n");
}

void addFractions(
    int n1, int d1,      // first fraction
    int n2, int d2,      // second fraction
    int *nAns, int *dAns // answer
)
{
    int denominator, numerator, sign;

    denominator = d1 * d2;
    numerator = n1 * d2 + n2 * d1;
    sign = (numerator * denominator >= 0) ? 1 : -1;

    *nAns = sign * abs(numerator);
    *dAns = abs(denominator);

    reduceFraction(nAns, dAns);
}

void multiplyFractions(
    int n1, int d1,      // first fraction
    int n2, int d2,      // second fraction
    int *nAns, int *dAns // answer
)
{
    int denominator, numerator, sign;

    denominator = d1 * d2;
    numerator = n1 * n2;
    sign = (numerator * denominator >= 0) ? 1 : -1;

    *nAns = sign * abs(numerator);
    *dAns = abs(denominator);

    reduceFraction(nAns, dAns);
}

int findGCD(int n1, int n2)
{
    int GCD;

    // Checks if i is factor of both integers
    for (int i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            GCD = i;
    }

    return GCD;
}

void reduceFraction(int *numerator, int *denominator)
{
    int GCD = findGCD(*numerator, *denominator);
    *numerator /= GCD;
    *denominator /= GCD;
}

void getFraction(int *numerator, int *denominator)
{
    char slash;
    int status;
    bool error;
    char discard;

    do
    {
        error = false;

        printf("\n\033[1;36mEnter a common fraction as 2 integer separated by a slash (a/b) > \033[0m");
        status = scanf("%d %c%d", numerator, &slash, denominator);

        if (status > 3)
        {
            error = true;
            printf("\033[1;31mInvalid, please read instructions\033[0m");
        }
        else if (slash != '/')
        {
            error = true;
            printf("\033[1;31mInvalid, separator must be a slash\033[0m");
        }
        else if (*denominator <= 0)
        {
            error = true;
            printf("\033[1;31mInvalid, denominator must be positive\033[0m");
        }

        do
        {
            scanf("%c", &discard);
        } while (discard != '\n');
    } while (error);
}

void printFraction(int numerator, int denominator)
{
    printf("%d/%d", numerator, denominator);
}