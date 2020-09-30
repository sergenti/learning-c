// circle

#include <stdio.h>

#define PI 3.14159

int main(void)
{

    double radius;
    double area;
    double circumference;

    printf("Enter Radius> ");
    scanf("1f", &radius);

    // Calculating
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Show Area and Circumference
    printf("The area is %.4f\n", area);
    printf("The area is %.4f\n", circumference);

    return 0;
}