#include<stdio.h>
float SI(int p,int t,float r);
int main()
{
    int p,t;
    float r,si;
    printf("Enter the principal and time\n");
    scanf("%d\n%d",&p,&t);
    printf("Enter the rate percent\n");
    scanf("%f",&r);
    si=SI(p,t,r);
    printf("Simple interest is %f",si);
}
float SI(int p, int t, float r)
{
    float si;
    si=p*r*t/100;
    return si;
}