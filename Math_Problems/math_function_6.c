#include <stdio.h>
int prime(int a);
int main()
{
    int n, v;
    printf("Enter the values :");
    scanf("%d\n%d", &n, &v);
    int i;
    for (i = n; i <= v && i >= n; i++)
    {
        int z;
        z = prime(i);
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
                    break;
                    return 0;
                }
                else if (a == i)
                {
                    printf("%d\n", a);
                    break;
                    return 1;
                }
            }
        }
    }
}