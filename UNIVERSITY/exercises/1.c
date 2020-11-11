#include <stdio.h>
// presi due interi, calcolare l'MCD
int main()
{

    int a, b;

    printf("Inserire numero: ");
    scanf("%d", &a);

    printf("Inserire numero: ");
    scanf("%d", &b);

    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;

    printf("%d\n", a);
    return 0;
}