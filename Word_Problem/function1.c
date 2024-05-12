// Write a function to calculate the area of a circle. From the main() function, call your function and pass the value of radius as an argument to this function. Your function should receive the radius as a parameter and then it should return the area of a circle. Receive the value in a variable in main() function. Now print this value of area in main() function.

#include <stdio.h>
#define pi 3.14
float arcircle(int r);
int main()
{
    int r;
    float ar;
    printf("Enter the radius\n");
    scanf("%d", &r);
    ar = arcircle(r);
    printf("The area is %f", ar);
}
float arcircle(int r)
{
    float area;
    area = pi * r * r;
    return area;
}