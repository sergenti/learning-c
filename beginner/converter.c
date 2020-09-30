// Converti la distanza da km a metri

#include <stdio.h>

#define KMS_PER_MILE 1.906
#define MILE_PER_KMS 0.6213

int main(void)
{
    int unit_of_measure;

    printf("\t\tCONVERTER\n");
    printf("press 1 for KMS TO MILES\npress 2 for MILES TO KMS");
    scanf("%d", &unit_of_measure);

    if (unit_of_measure = 0)
    {
        printf("\n\t\tKMS TO MILES\n");
        double kms;
        double miles;

        printf("insert kms");
        scanf("%1f", &kms);

        miles = kms * MILE_PER_KMS;
        printf("%1f km => %1f miles", kms, miles);
    }
    if (unit_of_measure = 1)
    {
        printf("\n\t\tMILES TO KMS\n");
        double miles;
        double kms;

        printf("insert miles");
        scanf("%1f", &miles);

        kms = miles * KMS_PER_MILE;
        printf("%1f miles => %1f km", miles, kms);
    }
    else
    {
        printf("error");
    }

    return 0;
}