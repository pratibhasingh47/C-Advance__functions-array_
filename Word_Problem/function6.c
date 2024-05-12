// Write a function to calculate the factorial of a number. Call this function from main() function. Pass the value of number whose factorial needs to be calculated, as an argument to this function. Function should calculate the factorial and then return the calculated factorial. In main() function receive this value in a variable and then print the value of this variable .


#include <stdio.h>
int factorial(int x);
int main()
{
    int x;
    int i;
    printf("Enter the value\n");
    scanf("%d", &x);
    int ft;
    ft = factorial(x);
    printf("%d", ft);
}
int factorial(int x)
{
    int i, f = 1;
    for (i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}