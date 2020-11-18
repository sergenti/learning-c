// STATIC MEMORY = memory allocated during compile time
// memory is fixed and cannot be increased or decreased during run-time

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // cannot modify memory
}

"STATIC";

/*

PROBLEM FACED IN STATIC MEMORY ALLOCATION:

- fix size at the time of declaration, cannot change during runtime
- is value used are less then allocated we have a wastage of memory (less then the size specified)
- if values are more they specified, program can crush or missbehave

*/

"DYNAMIC";

/*

DYNAMIC MEMORY ALLOCATION = allocating memory at the time of execution
allocating memory according to your need

HEAP is the segment of memory where dynamic memory allocation takes place
unlike STACK where memory is allocaed or deallocated in defined order,
heap is allocated or deallocated randomly, no restrictions

there are built-in functions:

*/

malloc();
calloc();
realloc();
free();

// !!! POINTERS play a very important role in memory allocation
// !!! allocated memory can only be accessed through pointers

// https://www.youtube.com/watch?v=udfbq4M2Kfc&ab_channel=NesoAcademy