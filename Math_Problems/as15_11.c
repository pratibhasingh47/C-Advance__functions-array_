#include<stdio.h>
int main()
{
    int x; int y; int i=2;
    printf("Enter the numbers\n");
    scanf("%d\n%d",&x,&y);
    while (i>0)
    {
        if (i%x==0 && i%y==0)
        {
            printf("LCM is %d",i);
            break;
        }
        else{i++;}
    }
}