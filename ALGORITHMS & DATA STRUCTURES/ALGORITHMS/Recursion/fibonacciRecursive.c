int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Best fibonacci implementation
// "Memo Effect"
// Linear time complexity vs n-exponential

#define MAX 100
long int memo[MAX];

long fib(int n)
{
    if (n >= MAX)
        return fib(n - 1) + fib(n - 2);
    if (memo[n] != 0)
        return memo[n];
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}
