#include <stdio.h>
#include <math.h>

/*BMI peso/m^2

sotto 18.4      Sottopeso
18.5-24.9       Normopeso
25.0-29.9       Sovrappeso
30.0 e oltre    Obesità
*/

int main() {
    float peso;
    int altezza_cm;
    float BMI;
    
    printf("TITOLO: CALCOLO BMI\n\n\n");
    do{
        printf("Inserisci il tuo peso (kg): ");
        scanf("%f",&peso);
        if (peso<=0){
            if (peso == 0)
                printf("Peso non valido\n");
            continue;
        }
            printf("\nInserisci la tua altezza (cm senza virgola): ");
        do{
            scanf("%d",&altezza_cm);
            if (altezza_cm<=0)
                printf("Hai inserito un numero non valido (deve essere > 0)\n");
        }while(altezza_cm<=0);
        
            //Calcolo del BMI
            BMI = peso/pow((altezza_cm/100.0),2);
            printf("Il tuo BMI e': %.2f\n", BMI);
            if (BMI<18.5){
                printf("Sottopeso");
            }else if (BMI<24.5){
                printf("Normopeso");
            }else if (BMI<30){
                printf("Sovrappeso");
            }else{ //BMI >=30
                printf("Obeso");
            }
            printf("\n");
        
    }while(peso>=0);
    
    printf("Arrivederci!!!\n");
    return 0;
}

// pow eleva a potenza
// pow(numero, potenza);
