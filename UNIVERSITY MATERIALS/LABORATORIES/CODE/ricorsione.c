#include <stdio.h>
#include <string.h>

/*
 Scrivere una funzione che, letta un stringa, elimini le vocali
 - prima sola a video (printf)
 - poi le elimina dall'array
 
 Funzione ricorsiva per il calcolo del valore minimo in una array
 
 Svrivere una funzione ricorsiva per calcolare l'approssimazione della serie di taylor della funzione sin(x)
 */
/*
void noVocali(char stringa[]);
void noVocali2(char stringa[]);


int main(int argc, const char * argv[]) {
    
    char stringa[20] = {"ciao come va"};
    
    //noVocali(stringa);
    noVocali2(stringa);
    printf("%s\n",stringa);
    return 0;
}

void noVocali(char stringa[]){
    if (*stringa=='\0'){ //caso base
        printf("\n");
    }
    else{
        switch (*stringa) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                noVocali(stringa+1);
                break;
                
            default:
                noVocali(stringa+1);
                printf("%c",*stringa);
                break;
        }
        
    }
    
        
}

void noVocali2(char stringa[]){
   
    if (*stringa == '\0')
        return;
    else{
        switch (*stringa) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                memcpy(stringa, stringa+1, strlen(stringa));
                noVocali2(stringa);
                break;
                
            default:
                noVocali2(stringa+1);
                break;
        }
    }
}
*/

/*
int minimo (int val[], int len);

int main(){
    int val[10] = {1,5,2,-9,4,1,3,-4,9,10};
    
    printf("Il minimo vale: %d\n",minimo(val,10));
    return 0;
    
}

int minimo (int val[], int len){
    int minTemp;
    
    if (len == 1)
        return val[len-1];
    else{
        minTemp = minimo(val, len-1));
        if (val[len-1]< minTemp)
            return val[len-1];
        else
            return minTemp;
    }
        
}
 */
#include <math.h>

float taylor(float x, float N);
float fattoriale(int n);

int main ()
{
    float N, x;
    
    printf("Inserisci x: ");
    scanf("%f",&x);
    printf("Inserisci N: ");
    scanf("%f",&N);
    
    printf("L'approssimazione di sin(%.2f) di Taylor con N = %.0f = %.2f\n",x,N,taylor(x/180.0*M_PI, N));
    return 0;
}

float taylor(float x, float N){
    if (N==0)
        return x;
    else
        return (pow(-1,N) * pow(x,2*N+1) / (fattoriale(2*N+1))) + taylor(x, N-1);
    return 0;
    
}
float fattoriale(int n){
    if ((n==0) || (n==1))
        return 1;
    else
        return n*fattoriale(n-1);
}
