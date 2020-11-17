#include <stdio.h>
#include <string.h>
//Letta una stringa, cifrarla secondo il cifrario di cesare
//a b c d e f g h i j k l m n o p q r s t u v w x y z
//    a b c d e f g h i j k l m n o p q r s t u v w x y z
//key = c

//"Ciao mondo" "
//key = 'a'
//newkey = 'c'

//l[0] = l[0]-key+newkey;
//'a'-'a' = 0 + 'c' = 'c'

#define N 100

void cifrarioCesare(unsigned char stringa[], char startKey, char key);
void calcolaChiavi(char key, char *keyMai, char *keyMin);
//char calcolaChiavi(char key, char *keyMai);
char decifra(unsigned char stringa[]);

int main() {
    unsigned char str[N];
    char c;
    
    printf("Inserisci il messaggio da cifrare: ");
    
    fpurge(stdin);
    //gets(str);
    scanf("%[^\n]s",str);
    
    printf("Inserisci la chiave di codifica: ");
    scanf(" %c",&c);
    
    cifrarioCesare(str, 'a' ,c);
    printf("Il messaggio cifrato è: %s\n",str);
    
    
    //cifrarioCesare(str, c , 'a');
    //printf("Il messaggio decifrato è: %s\n",str);
    printf("La chiave di decodifica è: %c\n",decifra(str));
    return 0;
}

void cifrarioCesare(unsigned char stringa[], char startKey, char key){
    int i;
    char keyMai, keyMin;
    char startKeyMin, startKeyMai;
    
    calcolaChiavi(key, &keyMai, &keyMin);
    calcolaChiavi(startKey, &startKeyMai, &startKeyMin);
    
    for (i=0; stringa[i]!='\0'; i++)
    {
        if ((stringa[i]>='a') && (stringa[i]<='z')){
            //minuscole
            stringa[i] = stringa[i] - startKeyMin + keyMin;
            if (stringa[i]>'z')
                stringa[i] = stringa[i] - 'z' + 'a' -1;
            if (stringa[i]<'a')
                stringa[i] = stringa[i] - 'a' + 'z' +1;
        }
        else if ((stringa[i]>='A') && (stringa[i]<='Z')){
            //maiuscole
            stringa[i] = stringa[i] - startKeyMai + keyMai;
            if (stringa[i]>'Z')
                stringa[i] = stringa[i] -'Z' + 'A' -1;
            if (stringa[i]<'A')
                stringa[i] = stringa[i] - 'A' + 'Z' +1;
        }
        else{
            //Tutti gli altri caratteri
        }
    }
}

void calcolaChiavi(char key, char *keyMai, char *keyMin){
   
   if ((key>='a') && (key<='z'))
   {
       *keyMin = key;
       *keyMai = key-'a'+'A';
   }
   else if ((key>='A') && (key<='Z'))
   {
       *keyMai = key;
       *keyMin = key-'A'+'a';
   }
   
}


char decifra(unsigned char stringa[]){
    char i,j;
    char stop = 'n';
    unsigned char stringa2[N];
    
    for (i = 'a'; (i<='z') && (stop=='n'); i++){
        
        for (j=0; stringa[j]!='\0'; j++)
            stringa2[j] = stringa[j];
        stringa2[j] = '\0';
        
        cifrarioCesare(stringa2, i, 'a');
        printf("La decodifica %s è giusta (s/n)?",stringa2);
        scanf(" %c",&stop);
    }
    return i-1;
}
