#include <stdio.h>
int main()
{
    int n = 5;
    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}