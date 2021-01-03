// convert from KMS to MILES and vice versa

#include <stdio.h>
#include <stdbool.h>

#define KMS_PER_MILE 1.906
#define MILE_PER_KMS 0.6213

int main(void)
{
    bool execution = true;
    int unit_of_measure;

    double kms;
    double miles;

    while (execution)
    {

        printf("CONVERTER\n\n");
        printf("press 1 for KMS TO MILES\npress 2 for MILES TO KMS\n\n");
        scanf("%d", &unit_of_measure);

        if (unit_of_measure == 1)
        {
            printf("\nKMS TO MILES\n");
            printf("insert kms > ");
            scanf("%lf", &kms);

            miles = kms * MILE_PER_KMS;
            printf("\n%lf km => %lf miles", kms, miles);
            execution = false;
            return (0);
        }
        if (unit_of_measure == 2)
        {
            printf("\nMILES TO KMS\n");
            printf("insert miles > ");
            scanf("%lf", &miles);

            kms = miles * KMS_PER_MILE;
            printf("\n%lf miles => %lf km", miles, kms);
            execution = false;
            return (0);
        }
        else
        {
            printf("\nplease insert a valid number\n\n");
            execution = true;
        }
    }

    return (0);
}