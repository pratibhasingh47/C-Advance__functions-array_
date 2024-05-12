#include<stdio.h>
#define pi 3.14
float arcircle(int r);
int main()
{
    int r;
    float ar;
    printf("Enter the radius\n");
    scanf("%d",&r);
    ar=arcircle(r);
    printf("The area is %f",ar);
}
float arcircle(int r)
{
    float area;
    area=pi*r*r;
    return area;
}