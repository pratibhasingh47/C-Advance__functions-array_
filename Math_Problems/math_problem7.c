// Write a function to print first N terms of Fibonacci series.

#include <stdio.h>
int main()
{
    int x, y, z, i, n;
    i = 1;
    x = 0;
    y = 1;
    printf("Enter th value :");
    scanf("%d", &n);
    while (i <= n)
    {
        z = x + y;
        x = y;
        y = z;
        printf("%d ,", z);
        i++;
    }
}