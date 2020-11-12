#include <stdio.h>

void draw_circle(void);
void draw_intersect(void);
void draw_base(void);
void draw_triangle(void);

int main(void)
{
    draw_circle();
    draw_triangle();
    draw_intersect();
    return (0);
}

void draw_circle(void)
{
    printf("\t\t   * \n");
    printf("\t\t *   *\n");
    printf("\t\t  * * \n");
}

void draw_triangle(void)
{
    draw_intersect();
    draw_base();
}

void draw_intersect(void)
{
    printf("\t\t  / \\  \n");
    printf("\t\t /   \\ \n");
    printf("\t\t/     \\ \n");
}

void draw_base(void)
{
    printf("\t\t-------\n");
}