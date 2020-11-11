//calcolare indice di massa corporea

//dati di ingresso:
//wt_kg peso in chilogrammi
//ht_m altezza in metri

//farsi dare istruzioni dall'utente 1
//inserire dati forniti dall'utente 2
//calcolare IBM                     3
//collocare il valore nel range di appartenenza 4
//stampare il valore di IBM e il range di appartenenza 5

#include <stdio.h>

int main(void)
{
    double peso, altezza;
    double BMI;
    char categoria_di_peso; // S, N, V, O

    //passo 1

    printf("Questo programma permette di calcolare l'indice di massa corporea.\n");
    printf("Per farlo, dovrai inserire due valori:\n");
    printf("peso in chilogrammi e altezza in metri.\n");

    //passo 2

    printf("Inserisci il tuo peso: ");
    scanf("%lf", &peso);

    printf("Inserisci la tua altezza: ");
    scanf("%lf", &altezza);

    //passo 3

    BMI = peso / (altezza * altezza);

    //passo 4

    if (BMI < 18.5)
        categoria_di_peso = 'S';

    else if (BMI >= 18.5 && BMI < 25)
        categoria_di_peso = 'N';

    else if (BMI >= 25 && BMI < 30)
        categoria_di_peso = 'V';

    else
        categoria_di_peso = 'O';

    //passo 5
    printf("\n\nIl valore di BMI � %f: \n", BMI);

    switch (categoria_di_peso)
    {
    case 'S':
        printf("Sei sottopeso!\n");
        break;
    case 'N':
        printf("Sei normopeso!\n");
        break;
    case 'V':
        printf("Sei sovrappeso!\n");
        break;
    case 'O':
        printf("Sei obeso!\n");
        break;
    }

    return (0);
}
