#include<stdio.h>
int main()
{
    int n=5,j,i;
    for ( i = n; i <= n; i--)
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2*i)-1; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i==0)
        {
            break;
        }
        
    }   
}