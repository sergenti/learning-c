#include <stdio.h>

#define LIMITE 4000000

int ese7()
{
    int a0 = 0;
    int a1 = 1;
    int temp;

    printf("Inserire il primo termine: ");
    scanf("%d", &a0);
    printf("Inserire il secondo termine: ");
    scanf("%d", &a1);

    int pari = 0;

    while (a1 <= LIMITE)
    {
        if (a1 % 2 == 0)
            pari += a1;

        temp = a1;
        a1 = a1 + a0;
        a0 = temp;
    }

    printf("Il risultato è %d.\n", pari);

    return 0;
}
