// Write a program in C to find the square of any number using the function.

#include <stdio.h>
int square(int a);
int main()
{
    int n, m;
    printf("Enter the value:");
    scanf("%d", &n);
    m = square(n);
    printf("%d", m);
}
int square(int a)
{
    int k;
    k = a * a;
    return k;
}