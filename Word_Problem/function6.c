#include <stdio.h>
int factorial(int x);
int main()
{
    int x;
    int i;
    printf("Enter the value\n");
    scanf("%d", &x);
    int ft;
    ft = factorial(x);
    printf("%d", ft);
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