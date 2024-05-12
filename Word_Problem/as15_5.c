#include<stdio.h>
void Nno(int n);
int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d",&n);
    Nno(n);
}
void Nno(int n)
{
    int i;
    for ( i = 1; i<=n; i++)
    {
        if(i%2!=0)
        {printf("%d\n",i);}
    }
    
}