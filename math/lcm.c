// LCM using while and if

#include <stdio.h>
int v1()
{
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in min
    max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}

// LCM Calculation Using GCD

#include <stdio.h>
int v2()
{
    int n1, n2, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {

        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}

// Dunno

#include <stdio.h>
int mcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
int mcm(int a, int b)
{
    return (a * b) / mcd(a, b);
}
int main()
{
    int a, b;
    printf("Questo programma calcola il massimo comune divisore tra due interi\n");
    do
    {
        printf("Inserisci il primo numero\n");
        scanf("%d", &a);

        printf("inserisci il secondo \n");
        scanf("%d", &b);
        if (a != 0)
        {
            printf("il massimo comun divisore e' %d\n", mcd(a, b));
            printf("mentre il minimo comune multiplo e' %d\n", mcm(a, b));
        }
    } while (a != 0);
    return 0;
}