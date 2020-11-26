// pag 322 n1

#include <stdio.h>

void distributore(int importo, int *dieci, int *venti, int *cinquanta);

int main()
{
    // Input
    int importo = -1;

    // Output
    int a = 0;
    int b = 0;
    int c = 0;

    while ((importo % 10) != 0)
    {
        printf("quanto volete ritirare (necessariamente multiplo di 10) ");
        scanf("%d", &importo);
        printf("\n");
    }

    distributore(importo, &a, &b, &c);
    printf("stiamo erogando il tuo importo di %d€, è composto dalle seguenti banconote:\n %d 10€,\n %d 20€,\n %d 50€", importo, a, b, c);
}

void distributore(int importo, int *dieci, int *venti, int *cinquanta)
{

    *cinquanta = importo / 50;
    int resto = importo % 50;

    switch (resto)
    { // Casi base
    case 10:
        *dieci = 1;
        break;
    case 20:
        *venti = 1;
        break;
    case 30:
        *dieci = 1;
        *venti = 1;
        break;
    case 40:
        *venti = 2;
        break;
    }
}