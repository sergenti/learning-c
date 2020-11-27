/*

Si vuole progettare un software che permette di registrare trasazioni di criptovalute. Ogni record del database costituisce una coin della criptovaluta ed costituito da un identificativo univoco di 10 cifre , il valore in euro al quale stato acquistato, il valore in euro al quale stato venduto, il nome del servizio utilizzato per lo scambio. Ogni coin ha un solo proprietario che identificato da nome, cognome, identificativo del blocco posseduto e anno di acquisto. Sia i coin che i proprietari sono definiti per mezzo di una lista.\\

Svolgere l’esercizio attenendosi a quanto richiesto. NON RICHIESTO SCRIVERE IL MAIN.\\

1. Definire le strutture dati necessari per la realizzazione del programma. (1 punto)\\
2. Scrivere la funzione per inserire un nuovo coin. L’id calcolato in automatico partendo da 0 e aggiungendo 1 ad ogni nuovo nodo. (2 punti)\\
3. Scrivere la funzione che preso in ingresso un identificativo, restituisca la differenza tra prezzo di vendita e prezzo d’acquisto. Restituisce 0 se l’identificativo non esiste o la lista vuota. (3 punti)\\
4. Scrivere la funzione che, preso in ingresso nome e cognome del proprietario, permette di calcolare il guadagno/perdita facendo la differenza tra prezzo d’acquisto e prezzo di vendita di tutti i coin posseduti. Usare la funzione al punto precedente (3 punti)\\
5. Scrivere la funzione che preso in ingresso un anno, salva e restituisce un array (lughezza massima 100) con i valori di vendita di tutte i blocchi che sono stati scambiati per mezzo della piattaforma "coinbase", e la loro media. (3 punti)\\

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct coin
{
    int id;
    float acquisto;
    float venduto;
    char nomeServizio[20];
    struct coin *next;
} coin;

typedef coin *p_coin;

typedef struct proprietari
{
    char nome[20];
    char cognome[20];
    int id;
    int anno;
    struct proprietari *next;
} proprietari;

typedef proprietari *p_proprietari;

p_coin inserisciNodo(p_coin lista, p_proprietari *prop, float acq, float ven, char nomeServizio[], char nome[20], char cognome[20], int anno);
float guadagnoSuVendita(p_coin lista, int id);
float guadagnoTotale(p_coin listaCoin, p_proprietari listaProp, char nome[], char cognome[]);
float creaArray(p_coin listaCoin, p_proprietari listaProp, int anno, float array[], int *);
void stampaListe(p_coin coins, p_proprietari props);

int main(int argc, const char *argv[])
{
    int c;
    float acq, ven;
    char nome[20], cognome[20], nomeServizio[20];
    int id, anno;
    float gain, media;
    float arrayVen[100];
    int k;
    p_coin coins = NULL;
    p_proprietari proprietari = NULL;

    do
    {
        printf("\n\nMENU\n");
        printf("1) Inserisci nuova coin\n");
        printf("2) Calcola guadagno per ID coin\n");
        printf("3) Calcola guadagno per nome e cognome\n");
        printf("4) Crea array coinbase\n");
        printf("5) Stampa liste\n");
        printf("6) ESCI\n\n");
        printf(">> ");
        scanf("%d", &c);

        switch (c)
        {

        case 1:
            printf("Prezzo acquisto: ");
            scanf("%f", &acq);
            printf("Prezzo vendita: ");
            scanf("%f", &ven);
            printf("Nome servizio: ");
            scanf("%s", nomeServizio);
            printf("Nome proprietario: ");
            scanf("%s", nome);
            printf("Cognome proprietario: ");
            scanf("%s", cognome);
            printf("Anno: ");
            scanf("%d", &anno);

            coins = inserisciNodo(coins, &proprietari, acq, ven, nomeServizio, nome, cognome, anno);
            break;

        case 2:
            printf("ID: ");
            scanf("%d", &id);
            gain = guadagnoSuVendita(coins, id);
            printf("Il guadagno su %d %.2f\n", id, gain);
            break;

        case 3:
            printf("Nome: ");
            scanf("%s", nome);
            printf("Cognome: ");
            scanf("%s", cognome);
            printf("Il guadagno totale dell’utente %s %s : %.f", nome, cognome, guadagnoTotale(coins, proprietari, nome, cognome));
            break;

        case 4:
            printf("Anno: ");
            scanf("%d", &anno);
            media = creaArray(coins, proprietari, anno, arrayVen, &k);
            printf("Media %.2f\n\n", media);
            for (int i = 0; i < k; i++)
                printf("%d: %.2f\n", i, arrayVen[i]);
            break;

        case 5:
            stampaListe(coins, proprietari);
            break;

        default:
            break;
        }

    } while (c != 6);

    return 0;
}

p_coin inserisciNodo(p_coin lista, p_proprietari *prop, float acq, float ven, char nomeServizio[], char nome[20], char cognome[20], int anno)
{
    p_coin temp;
    p_proprietari tempProp;
    temp = (p_coin)malloc(sizeof(coin));
    temp->acquisto = acq;
    temp->venduto = ven;
    strcpy(temp->nomeServizio, nomeServizio);

    if (lista == NULL)
        temp->id = 0;
    else
        temp->id = lista->id + 1;

    temp->next = lista;
    lista = temp;
    tempProp = (p_proprietari)malloc(sizeof(proprietari));
    strcpy(tempProp->nome, nome);
    strcpy(tempProp->cognome, cognome);
    tempProp->id = lista->id;
    tempProp->anno = anno;
    if (*prop == NULL)
        tempProp->next = NULL;
    else
        tempProp->next = *prop;
    *prop = tempProp;

    return lista;
}

float guadagnoSuVendita(p_coin lista, int id)
{
    if (lista == NULL)
        return 0;
    else
    {
        if (lista->id == id)
            return (lista->venduto - lista->acquisto);
        else
            return guadagnoSuVendita(lista->next, id);
    }
}

float guadagnoTotale(p_coin listaCoin, p_proprietari listaProp, char nome[], char cognome[])
{
    if (listaProp == NULL)
        return 0;
    else
    {
        if ((strcmp(listaProp->nome, nome) == 0) && (strcmp(listaProp->cognome, cognome) == 0)) //NOME E COGNOME TROVATO
            return guadagnoSuVendita(listaCoin, listaProp->id) + guadagnoTotale(listaCoin, listaProp->next, nome, cognome);
        else
            return guadagnoTotale(listaCoin, listaProp->next, nome, cognome);
    }
}

float creaArray(p_coin listaCoin, p_proprietari listaProp, int anno, float array[], int *k)
{
    p_coin testaCoin = listaCoin;
    float med = 0;
    int i = 0;
    if (listaProp == NULL)
        return 0;
    else
    {
        while (listaProp != NULL)
        {
            if (listaProp->anno == anno)
            {
                listaCoin = testaCoin;
                while (listaCoin != NULL)
                {
                    if ((listaCoin->id == listaProp->id) && (strcmp(listaCoin->nomeServizio, "coinbase") == 0))
                    {
                        array[i] = listaCoin->venduto;
                        med = med + array[i];
                        i++;
                        break;
                    }
                    else
                        listaCoin = listaCoin->next;
                }
            }
            listaProp = listaProp->next;
        }
    }
    *k = i;
    med = med / i;
    return med;
}

void stampaListe(p_coin coins, p_proprietari props)
{
    if (coins != NULL)
    {
        printf("ID: %d\tAcquisto: %.2f\tVendita: %.2f\tServizio: %s\n", coins->id, coins->acquisto, coins->venduto, coins->nomeServizio);
        stampaListe(coins->next, props);
    }
    else
    {
        if (props != NULL)
        {
            printf("ID: %d\tNome: %s\tCognome: %s\tAnno: %d\n", props->id, props->nome, props->cognome, props->anno);
            stampaListe(coins, props->next);
        }
    }
}