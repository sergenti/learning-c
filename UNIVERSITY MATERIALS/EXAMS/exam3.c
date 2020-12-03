/*

Si ipotizzi di dovere immagazzinare le letture realizzate da un sensore di temperatura.
Una lettura e composta da l’orario in cui e stata effettuata (HH:MM:SS), una stringa che indica il locale in cui e stata effettuata la lettura
(cucina, salotto, camera1, camera2, ecc.), e il valore stesso della lettura in gradi Celsius.

L’immagazzinamento delle letture deve avvenire mediante una lista, ordinata per orario di lettura.
L’inserimento di una nuova misura viene fatto in coda. La lista puo contenere al massimo 100 misurazioni;
una volta raggiunte le 100 misure, inserendo un nuovo nodo in coda viene automaticamente eliminato il primo nodo in testa.
Si assuma che, inserendo sempre il nuovo nodo in coda, la lista sia gia sempre ordinata.

1. Si definiscano le strutture dati necessarie allo sviluppo di questo programma. (1 punto)

2. Scrivere la funzione RICORSIVA int contaNodi(ptrLista testa) che conta il numero di nodi presenti nella lista. (3 punti)

3. Facendo uso della funzione al punto precedente, scrivere la funzione ptrLista
aggiungiLettura(ptrLista testa, int ora, int minuto, int secondo, char *locale, int valore) per inserire un nuovo nodo.
Se sono presenti gia 100 letture, la prima lettura viene automaticamente cancellata. (4 punti)


4. Scrivere una funzione che riceve due orari ed elimina dalla lista tutte le letture avvenute nella finestra temporale definita dai due orari.
Si ipotizzi che il primo orario sia sempre “prima” del secondo orario.
ptrLista rimuoviLetture(ptrLista int daOra, int aOra) (4 punti)


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int HH, MM, SS;
    char locale[20];
    int gradi;
    struct node *next;
} node;

typedef node *ptrLista;

int contaNodi(ptrLista lista)
{
    if (lista == NULL)
        return 0;
    return 1 + contaNodi(lista->next);
}

ptrLista aggiungiLettura(ptrLista lista, int ora, int minuto, int secondo, char locale[20], int valore)
{
    ptrLista temp;
    if ((contaNodi(lista)) >= 100)
    {
        temp = lista;
        lista = lista->next;
        free(temp);
    }
    if (lista != NULL)
    {
        lista->next = aggiungiLettura(lista->next, ora, minuto, secondo, locale, valore);
        return lista;
    }
    else
    {
        lista = (ptrLista)malloc(sizeof(node));
        lista->HH = ora;
        lista->MM = minuto;
        lista->SS = secondo;
        strcpy(lista->locale, locale);
        lista->gradi = valore;
        lista->next = NULL;
        return lista;
    }
}

ptrLista rimuoviLetture(ptrLista lista, int min, int max)
{
    ptrLista temp;
    ptrLista head;
    head = lista;
    temp = NULL;
    while (lista != NULL)
    {
        if ((lista->HH >= min) && (lista->HH <= max))
        {
            if (temp == NULL)
            {
                temp = head;
                head = head->next;
                free(temp);
                temp = NULL;
            }
            else
            {
                temp->next = lista->next;
                temp = lista;
                free(lista);
            }
        }
        temp = lista;
        lista = lista->next;
    }
    return head;
}

void printLista(ptrLista lista)
{
    if (lista == NULL)
        return;
    else
    {
        printf("%d %d %d %s %d\n", lista->HH, lista->MM, lista->SS, lista->locale, lista->gradi);
        printLista(lista->next);
    }
}

int main(int argc, const char *argv[])
{
    int h, m, s, c = -1;
    char loc[20];
    ptrLista lista = NULL;
    while (c != 0)
    {
        scanf("%d", &h);
        scanf("%d", &m);
        scanf("%d", &s);
        scanf("%s", loc);
        scanf("%d", &c);
        lista = aggiungiLettura(lista, h, m, s, loc, c);
        printLista(lista);
    }
    lista = rimuoviLetture(lista, 10, 11);
    printLista(lista);
    return 0;
}