/*======================================================

void malloc (size_t size)

size_t (unsigned) positive integer

on success, it return base address of memory block
on failure, it return null pointer (generic pointer)

*/

#include <stdlib.h>

int main()
{

    // allocating memory to struture

    struct Emp
    {
        int number;
        char name[20];
        float salary;
    };

    struct Emp *ptr;

    // we don't know how big the size, it changes depending on machine, 16bit/32bit compiler ?
    // typecasting the pointer

    ptr = (struct Emp *)malloc(sizeof(struct Emp));
    if (ptr == NULL)
    {
        printf("out of memory");
    }
    else
    {
        printf("enter emp number");
        scanf("%d", &ptr->number);

        printf("enter emp name");
        scanf("%d", ptr->name); // no & because to read character array no ned to specify base addresss, variable is holding the address

        printf("enter emp salary");
        scanf("%f", &ptr->salary);
    }
}

// ordinary variable points to structure dot operator       .
// pointer to sruct arrow operator                          ->