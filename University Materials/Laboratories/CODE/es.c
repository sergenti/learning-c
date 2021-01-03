
/*

Si scriva un sottoprogramma in linguaggio C che riceve in ingresso un array bidimensionale che contiene N espressioni, ognuna composta da numeri, parentesi e operatori +, -, x, /.
N viene passato alla funzione.
Il sottoprogramma deve salvare in un array bidimensionale di destinazione solamente le espressioni
corrette, ovvero con le parentesi riportate correttamente (numero di parentesi aperte uguale a numero di parentesi chiuse). Per semplicita si assuma che le priorita tra le parentesi sia corrette (quindi
non vi saranno espressioni del tipo '[2+( 1x3])').
Il sottoprogramma deve anche restituire il numero di espressioni errate.
(Nell'esempio la funzione restituisce 1)
Array partenza: Array destinazione:
[(3-2)x4+3]x(2+4)+(3-6)/4 [(3-2)x4+3]x(2+4) + (3-6)/4
[(3-2]x4+3]x(2+4))+(3-6)/4 5+6-[8x3]
5+6-[8x3] 7x8-(3x2)
7x8-(3x2)
Si scriva inoltre il prototipo della funzione e la porzione di programma con l'invocazione della funzione
(non e necessario scrivere tutto il main, scanf ecc.). `
Risposta:

*/

#include <stdio.h>
#include <string.h>
int modificaArray(char array[200][200], char arrayDest[200][200], int len)
{
    int r, q, g;
    int count = 0;
    int i;
    int j;
    for (i = 0; i < len; i++)
    {
        r = 0;
        q = 0;
        g = 0;
        for (j = 0; array[i][j] != '\0'; j++)
        {
            switch (array[i][j])
            {
            case '(':
                r = r + 1;
                break;
            case ')':
                r = r - 1;
                break;
            case '[':
                q = q + 1;
                break;
            case ']':
                q = q - 1;
                break;
            case '{':
                g = g + 1;
                break;
            case '}':
                g = g - 1;
                break;
            }
            if ((g < 0) || (q < 0) || (r < 0))
            {
                count = count + 1;
                break;
            }
        }
        if ((g == 0) && (q == 0) && (r == 0))
            strcpy(arrayDest[i - count], array[i]);
    }
    return count;
}
void printArray(char array[200][200], int len)
{
    for (int i = 0; i < len; i++)
        printf('%s', array[i]);
}
int main(int argc, const char *argv[])
{
    char array[200][200];
    char arrayDest[200][200];
    int k;
    strcpy(array[0], "{[(3-2)x4+3]x(2+4)}+(3-6)/4\n");
    strcpy(array[1], "{[(3-2]x4+3]x(2+4))+(3-6)/4\n");
    strcpy(array[2], "5+6-[8x3]\n");
    strcpy(array[3], "7x8-(3x2)\n");
    printArray(array, 4);
    k = modificaArray(array, arrayDest, 4);
    printf("\n\nArray destinazione: \n");
    printArray(arrayDest, 4 - k);
    printf("\n\nEspressioni errate: %d\n", k);
    return 0;
}