#include <stdio.h>
int factorial(int x);
int main()
{
    int a = 0;
    int b, c, p;
    int n = 5;
    printf("Sum of the series will be :");
    for (p = 1; p <= n; p++)
    {
        b = (factorial(p)) / p;
        c = a + b;
        a = c;
        if (p == n)
        {
            printf("%d", c);
            break;
        }
    }
}
int factorial(int x)
{
    int i, f = 1;
    for (i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}