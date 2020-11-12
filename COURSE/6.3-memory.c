#include <stdio.h>
#include <stdlib.h> // required for the memory functions
#include <stdbool.h>
#include <string.h>

//Memory Management (Dynamic) very closely related with variable scope

//variable will get delated after the scope of the code block (brackets)
//at the end of the scope they aredeclaed in

//STATIC variable will exist for the lifetime of the program, that does not mean it is accessible everywhere
//scope is the same but value persists

//DYNAMIC - variables acessible everywhere as long as you have the address
//memory will stay allocated until we free it

//if static array size is defined at compile time and we will not be able to change it,
//if dataabse or use input we will not know how many array we will have

typedef struct
{
    char name[30];
    int age;
    bool isVerified;
} user;

user *createUser(char name[], int age, bool isVerified)
{
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name, name); // when you ahve a pointer referring to a  struct you use an arrow instead of a point
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
};

int main()
{
    // We've been creating statically sized arrays like so:
    int data[] = {1, 2, 3};
    // This is permanently sized to 3.

    // Typically we want dynamically sized;

    int size;
    printf("How many elements do you want to store?: ");
    scanf("%d", &size); // ONLY USE WHAT WE NEED :) #StopGlobalWarming

    printf("Enter each number followed by the enter key:\n");
    int *arr = malloc(size * sizeof(int)); //making a pointer that we are going to use as if it was an array

    if (arr == 0) // Error Checking
    {
        printf("Invalid pointer. Error allocatig memory");
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // When done, make sure you call free! Otherwise memory leak
    free(arr);

    //   null vs void pointer    ////
    // Malloc will return either a null pointer, or void pointer
    // null pointer means it points nowhere
    // void pointer means it points to unknown type
    // void = good
    // null = bad = Unable to allocate memory
    // cast from void to int pointer is implicit (C is partially weakly typed)

    // You may want to check if allocation was successful:
    int *grades = malloc(30000 * sizeof(int)); //30000 ints

    if (grades == 0) //or == NULL
    {
        printf("Error Allocating Memory. Deleting Harddrive. 3...2...1...");
        return -1;
    }
    else
    {
        // printf("allocation success!\n");  // Usually you don't tell the users this lol
    }

    // Dynamic memory also allows variables to persist past there scope.
    // specifically, think of variables defined within functions.

    user *newUser = createUser("Caleb Curryyyy", 18, false);

    printf("\nuser name: %s\nage: %d\nisVerified: %d\n",
           newUser->name,
           newUser->age,
           newUser->isVerified);

    // REMEMBER TO FREE
    free(newUser);

    // can see this concept being useful in making a library
    // to work with a data structure such as a linked list
    // saving that for intermediate C ;)

    // You can see the effects of not freeing if you do this:
    // while(true)
    // {
    // printf(".");
    //   int *test = malloc (10000000 * sizeof(int));
    // }

    // Other functions you may want to learn

    // realloc - used to resize amount of memory (say an array needs to grow)
    // calloc - similar to malloc but initializes everything to 0 (no "cruft")
    // much more to learn - statt here:
    // https: // en.wikipedia.org/wiki/C_dynamic_memory_allocation

    return 0;
}