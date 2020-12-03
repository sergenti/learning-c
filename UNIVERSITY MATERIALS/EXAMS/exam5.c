// Esercizio 5 - Programmazione C Liste (10 punti)
// Si vuole creare un programma per la gestione di software. Tutte i software disponibili sono contenuti in
// una lista. Ogni nodo della lista corrisponde ad un software ed ha come attributi:
// • nome software
// • versione
// • software house
// • prezzo
// es.
// • nome software: Winzoz9
// • versione: 5
// • software house: Microfrost
// • prezzo: 10
// 1. Definire la struttura dati necessaria per la realizzazione del programma. (1 punto)
// 2. Scrivere la funzione RICORSIVA che ricerca un software all’interno della lista. La funzione riceve in
// ingresso il nome del software e la versione e:
// • Se il nome del software non e presente nella lista dei software, la funzione restituisce -1; `
// • Se il nome del software e presente, ma non lo ` e la versione, restituisce -2. `
// • Se software e versione sono presenti, restituisce 0 e il node contente il software.
// (3 punti)
// 3. Utilizzando la funzione precedente, scrivere una funzione che presi in ingresso la lista completa
// dei software e due array contenenti nome software e versione (lunghezza massima dell’array 10 - alla
// funzione va passata la lunghezza dell’array), crea una nuova lista con i software elencati nell’array. (3
// punti)
// 4. Scrivere una funzione RICORSIVA che presi in ingresso la lista e il nome di un software, ritorni
// quante versioni del software sono state rilasciate.
// Svolgere l’esercizio attenendosi a quanto richiesto. NON E RICHIESTO SCRIVERE IL MAIN. `
// Risposta:

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Punto 1 ---------------------
typedef struct nodo
{
    char nomeSoftware[20];
    int versione;
    char softwareHouse[20];
    int prezzo;
    struct nodo *next;
} nodo;
typedef nodo *ptrNode;
//-----------------------------
void stampaLista(ptrNode lista)
{
    if (lista == NULL)
        return;
    printf("Nome software: %s\nVersione;: %d\nSoftware house: %s\nPrezzo: %d\n\n",
           lista->nomeSoftware, lista->versione, lista->softwareHouse, lista->prezzo);
    stampaLista(lista->next);
}
ptrNode inserisci(ptrNode lista, char nomeSoftware[20], int versione, char softwareHouse[20],
                  int prezzo)
{
    ptrNode nuovo;
    nuovo = (ptrNode)malloc(sizeof(nodo));
    strcpy(nuovo->nomeSoftware, nomeSoftware);
    nuovo->versione = versione;
    strcpy(nuovo->softwareHouse, softwareHouse);
    nuovo->prezzo = prezzo;
    nuovo->next = lista;
    return nuovo;
}
//Punto 2: restituisce un nodo nuovo, contenente i dati del softwre ricercato.
//La malloc viene fatta nel main.
int ricerca(ptrNode lista, ptrNode nodoTrovato, int nome, char nomeSoftware[20], int versione)
{
    if (lista == NULL)
    {
        nodoTrovato = NULL;
        if (nome == 0)
            return -1;
        else
            return -2;
    }
    if (strcmp(lista->nomeSoftware, nomeSoftware) == 0) //trovato nome almeno una volta
    {
        if (lista->versione == versione) //trovato software corretto
        {
            strcpy(nodoTrovato->nomeSoftware, lista->nomeSoftware);
            nodoTrovato->versione = lista->versione;
            strcpy(nodoTrovato->softwareHouse, lista->softwareHouse);
            nodoTrovato->prezzo = lista->prezzo;
            nodoTrovato->next = NULL;
            return 0;
        }
        else
            return ricerca(lista->next, nodoTrovato, 1, nomeSoftware, versione);
    }
    else
        return ricerca(lista->next, nodoTrovato, 0, nomeSoftware, versione);
}
//Punto 2: restituisce il puntatore al software ricercato. Non pu essere usato direttametne per
//creare la nuova lista, altrimenti si modificherbbe anche la lista di partenza.
int ricerca2(ptrNode lista, ptrNode *nodoTrovato, int nome, char nomeSoftware[20], int versione)
{
    if (lista == NULL)
    {
        *nodoTrovato = NULL;
        if (nome == 0)
            return -1;
        else
            return -2;
    }
    if (strcmp(lista->nomeSoftware, nomeSoftware) == 0) //trovato nome almeno una volta
    {
        if (lista->versione == versione) //trovato software corretto
        {
            *nodoTrovato = lista;
            return 0;
        }
        else
            return ricerca2(lista->next, nodoTrovato, 1, nomeSoftware, versione);
    }
    else
        return ricerca2(lista->next, nodoTrovato, 0, nomeSoftware, versione);
}
//Punto 3, con funzione che restituisce un nuovo nodo, contente i dati del software trovato
ptrNode creaLista(ptrNode listaSoftware, char arrayNomi[10][20], int arrayVersioni[10], int len)
{
    int i = 0;
    ptrNode trovato;
    ptrNode lista = NULL;
    if (listaSoftware == NULL)
        return NULL;
    for (i = 0; i < len; i++)
    {
        trovato = (ptrNode)malloc(sizeof(nodo));
        if (ricerca(listaSoftware, trovato, 0, arrayNomi[i], arrayVersioni[i]) == 0)
        {
            trovato->next = lista;
            lista = trovato;
        }
    }
    return lista;
}
//Punto 3, con funzione che restituisce il puntatore al software trovato.
ptrNode creaLista2(ptrNode listaSoftware, char arrayNomi[10][20], int arrayVersioni[10], int len)
{
    int i = 0;
    ptrNode trovato = NULL;
    ptrNode lista = NULL;
    ptrNode temp = NULL;
    if (listaSoftware == NULL)
        return NULL;
    for (i = 0; i < len; i++)
    {
        if (ricerca2(listaSoftware, &trovato, 0, arrayNomi[i], arrayVersioni[i]) == 0)
        {
            temp = (ptrNode)malloc(sizeof(nodo));
            strcpy(temp->nomeSoftware, trovato->nomeSoftware);
            temp->versione = trovato->versione;
            temp->prezzo = trovato->prezzo;
            strcpy(temp->softwareHouse, trovato->softwareHouse);
            temp->next = lista;
            lista = temp;
        }
    }
    return lista;
}
int contaVersioni(ptrNode listaSoftware, char nomeSoftware[20])
{
    if (listaSoftware == NULL)
        return 0;
    else
    {
        if (strcmp(listaSoftware->nomeSoftware, nomeSoftware) == 0)
            return 1 + contaVersioni(listaSoftware->next, nomeSoftware);
        else
            return contaVersioni(listaSoftware->next, nomeSoftware);
    }
}
int main(int argc, const char *argv[])
{
    ptrNode listaSoftware = NULL;
    ptrNode mysoftware = NULL;
    ptrNode trovato;
    char nomeSoftware[20];
    int versione;
    char softwares[10][20];
    int versions[10];
    strcpy(softwares[0], "winzoz9");
    strcpy(softwares[1], "winzoz9");
    strcpy(softwares[2], "winzoz9");
    strcpy(softwares[3], "winzoz9");
    versions[0] = 3;
    versions[1] = 1;
    versions[2] = 5;
    versions[3] = 11;
    int r;
    int k;
    listaSoftware = inserisci(listaSoftware, "winzoz9", 3, "Microfrost", 15);
    listaSoftware = inserisci(listaSoftware, "winzoz9", 2, "Microfrost", 10);
    listaSoftware = inserisci(listaSoftware, "winzoz9", 1, "Microfrost", 10);
    listaSoftware = inserisci(listaSoftware, "winzoz9", 4, "Microfrost", 10);
    listaSoftware = inserisci(listaSoftware, "maxos", 12, "Pineapple", 10);
    listaSoftware = inserisci(listaSoftware, "winzoz9", 5, "Microfrost", 100);
    listaSoftware = inserisci(listaSoftware, "maxos", 10, "Pineapple", 0);
    listaSoftware = inserisci(listaSoftware, "maxos", 5, "Pineapple", 100);
    stampaLista(listaSoftware);
    do
    {
        printf("MENU\n");
        printf("1) Ricerca\n");
        printf("2) Ricerca con puntatore\n");
        printf("3) Crea nuova lista\n");
        printf("4) Conta versioni\n");
        printf("5) ESCI\n\n>> \n");
        scanf("%d", &r);
        switch (r)
        {
        case 1:
            //RICERCA
            printf("Nome software: ");
            scanf("%s", nomeSoftware);
            printf("Versione: ");
            scanf("%d", &versione);
            trovato = (ptrNode)malloc(sizeof(nodo));
            k = ricerca(listaSoftware, trovato, 0, nomeSoftware, versione);
            if (k == 0)
            {
                printf("Software trovato\n\n");
                printf("Nome software: %s\nVersione;: %d\nSoftware house: %s\nPrezzo: %d\n\n",
                       trovato->nomeSoftware, trovato->versione, trovato->softwareHouse, trovato->prezzo);
            }
            else if (k == -1)
                printf("Software non nella lista\n\n");
            else
                printf("Esiste un’altra versione del software ma non quella ricercata\n\n");
            break;
        case 2:
            printf("Nome software: ");
            scanf("%s", nomeSoftware);
            printf("Versione: ");
            scanf("%d", &versione);
            k = ricerca2(listaSoftware, &trovato, 0, nomeSoftware, versione);
            if (k == 0)
            {
                printf("Software trovato\n\n");
                printf("Nome software: %s\nVersione: %d\nSoftware house: %s\nPrezzo: %d\n\n",
                       trovato->nomeSoftware, trovato->versione, trovato->softwareHouse, trovato->prezzo);
            }
            else if (k == -1)
                printf("Software non nella lista\n\n");
            else
                printf("Esiste un’altra versione del software ma non quella ricercata\n\n");
            break;
        case 3:
            //CREA LISTA
            mysoftware = creaLista(listaSoftware, softwares, versions, 4);
            //mysoftware = creaLista2(listaSoftware, softwares, versions, 4);
            stampaLista(mysoftware);
            break;
        case 4:
            //CONTA VERSIONI
            printf("Numero di versioni di Winzoz9: %d\n", contaVersioni(listaSoftware, "winzoz9"));
            break;
        }
    } while (r != 5);
}