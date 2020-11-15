// If you can't sleep, just count sheep!!

// Task:
// Given a non-negative integer, 3 for example, return a string with a murmur:
// "1 sheep...2 sheep...3 sheep...".

// Input will always be valid, i.e. no negative integers.

char *count_sheep(int n)
{
    char *str = (char *)malloc(n * 12);
    str[0] = '\0';
    for (int i = 1; i <= n; i++)
    {
        char s[13];
        sprintf(s, "%d sheep...", i);
        strcat(str, s);
    }
    return str;
}

#include <math.h>
#include <string.h>

char *count_sheep(int n)
{
    int m = 1;
    for (int i = n, j = 1; i; i /= 10, j++)
        m += i % 10 * pow(10, j);
    char *r = (char *)calloc(m + 9 * n, sizeof(char));
    for (int i = 1; i <= n; i++)
        sprintf(r + strlen(r), "%d sheep...", i);
    return r;
}

char *count_sheep(int n)
{
    char *result = calloc(n * 15 + 1, sizeof(char));
    char *buffer = calloc(20, sizeof(char));

    for (int i = 1; i <= n; i++)
    {
        sprintf(buffer, "%i sheep...", i);
        strcat(result, buffer);
    }
    return result;
}