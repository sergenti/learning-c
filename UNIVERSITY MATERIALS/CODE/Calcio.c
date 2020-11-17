#include <stdio.h>
#include <stdlib.h>

/* Array contenente i dati di calciatori
 1. totale goal fatti dalla squadra
 2. totale goal fatti da att
 3. totale goal fatti da dif
 4. totale goal fatti da cent
 5. totale goal subiti
 6. calcola chi ha fatto più goal
 
 Tutte funzioni
 */

#define MAX 30

typedef enum
{
    nessuno = -1,
    portiere,
    difensore,
    centrocampista,
    attaccante
} TipoRuolo;

typedef struct Giocatore
{
    int numero;
    int goal;
    TipoRuolo ruolo;
    char nomeGiocatore[MAX];
} Giocatore;

int inserisciGiocatore(Giocatore g[], int i); //i = lunghezza attuale, return nuova lunghezza
void contaGoal(Giocatore g[], int i, int *goalFatti, int *goalSubiti, int *goalAtt, int *goalCent, int *goalDif);
int contaGoal2(Giocatore g[], int i, int *goalSubiti, int *goalAtt, int *goalCent, int *goalDif);
Giocatore trovaMigliorGiocatore(Giocatore g[], int i);
void stampaSquadra(Giocatore g[], int i);

int main(int argc, const char *argv[])
{
    Giocatore giocatori[MAX];
    int numGiocatori = 0;
    //int totaleGoalFatti = 0;
    int totaleGoalSubiti = 0;
    int goalAttaccanti = 0;
    int goalCentrocampisti = 0;
    int goalDifensori = 0;

    Giocatore bestPlayer;

    int r;

    do
    {
        printf("Menu\n");
        printf("1) Inserisci giocatore\n");
        printf("2) Calcola goal\n");
        printf("3) Trova miglior giocatore\n");
        printf("4) Stampa array\n");
        printf("5) ESCI\n\n>> ");
        scanf("%d", &r);

        switch (r)
        {
        case 1:
            numGiocatori = inserisciGiocatore(giocatori, numGiocatori);
            break;
        case 2:
            //contaGoal(giocatori, numGiocatori, &totaleGoalFatti, &totaleGoalSubiti, &goalAttaccanti, &goalCentrocampisti, &goalDifensori);
            printf("Goal fatti %d\n", contaGoal2(giocatori, numGiocatori, &totaleGoalSubiti, &goalAttaccanti, &goalCentrocampisti, &goalDifensori));
            printf("Goal subiti: %d\nGoal Att: %d\nGoal cent: %d\nGoal Dif: %d\n", totaleGoalSubiti, goalAttaccanti, goalCentrocampisti, goalDifensori);
            break;
        case 3:
            bestPlayer = trovaMigliorGiocatore(&giocatori[0], numGiocatori);
            stampaSquadra(&bestPlayer, 1);
            break;
        case 4:
            stampaSquadra(giocatori, numGiocatori);
            break;
        case 5:
            printf("Arrivederci\n");
            break;
        default:
            printf("Opzione non supportata\n");
            break;
        }
    } while (r != 5);

    return 0;
}

int inserisciGiocatore(Giocatore g[], int i)
{ //i = lunghezza attuale, return nuova lunghezza
    printf("Inserisci numero: ");
    scanf("%d", &(g[i].numero));

    printf("Inserisci goal: ");
    scanf("%d", &g[i].goal);

    printf("Inserisci ruolo (portiere %d, difensore %d centrocampista %d attaccante %d): ", portiere, difensore, centrocampista, attaccante);
    //do{
    scanf("%d", &g[i].ruolo);
    //}while()
    printf("Inserisci nome: ");
    scanf("%s", g[i].nomeGiocatore);

    return i + 1;
}

void contaGoal(Giocatore g[], int i, int *goalFatti, int *goalSubiti, int *goalAtt, int *goalCent, int *goalDif)
{
    int k;
    *goalFatti = 0;
    *goalSubiti = 0;
    *goalAtt = 0;
    *goalCent = 0;
    *goalDif = 0;

    for (k = 0; k < i; k++)
    {
        switch (g[k].ruolo)
        {
        case portiere:
            //goal subiti
            *goalSubiti = *goalSubiti + g[k].goal;
            break;
        case difensore:
            *goalDif = *goalDif + g[k].goal;
            break;
        case centrocampista:
            *goalCent = *goalCent + g[k].goal;
            break;
        case attaccante:
            *goalAtt = *goalAtt + g[k].goal;
            break;
        default:
            break;
        }
    }
    *goalFatti = *goalDif + *goalCent + *goalAtt;
}

int contaGoal2(Giocatore g[], int i, int *goalSubiti, int *goalAtt, int *goalCent, int *goalDif)
{
    Giocatore *k;
    int cont;

    *goalSubiti = 0;
    *goalAtt = 0;
    *goalCent = 0;
    *goalDif = 0;
    k = g;

    for (cont = 0; cont < i; cont++, k++)
    {
        switch (k->ruolo)
        {
        case portiere:
            //goal subiti
            *goalSubiti = *goalSubiti + k->goal;
            break;
        case difensore:
            *goalDif = *goalDif + k->goal;
            break;
        case centrocampista:
            *goalCent = *goalCent + k->goal;
            break;
        case attaccante:
            *goalAtt = *goalAtt + k->goal;
            break;
        default:
            break;
        }
    }
    return *goalDif + *goalCent + *goalAtt;
}

Giocatore trovaMigliorGiocatore(Giocatore g[], int i)
{
    Giocatore best;
    best.goal = 0;
    best.numero = 0;
    best.ruolo = nessuno;
    //  strcpy(best.nomeGiocatore,"");

    int k;
    for (k = 0; k < i; k++)
    {
        if ((g[k].ruolo != portiere) && (g[k].goal > best.goal))
        {
            best = g[k];

            /*best.goal = g[k].goal;
            best.numero = g[k].numero;
            best.ruolo = g[k].ruolo;
            strcpy(best.nomeGiocatore,g[k].nomeGiocatore);
             */
        }
    }
    return best;
}

void stampaSquadra(Giocatore g[], int i)
{
    int j;
    for (j = 0; j < i; j++)
    {
        printf("Nome: %s Numero: %d, Goal: %d, Ruolo: ", g[j].nomeGiocatore, g[j].numero, g[j].goal);
        switch (g[j].ruolo)
        {
        case portiere:
            printf("Portiere\n");
            break;
        case difensore:
            printf("Difensore\n");
            break;
        case centrocampista:
            printf("Centrocampista\n");
            break;
        case attaccante:
            printf("Attaccante\n");
            break;
        default:
            break;
        }
    }
}
