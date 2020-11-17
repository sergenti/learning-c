#include <stdio.h>

int main(void)
{
    int todayDay = 17;
    int todayMonth = 10;
    int todayYear = 2020;
    int giorno;

    enum mesi
    {
        gennaio = 1,
        febbraio,
        marzo,
        aprile,
        maggio,
        giugno,
        luglio,
        agosto,
        settembre,
        ottobre,
        novembre,
        dicembre
    } mese;
    int anno;

    int etaGiorni = 0;
    int etaMesi = 0;

    printf("Inserisci la tua data di nascita: \n");
    printf("Giorno: ");
    scanf("%d", &giorno);
    printf("Mese: ");
    scanf("%d", &mese);
    printf("Anno: ");
    scanf("%d", &anno);

    for (int i = 1; i < todayMonth; i++)
    {
        switch (i)
        {
        case gennaio:
        case marzo:
        case maggio:
        case luglio:
        case agosto:
        case ottobre:
        case dicembre:
            etaGiorni += 31;
            break;
        case febbraio:
            if (((todayYear % 4 == 0) && (todayYear % 100 != 0)) || (todayYear % 400 == 0))
                etaGiorni += 29;
            else
                etaGiorni += 28;
            break;
        default:
            etaGiorni += 30;
            break;
        }
        etaMesi++;
    }

    for (; mese <= 12; mese++)
    {
        switch (mese)
        {
        case gennaio:
        case marzo:
        case maggio:
        case luglio:
        case agosto:
        case ottobre:
        case dicembre:
            etaGiorni += 31;
            break;
        case febbraio:
            if (((anno % 4 == 0) && (anno % 100 != 0)) || (anno % 400 == 0))
                etaGiorni += 29;
            else
                etaGiorni += 28;
            break;
        default:
            etaGiorni += 30;
            break;
        }
        etaMesi++;
    }
    for (; giorno < todayDay; giorno++)
        etaGiorni++;

    for (anno++; anno < todayYear; anno++)
    {
        if (((anno % 4 == 0) && (anno % 100 != 0)) || (anno % 400 == 0))
            etaGiorni += 366;
        else
            etaGiorni += 365;
        etaMesi += 12;
    }

    printf("Età in giorni: %d\n", etaGiorni);
    printf("Età in mesi: %d\n", etaMesi);

    return 0;
}
