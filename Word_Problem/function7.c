#include <stdio.h>
int factorial(int n);
float combination(int x, int y, int z);
int main()
{
    int n, r;
    printf("Enter the values of n and r\n");
    scanf("%d\n%d", &n, &r);
    int x, y;
    x = factorial(n);
    y = factorial(r);
    int m, z;
    z = n - r;
    m = factorial(z);
    float c;
    c = combination(x, y, m);
    printf("No. of combinatons can be %f", c);
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
float combination(int x, int y, int m)
{
    float h;
    h = x / (y * m);
    return h;
}
