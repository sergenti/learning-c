//ES 6: Bisestile

#include <stdio.h>
int main(){
    int anno;
    int bisestile = 0;
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);
    if (anno % 4 == 0)
        if ((anno % 100 == 0) && (anno % 400 != 0)) bisestile = 0;
        else bisestile = 1;
    if (bisestile) printf("L'anno è bisestile");
    else printf("L'anno non è bisestile");
    return 0;
}