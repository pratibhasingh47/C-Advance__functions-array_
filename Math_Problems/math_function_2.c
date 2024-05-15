#include <stdio.h>
int main()
{
    int i = 2;
    int x;
    int y;
    printf("Enter the numbers :\n");
    scanf("%d\n%d", &x, &y);
    int k;
    k = x * y;
    while (k > 0)
    {
        if (x % k == 0 && y % k == 0)
        {
            printf("HCF is %d", k);
            break;
        }
        else
        {
            k--;
        }
    }
}