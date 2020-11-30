/* 

ARRAYS, why?

it holds more than one element
it holds only homogeneous elements (same types)
index based => fast access
derived data type
it does not follow any algorithm

NATIVELY-introduced in every programming languages

*/

int arr[5] = {10, 20, 30, 40, 50}; // 2046 2048 2050 2052 2054 (2 bytes per integer)

/* 

arr2[3] = 40;

WHAT IS HAPPENING THE IN THE BACKGROUND

arrays = internal pointer variables
it holds the base address of the memory block

*(arr +3*sizeof(int)) = 40
*(2046 + 3*2) = 40
*(2052) = 40

reaching next memory location in the array

INDEX           =>          in the sintax
POINTERS        =>          in the background

here's why is super efficient getting info from arrays

when we are declaring and initializing variables, they have random locations in memory
cannot access info fast

ARRAYS = storing multiple items with the help of a single variable

TIME COMPLEXITY FOR ARRAYS ---- big O notation

insertion                    O(N)
insertion at end             O(1)
removal                      O(N)
searching                    O(N)
accessing                    O(1)

*/
