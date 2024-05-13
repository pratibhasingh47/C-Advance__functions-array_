#include <stdio.h>
int main()
{
    int i, k, n;
    printf("Enter the value :");
    scanf("%d", &n);
    i = 2;
    while (i > 0)
    {
        k = n % i;
        if (k == 0)
        {
            n = n / i;
            printf("%d* ", i);
        }
        else if (k != 0)
        {
            i++;
        }
    }
}