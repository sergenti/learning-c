#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 Scrivere un programma che, attraverso una lista, gestisca una coda di persone. Ogni persona è identificata da un numero. La coda riceve nuove persone dalla coda, e le elimina dalla testa. Scrivere le funzioni che permettono di inserire e leggere/rimuovere le persone dalla coda.*/

typedef struct persona
{
    int id_persona;
    char nome[20];
    char cognome[20];
    struct persona *next;
} persona;

typedef persona *ptrPersona;

ptrPersona inserisciInCoda(ptrPersona lista, ptrPersona head);
int rimuoviDallaCoda(ptrPersona *lista);
void stampaLista(ptrPersona lista);
int ultimoIDinCoda(ptrPersona lista);

int main(void)
{
    ptrPersona lista = NULL;
    int c;

    do
    {
        printf("\nMENU\n");
        printf("1) Inserisci in coda\n");
        printf("2) Prossimo cliente\n");
        printf("3) Stampa lista clienti\n");
        printf(">> ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            lista = inserisciInCoda(lista, lista);
            break;
        case 2:
            printf("Il prossimo cliente è: %d", rimuoviDallaCoda(&lista));
            break;
        case 3:
            stampaLista(lista);
            break;

        default:
            break;
        }

    } while (c != 4);

    return 0;
}

ptrPersona inserisciInCoda(ptrPersona lista, ptrPersona head)
{
    if (lista == NULL)
    {
        lista = (ptrPersona)malloc(sizeof(persona));
        //printf("Inserisci ID Cliente: ");
        //scanf("%d",&lista->id_persona);
        lista->id_persona = ultimoIDinCoda(head);
        printf("Inserisci nome: ");
        scanf(" %s", lista->nome);
        printf("Inserisci cognome: ");
        scanf(" %s", lista->cognome);
        lista->next = NULL;
        return lista;
    }
    lista->next = inserisciInCoda(lista->next, head);
    return lista;
}

int rimuoviDallaCoda(ptrPersona *lista)
{
    ptrPersona temp;
    int i;

    if (*lista == NULL)
    {
        return 0; //i miei ID partono da 1
    }
    else
    {
        temp = *lista;
        *lista = (*lista)->next;
        i = temp->id_persona;
        free(temp);
        return i;
    }
}

void stampaLista(ptrPersona lista)
{
    if (lista != NULL)
    {
        printf("ID Cliente: %d\n", lista->id_persona);
        printf("Nome: %s\nCognome: %s\n", lista->nome, lista->cognome);
        stampaLista(lista->next);
    }
}

int ultimoIDinCoda(ptrPersona lista)
{
    if (lista == NULL)
        return 0;
    else if (lista->next == NULL)
        return lista->id_persona + 1;
    else
        return ultimoIDinCoda(lista->next);
}
