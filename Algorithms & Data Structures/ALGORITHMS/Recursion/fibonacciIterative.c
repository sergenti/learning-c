#include <stdio.h>
int main()
{
    int n;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}