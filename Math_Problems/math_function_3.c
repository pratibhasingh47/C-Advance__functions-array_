#include<stdio.h>
int prime(int a);
int main()
{
    int c;
    printf("Enter a no.\n");
    scanf("%d",&c);
    prime(c);
}
int prime(int a)
{
    int i=2;int k;
    if(a>0)
    {
        for (i = 2;i>0; i++)
        {
            if (a%i==0)
            {
                k=a/i;
                if (k!=1)
                {
                    printf("NOT PRIME\n");
                    break;
                }
                else if (a==i)
                {
                    printf("PRIME");
                    break;
                }       
            }
        }    
    }
}