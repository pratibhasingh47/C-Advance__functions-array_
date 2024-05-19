//Write a function to print first N prime numbers.


#include <stdio.h>
int prime(int a);
int main()
{
    int n;
    printf("Enter the values :");
    scanf("%d", &n);
    int i;
    while (n > 0)
    {
        for (i = 2; i > 0; i++)
        {
            int z;
            z = prime(i);
            if (z == 1)
            {
                printf("%d\n", i);
                n--;
            }
            else if (n < 0)
            {
                break;
            }
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
                    // printf("NOT PRIME ");
                    break;
                    return 0;
                }
                else if (a == i)
                {
                    //  printf("%d\n",a);
                    // break;
                    return 1;
                }
            }
        }
    }
}