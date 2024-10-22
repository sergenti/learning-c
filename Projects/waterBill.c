// Calculating the water bill

#include <stdio.h>

// #define price_per_1000_gallons 1.1

#define PRICE_PER_GALLON 0.0011
#define FIXED_TAX 35.00
#define LATE_CHARGE 2.00

// functions prototypes

void instruct_water(void);
void get_input(double *previous, double *current, double *unpaid);
void display_bill(double late_charge, double bill, double unpaid);

double compute_use_charge(double previous, double current);
double compute_late_charge(double unpaid);

int main(void)
{
    // declaring inputs
    double previous;
    double current;
    double unpaid;

    // declaring outputs
    double useCharge;
    double lateCharge;
    double bill;

    // ask the user to insert the desidered fields
    get_input(&previous, &current, &unpaid);

    // calculations
    useCharge = compute_use_charge(previous, current);
    lateCharge = compute_late_charge(unpaid);
    bill = useCharge + lateCharge + FIXED_TAX;

    //show
    display_bill(lateCharge, bill, unpaid);

    return 0;
}

//========================== Defining functions ==========================//

void instruct_water()
{
    printf("bella fra calcola l'acqua");
}

void get_input(double *previous, double *current, double *unpaid)
{

    printf("previous use of water in gallons > ");
    scanf("%lf", previous);

    printf("current use of water in gallons > ");
    scanf("%lf", current);

    printf("Unpaid money > ");
    scanf("%lf", unpaid);
}

double compute_use_charge(double previous, double current)
{
    double used = previous + current;
    double useCharge = used * PRICE_PER_GALLON;
    return (useCharge);
}

double compute_late_charge(double unpaid)
{
    return unpaid > 0 ? LATE_CHARGE : 0.0;
}

void display_bill(double late_charge, double bill, double unpaid)
{

    late_charge > 0 ? printf("cojone devi pagare %lf,quindi ti addebbitiamo la misera quantita` di %lf, stronzo\n\nla tua bolletta costa %lf ", unpaid, late_charge, bill)
                    : printf("bellaraga, ti costa: %lf", bill);
}