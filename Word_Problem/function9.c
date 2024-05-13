#include <stdio.h>
int digit(int b, int y);
int main()
{
    int a;
    int y;
    int z;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the digit\n");
    scanf("%d", &y);
    z = digit(a, y);
    if (z == 1)
    {
        printf("\nDIGIT IS PRESENT");
    }
    else
    {
        printf("\nDIGIT IS NOT PRESENT");
    }
}
int digit(int b, int y)
{
    int c = 0;
    int k = 1;
    int d;
    while (b > 0)
    {
        c = b % (10 * k) - c;
        d = c / k;
        k = k * 10;
        if (d == y)
        {
            return 1;
            break;
        }
        if (c < 0)
        {
            break;
        }
        return 0;
    }
}