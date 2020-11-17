#include <stdio.h>
#define LENMAX 30
/*
 Gestione studenti (nome, cognome, matricola, voto)
 1. Inserimento studente
 2. Cercare studente per matricola
 3. Stampa isto (<6; 7-17, 18-25,>25)
 4. Riempie nuovo array con studenti insufficienti
 */

typedef struct voto{
    char nome[20];
    char cognome[20];
    int matricola; //str strcmp
    int voto;
}voto;

void inserisciVoto(voto voti[], int *len);
int cercaStudente(voto voti[], int len, int matricola);
void stampaIsto(voto voti[], int len);
int riempiBocciati(voto voti[], int len, voto bocc[]);
void stampa(voto voti[], int len);

int main(int argc, const char * argv[]) {
 
    voto voti[LENMAX];
    voto bocciati[LENMAX];
    int numVoti = 0;
    int numBocciati;
    
    int matricola;
    int r;
    
    do{
        scanf("%d",&r);
        switch (r) {
            case 1:
                inserisciVoto(voti, &numVoti);
                stampa(voti, numVoti);
                break;
            case 2:
                printf("Inserisci matricola: ");
                scanf("%d",&matricola);
                printf("%d",cercaStudente(voti, numVoti, matricola));
                break;
            case 3:
                stampaIsto(voti, numVoti);
                break;
            case 4:
                numBocciati = riempiBocciati(voti, numVoti, bocciati);
                break;
            default:
                break;
        }
    }while(r!=5);
    return 0;
}

void inserisciVoto(voto voti[], int *len){
    printf("Inserisci nome: ");
    scanf("%s",voti[*len].nome);
    //...
    *len = *len +1;
}

int cercaStudente(voto voti[], int len, int matricola){
    int k;
    for (k=0; k<len; k++){
        if (voti[k].matricola == matricola)
            return k;
    }
    return -1;
}

void stampaIsto(voto voti[], int len){
    int isto[4] = {0,0,0,0};
    int k,j,max = 0;
    
    for (k=0; k<len; k++){
        if (voti[k].voto<=6)
            isto[0]++;
        else if(voti[k].voto<=18)
            isto[1]++;
        else if(voti[k].voto<=25)
            isto[2]++;
        else
            isto[3]++;
    }
    for (k=0; k<4; k++){
        if (isto[k]>max)
            max = isto[k];
    }
    for (k=max; k>0; k--)
    {
        for(j=0; j<4; j++)
        {
            if(isto[j]>=k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int riempiBocciati(voto voti[], int len, voto bocc[]){
    int k;
    int lenBocc = 0;
    
    for (k=0; k<len; k++){
        if (voti[k].voto<18){
            bocc[lenBocc] = voti[k];
            //memcpy(&bocc[lenBocc],&voti[k],sizeof(voto));
            lenBocc++;
        }
    }
    return lenBocc;
}

void stampa(voto voti[], int len){
    //..
}

