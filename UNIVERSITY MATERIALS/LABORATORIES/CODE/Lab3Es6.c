/*
 Scrivere un programma che, definita una matrice di 2 dimensioni, sia in
 grado di memorizzare gli appuntamenti di una settimana.
 Agenda[giorni][appuntamento][100]
 Definire i giorni della settimana attraverso enum. Gli appuntamenti sono
 stringhe di lunghezza massima 100 e non contengono l'orario.
 L'utente deve:
 • Poter inserire un nuovo appuntamento scegliendo il giorno
 • Stampare tutti gli appuntamenti divisi per giorno
 • Stampare gli appuntamenti di un singolo giorno
 Per stampare gli appuntamenti di un singolo giorno creare una funzione
 in modo che possa essere usata ai punti B e C.
 */
#include <stdio.h>
#include <string.h>

typedef enum
{
    lunedi,
    martedi,
    mercoledi,
    giovedi,
    venerdi,
    sabato,
    domenica
} giorni;
void stampaGiorno(char giorno[1000][100], int num);

int main()
{
    char agenda[7][1000][100];
    int numAppuntamenti[7];
    int r;
    int g;

    //Inizializzazione contatore appuntamenti giornalieri
    for (int i = 0; i < 7; i++)
        numAppuntamenti[i] = 0;

    do
    {
        printf("MENU\n\n1) Inserisci appuntamento\n2) Stampa Settimana\n3) Stampa giorno\n4) Esci\n\n>> ");
        scanf("%d", &r);

        switch (r)
        {
        case 1: //Inserisci appuntamento
            printf("Inserisci nuovo apputnamento\nGiorno: (1-lun, 2-mar. 3-mer, 4-gio, 5-ven, 6-sab, 7-dom):\n>> ");
            scanf("%d", &g);
            printf("Appuntamento:\n>> ");
            fflush(stdin); //Quando la lettura di caratteri o stringhe salta, questa riga risolve il problema. su mac, fflush(stdin) diventa fpurge(stdin); su repl.it diventa __fpurge(stdin);
            gets(agenda[g - 1][numAppuntamenti[g - 1]]);
            numAppuntamenti[g - 1]++;
            break;
        case 2: //Stampa Settimana
            for (giorni i = lunedi; i <= domenica; i++)
            {
                if (i == lunedi)
                    printf("Lunedi':\n");
                else if (i == martedi)
                    printf("Martedi':\n");
                else if (i == mercoledi)
                    printf("Mercoledi':\n");
                else if (i == giovedi)
                    printf("Giovedi':\n");
                else if (i == venerdi)
                    printf("Venerdi':\n");
                else if (i == sabato)
                    printf("Sabato:\n");
                else if (i == domenica)
                    printf("Domenica:'\n");

                stampaGiorno(agenda[(int)i], numAppuntamenti[(int)i]);
            }

            break;
        case 3: //Stampa giorno
            printf("Quale giorno stampare (1-lun, 2-mar. 3-mer, 4-gio, 5-ven, 6-sab, 7-dom):\n>> ");
            scanf("%d", &g);
            stampaGiorno(agenda[g - 1], numAppuntamenti[g - 1]);
            break;
        }

    } while (r != 4);
    return 0;
}

void stampaGiorno(char giorno[1000][100], int num)
{
    for (int j = 0; j < num; j++)
        printf("%s\n", giorno[j]);
    printf("\n");
}
