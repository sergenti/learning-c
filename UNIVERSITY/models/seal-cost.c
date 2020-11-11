// Calculating Weight of a circular seal

#include <stdio.h>

#define PI 3.14159

// external fuction used to calculare the area of a circle with desidered diameter
// A = PI x r^2 = PI x (d/2)^2 = PI x d^2 x 0.25
double calculateArea(double diameter)
{
    double area = PI * diameter * diameter * 0.25;
    return area;
}

int main(void)
{
    // declaring inputs
    double hole_diameter;
    double edge_diameter;
    double thickness;
    double density;
    double quantity;

    // declaring outputs
    double rim_area;
    double unit_weight;
    double weight;

    // ask the user to insert the desidered fields
    printf("Inner Diameter in cm > ");
    scanf("%lf", &hole_diameter);

    printf("Outer diameter in cm > ");
    scanf("%lf", &edge_diameter);

    printf("Thickness in cm > ");
    scanf("%lf", &thickness);

    printf("Material density in grams per cubic centimeter > ");
    scanf("%lf", &density);

    printf("Quantity in batch > ");
    scanf("%lf", &quantity);

    // Calculating
    rim_area = calculateArea(edge_diameter) - calculateArea(hole_diameter);

    unit_weight = rim_area * thickness * density;
    weight = unit_weight * quantity;

    // Show output
    printf("\nThe expected weight of the batch is %.2f grams", weight);
    printf("\nThe expected weight of each unit is %.2f grams\n", unit_weight);

    return 0;
}