#include <ctype.h>

loweringAString()
{

    char str[10];

    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }

    // or
    int *p;
    for (; *p; ++p)
        *p = tolower(*p);
}