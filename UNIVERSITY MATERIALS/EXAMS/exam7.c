// Si vuole creare un programma per la gestione della tombola. La tombola e caratterizzata attraverso una `
// struttura dati DINAMICA contenente i numeri estratti. Ogni numero estratto e caratterizzato dal numero `
// stesso e da un vettore di 5 elementi contenete le vincite per ”ambo”, ”terno”, ”quaterna”, ”cinquina”,
// ”tombola”).
// Es. vettore = 1 0 2 1 0 Significa che con quel numero sono stati vinti: 1 ambo, 0 terni, 2 quaterne, 1
// cinquina e 0 tombole.
// Le cartelle della tombola sono composte da una matrice 5x3 di numeri interi.
// Tramite un’altra struttura dati, ad ogni numero della tombola (da 1 a 90) e associato una descrizione `
// estratta dalla smorfia napoletana.
// 1. Definire le strutture dati necessari per la realizzazione del programma. (1 punto)
// 2. Scrivere una funzione RICORSIVA che calcoli quante vincite sono state fatte fino ad ora (2 punti)
// 3. Scrivere una funzione per l’inserimento in coda di un nuovo numero estratto. Il numero estratto deve
// essere casuale da 1 a 90 ma non ancora estratto. La funzione restituisce 0 se e stato possibile estrarre `
// il numero, 1 altrimenti (sono gia stati estratti 90 numeri). La funzione deve inoltre restituire il significato `
// della smorfia relativo all’ultimo numero estratto. (4 punti)
// 4. Scrivere una funzione che presa in ingresso la lista di numeri estratti e una cartella della tombola,
// aggiorni l’ultimo elemento della lista con le eventuali vincite sulla cartella (si consideri solamente la
// vittoria piu importante). (5 punti) `
// Risposta:

#include <stdlib.h>

typedef struct node
{
    int numero;
    int vincite[5];
    struct nodo *next;
} node;

typedef node *ptrNode;

char smorfia[90][100];
int cartella[3][5];

ptrNode tombola;

int contaVittorie(ptrNode lista)
{
    if (lista == NULL)
        return 0;
    int i, val = 0;
    for (i = 0; i < 5; i++)
        val += lista->vincite[i];
    return val + contaVittorie(lista->next);
}
ptrNode inserisciInCoda(ptrNode lista, char smorfia[][100], char stringa[100], int *ris)
{
    int numero;
    int trovato;
    ptrNode testa = lista;

    ptrNode temp;
    int i = 0;
    do
    {
        i++;
        trovato = 0;
        lista = testa;
        numero = rand() % 90 + 1;
        while ((lista != NULL) && (trovato == 0))
        {
            if (lista->numero == numero)
                trovato = 1;
        }
    } while ((trovato == 1) && (i < 90));
    if (i >= 90)
    {
        *ris = 1;
        return testa;
    }
    lista = testa;
    strcpy(stringa, smorfia[numero]);
    temp = (ptrNode)malloc(sizeof(node));
    temp->numero = numero;
    temp->next = NULL;
    *ris = 0;
    if (lista == NULL)
        return temp;
    else
    {
        while (lista->next != NULL)
            lista = lista->next;
        lista->next = temp;
        return testa;
    }
}
void aggiornaTombola(ptrNode tombola, int cartella[3][5])
{
    int i, j;
    int num = 0;
    int max = 0;
    int cont[3];
    for (j = 0; j < 3; j++)
        cont[j] = 0;
    if (tombola == NULL)
        return;
    while (tombola->next != NULL)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (tombola->numero == cartella[i][j])
                {
                    cont[i]++;
                    break;
                }
            }
        }
        tombola = tombola->next;
    }
    if (cont[0] + cont[1] + cont[2] == 15)
        tombola->vincite[4]++;
    else
    {
        if ((cont[0] > cont[1]) && (cont[0] > cont[2]))
            max = cont[0];
        else if ((cont[1] > cont[0]) && (cont[1] > cont[2]))
            max = cont[1];
        else
            max = cont[2];
        if (max >= 2)
        {
            tombola->vincite[max - 2]++;
        }
    }
}