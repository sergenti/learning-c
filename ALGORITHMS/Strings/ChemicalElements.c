#include <stdio.h>
#include <string.h>

#define COMPOUND_LENGTH 30
#define ELEMENT_LENGTH 10

int main()
{
    char compound[COMPOUND_LENGTH];
    char element[ELEMENT_LENGTH];

    int first, next;

    // Input
    printf("Enter a compound: ");
    scanf("%s", compound);

    // Algorithm
    first = 0;
    for (next = 1; next < strlen(compound); next++)
    {
        if (compound[next] >= 'A' && compound[next] <= 'Z')
        {
            strncpy(element, &compound[first], next - first);
            element[next - first] = '\0';
            printf("%s\n", element);
            first = next;
        }
    }

    printf("%s\n", strcpy(element, &compound[first]));
    return 0;
}
