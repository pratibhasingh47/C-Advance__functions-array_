#include <stdio.h>
int cube(int a);
int main()
{
    int n, m;
    printf("Enter the value:");
    scanf("%d", &n);
    m = cube(n);
    printf("%d", m);
}
int cube(int a)
{
    int k;
    k = a * a * a;
    return k;
}