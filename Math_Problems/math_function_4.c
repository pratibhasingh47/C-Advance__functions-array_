#include <stdio.h>
int prime(int a);
int main()
{
    int n, z;
    printf("Enter the no. :");
    scanf("%d", &n);
    while (n > 0)
    {
        z = prime(n);
        if (z == 1)
        {
            printf("%d", n);
            break;
        }
        else if (z == 0)
        {
            n++;
        }
    }
}
int prime(int a)
{
    int i = 2;
    int k;
    if (a > 0)
    {
        for (i = 2; i > 0; i++)
        {
            if (a % i == 0)
            {
                k = a / i;
                if (k != 1)
                {
                    //  printf("NOT PRIME ");
                    //  break;
                    return 0;
                }
                else if (a == i)
                {
                    // printf("%d\n",a);
                    // break;
                    return 1;
                }
            }
        }
    }
}