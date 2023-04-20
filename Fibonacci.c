#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Fib(int n);

int main()
{
    int n = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    int f = Fib(n);
    printf("The %dth number of Fibonacci is %d\n", n, f);

    return 0;
}

int Fib(int n)
{
    int i = 0, f = 0, a = 0, b = 0;

    if (n == 0)
        return a = f = 0;
    else
        if (n == 1)
            return b = f = 1;

    a = 1, b = 0;

    for (i = 1; i < n; i++)
    {
        f = a + b;
        b = a;
        a = f;
    }

    return f;
}
