#include <stdio.h>
#include <stdlib.h> //malloc.h

#define N 20

int inserisci(char *stringa[]);
void stampa(char *stringa[], int i);
void stampaParola(char *stringa);

int main(int argc, const char * argv[]) {
    char *stringa[N];
    int num;
    
    num = inserisci(stringa);
    stampa(stringa, num);
    return 0;
}

int inserisci(char *stringa[]){
    int n = 0;
    int sizeSingleString = sizeof(char)*N;
    char r;
    
    do{
        stringa[n] = (char*)malloc(sizeSingleString);
        printf("Inserisci la stringa: ");
        scanf("%s", stringa[n]);
        n++;
        printf("Vuoi inserire un'altra stringa? (s/n)");
        scanf(" %c",&r);
    }while(r=='s');
    return n;
}

void stampa(char *stringa[], int i){
    for (i=i-1; i>=0; i--)
        stampaParola(stringa[i]);
}

void stampaParola(char *stringa){
    char *i;
    int len = 0;
    for (i=stringa; *i!='\0'; i++)
        len++;
    for (i=stringa+len-1; i>=stringa; i--)
        printf("%c",*i);
    printf("\n");
}

