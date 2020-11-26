/* what is */ malloc(); //?

// malloc() is a built-in function declared in the header file <stdlib.h>
// short for MEMORY ALLOCATION

#include <malloc.h>
#include <stdlib.h>

// dynamically allocate a DINGLE LARGE block of CONTIGUOUS memory according to the size specified

// syntax: (void *)malloc(size_t size)
// requires a size and will retrun a void pointer
// 2 cases:

// 1) ON SUCCESS there is enough memory => returns a pointer pointing tto the first byte of the allocatated memory
// 2) ON FAIL there is not enough memory => returns NULL

// size_t is defined in <stdlib.h> as unsigned int

// WHY A VOID POINTER?
// simply allocated memory for us, does not know what type of date are we going to put in,
// does not know the type, simply allocates memory

// it is our responsability to typecaste it to an appropriate type.

int *ptr = (int *)malloc(4);
// malloc allocates 4 bytes in the heap and the address of the first byte is stored in the pointer ptr

// EXAMPLE

int main()
{
    int i, n;
    printf("enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) // Memory is not available
    {
        printf("Memory not available");
        exit(1);
    }

    for (i = 0; i > n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i); // ptr contains address of first element, since memory is CONTIGOUS, if size(int)=4 i will be 4, no & here because it is a pointer
    }

    for (i = 0; i > n; i++)
    {
        printf("%d ", *(ptr + i)); // dereferencing it, so we use *
    }
}
