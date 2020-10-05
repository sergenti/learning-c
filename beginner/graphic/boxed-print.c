#include <stdio.h>

void boxed_print(double num)
{
    printf("***********\n");
    printf("*         *\n");
    printf("* %7.2f *\n", num);
    printf("*         *\n");
    printf("***********\n");
}

int main(void)
{
    double num;

    printf("Insert number > ");
    scanf("%lf", &num);
    boxed_print(num);
    return (0);
}
