// Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. Call this function from main() function and pass the number as an argument to the function. Print the value returned by this function in main() function.

#include <stdio.h>
int oddeven(int v);
int main()
{
    int v;
    int a, b;
    printf("Enter the value\n");
    scanf("%d", &v);
    a = oddeven(v);

    printf("%d\n", a);
}
int oddeven(int v)
{
    if (v % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
