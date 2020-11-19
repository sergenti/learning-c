#include <stdio.h>

#define LIMITE 4000000

int ese7()
{
    int a = 0;
    int b = 1;
    int temp;

    printf("Inserire il primo termine: ");
    scanf("%d", &a);

    printf("Inserire il secondo termine: ");
    scanf("%d", &b);

    int pari = 0;

    while (b <= LIMITE)
    {
        if (b % 2 == 0)
            pari += b;

        temp = b;
        b = b + a;
        a = temp;
    }

    printf("Il risultato è %d.\n", pari);

    return 0;
}
