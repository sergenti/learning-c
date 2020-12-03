/*

Si vuole creare un programma per trasformare una serie di immagini in una GIF animata.
Un’immagine e definita da una struttura che contiene tre vettori bidimensionali 100x100 contenete valori che vanno da 0 a 255.
Ogni matrice corrispone al colore rosso, verde e blue.
Una GIF animata e costituita da una lista i cui elementi sono composti da un’immagine
(i tre vettori `bidimensionali) ed un numero che corrispone ai secondi per cui l’immagine viene visualizzata durante l’animazione.

1. Definire le strutture dati necessari per la realizzazione del programma. (1 punto)

2. Scrivere una funzione che prende in ingresso due immagini e controlli se differiscono di almeni N pixel.
N viene definito dall’utente ed e un parametro che viene passato alla funzione.
I pixel differiscono quando i valori dei vettori bidimensionali nella medesima posizione sono differenti (es. immRed1[10][10] != immRed2[10][10]).
Se le immagini differiscono la funzione ritorna 1, se non differiscono restituisce 0. (2 punti)

3. Scrivere una funzione che presa in ingresso un’immagine e un tempo t, la aggiunge in coda alla lista contenente tutte le immagini della GIF animata.
Prima di aggiugnerle deve controllare che l’immagine differisca di almeno 10 pixel dall’immagine precedente (Si consiglia di usare la funzione del punto 2).
(3 punti)

4. Si vuole riprodurre la GIF al contrario.
Scrivere la funzione che presa in ingresso la lista della GIF, crei una nuova lista inserendo gli elementi al contrario. (3 punti)

5. Scrivere una funzione che presa in ingresso la GIF ed una variabile tempo T, elimini dalla lista tutte le immagini che hanno durata inferiore a T.
Non deve essere creata una nuova lista, ma vanno eliminati gli elementi dalla lista di partenza. (3 punti)

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 5

typedef struct immagine
{
    int red[M][M];
    int green[M][M];
    int blue[M][M];
} immagine;

typedef struct imgGif
{
    immagine img;
    int tempo;
    struct imgGif *next;
} imgGif;

typedef imgGif *ptrGif;

//Funzioni
void generaMatrici(int matrix[][M], int i);
void stampaMatrice(int matrix[][M]);
immagine generaImmagine(int i);
void stampaGif(ptrGif gif);
int confrontaImmagini(immagine img1, immagine img2, int n);
ptrGif aggiungiGif(ptrGif gif, immagine img, int tempo);
ptrGif contrarioIt(ptrGif gif);
ptrGif contrario(ptrGif gif, ptrGif contrario);
ptrGif velocizza(ptrGif gif, int T);

int main(void)
{
    ptrGif gif = NULL;
    ptrGif gifContrario = NULL;
    immagine img1;
    immagine img2;
    int c;
    int r;
    int val;

    srand((unsigned)time(0));

    do
    {
        printf("\n\nMENU\n");
        printf("L’opzione 2 genere una matrince 5x5 e non 100x100 per velocizzare il tutto. Il comando generare una matrice uguale o una casuale(per cui diversa)\n\n ");
        printf("1) Confronta immagini\n2) Inserisci immagini\n3) Lista al contrario\n4)Velocizza GIF\n5) Stampa gif\n6) ESCI\n\n >>");
        fpurge(stdin);
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            //Per confrontrare immagine diffrenti mettere 0 e 0 o 0 e 1 nella generazione
            //Per confrontare immagine uguali mettere 1 e 1
            img1 = generaImmagine(0);
            img2 = generaImmagine(1);
            if (confrontaImmagini(img1, img2, 5))
                printf("Le immagini sono differenti\n");
            else
                printf("Le immagini non sono differenti\n");
            break;

        case 2:
            printf("Uguale 0, diversa 1: ");
            scanf("%d", &r);
            img1 = generaImmagine(r);
            printf("Inserisci tempo: ");
            scanf("%d", &r);
            gif = aggiungiGif(gif, img1, r);
            break;

        case 3:
            stampaGif(gif);
            printf("\n\nAl contrario: \n\n");
            //gifContrario = contrario(gif, gifContrario);
            gifContrario = contrarioIt(gif);
            stampaGif(gifContrario);
            break;

        case 4:
            printf("Inserire valore minimo tempo immagine: ");
            scanf("%d", &val);
            gif = velocizza(gif, val);
            break;

        case 5:
            stampaGif(gif);

        default:
            break;
        }
    } while (c != 6);
    return 0;
}

void generaMatrici(int matrix[][M], int k)
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (k != 0)
                matrix[i][j] = rand() % 256;
            else
                matrix[i][j] = 100;
        }
    }
}

void stampaMatrice(int matrix[][M])
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void stampaGif(ptrGif gif)
{
    if (gif == NULL)
        return;
    stampaMatrice(gif->img.blue);
    //stampaMatrice(gif->img.green);
    //stampaMatrice(gif->img.red);
    printf("%d\n", gif->tempo);
    stampaGif(gif->next);
}

immagine generaImmagine(int i)
{
    immagine img;
    generaMatrici(img.blue, i);
    generaMatrici(img.red, i);
    generaMatrici(img.green, i);
    return img;
}

int confrontaImmagini(immagine img1, immagine img2, int n)
{
    int i, j;
    int cont = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            if ((img1.blue[i][j] != img2.blue[i][j]) || (img1.red[i][j] != img2.red[i][j]) || (img1.green[i][j] != img2.green[i][j]))
                cont++;
            // if (img1.blue[i][j] != img2.blue[i][j])
            // cont++;
            // else if (img1.red[i][j] != img2.red[i][j])
            // cont++;
            // else if (img1.green[i][j] != img2.green[i][j])
            // cont++;
        }
    }
    if (cont > n)
        return 1;
    else
        return 0;
}

ptrGif aggiungiGif(ptrGif gif, immagine img, int tempo)
{
    //int i,j;
    if (gif == NULL)
    {
        gif = (ptrGif)malloc(sizeof(imgGif));
        // for (i=0; i<M; i++)
        // {
        // for (j=0; j<M; j++){
        // gif->img.red[i][j] = img.red[i][j];
        // gif->img.blue[i][j] = img.blue[i][j];
        // gif->img.green[i][j] = img.green[i][j];
        // }
        // }
        gif->img = img;
        gif->tempo = tempo;
        gif->next = NULL;
        return gif;
    }
    if ((gif->next != NULL) || ((gif->next == NULL) && (confrontaImmagini(gif->img, img, 10))))
        gif->next = aggiungiGif(gif->next, img, tempo);
    return gif;
}

ptrGif contrarioIt(ptrGif gif)
{
    ptrGif contr = NULL;
    ptrGif temp = NULL;
    while (gif != NULL)
    {
        temp = (ptrGif)malloc(sizeof(imgGif));
        temp->img = gif->img;
        temp->tempo = gif->tempo;
        temp->next = contr;
        contr = temp;
        gif = gif->next;
    }
    return contr;
}

ptrGif contrario(ptrGif gif, ptrGif contr)
{
    ptrGif temp;
    int i, j;
    if (gif == NULL)
        return contr;
    temp = (ptrGif)malloc(sizeof(imgGif));
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            temp->img.blue[i][j] = gif->img.blue[i][j];
            temp->img.red[i][j] = gif->img.red[i][j];
            temp->img.green[i][j] = gif->img.green[i][j];
        }
    }
    temp->tempo = gif->tempo;
    temp->next = contr;
    temp = contrario(gif->next, temp);
    return temp;
}

ptrGif velocizza(ptrGif gif, int T)
{
    ptrGif temp;
    if (gif == NULL)
        return NULL;
    if (gif->tempo < T)
    {
        temp = gif->next;
        free(gif);
        temp = velocizza(temp, T);
        return temp;
    }
    else
    {
        gif->next = velocizza(gif->next, T);
        return gif;
    }
}