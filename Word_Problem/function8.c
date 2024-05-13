#include <stdio.h>
int factorial(int n);
float arrangement(int x, int z);
int main()
{
    int n, r;
    printf("Enter the values of n and r\n");
    scanf("%d\n%d", &n, &r);
    int x;
    x = factorial(n);
    int m, z;
    z = n - r;
    m = factorial(z);
    float a;
    a = arrangement(x, m);
    printf("No. of arrangement can be %f", a);
}
int factorial(int v)
{
    int i, f;
    f = 1;
    for (i = 1; i <= v; i++)
    {
        f = f * i;
    }
    return f;
}
float arrangement(int x, int m)
{
    float h;
    h = x / m;
    return h;
}