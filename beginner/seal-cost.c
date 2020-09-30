// Calculating Weight of a circular seal

#include <stdio.h>

#define PI 3.14159

int main(void)
{
    double hole_diameter;
    double edge_diameter;

    double hole_radius;
    double edge_radius;

    double thickness;
    double density;
    double quantity;
    double weight;
    double rim_area;
    double unit_weight;

    // Get inner and outer radius dimension and thickness
    printf("Inner Diameter in cm > ");
    scanf("%lf", &hole_diameter);

    printf("Outer diameter in cm > ");
    scanf("%lf", &edge_diameter);

    printf("Thickness in cm > ");
    scanf("%lf", &thickness);

    // Get density and quantity
    printf("Material density in grams per cubic centimeter > ");
    scanf("%lf", &density);

    printf("Quantity in batch > ");
    scanf("%lf", &quantity);

    // Calculating
    hole_radius = hole_diameter / 2.0;
    edge_radius = edge_diameter / 2.0;

    rim_area = PI * edge_radius * edge_radius - PI * hole_radius * hole_radius;
    unit_weight = rim_area * thickness * density;
    weight = unit_weight * quantity;

    // Show weight
    printf("\nThe expected weight of the batch is %.2f grams\n", weight);

    return 0;
}