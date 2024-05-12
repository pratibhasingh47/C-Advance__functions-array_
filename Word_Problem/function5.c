// Write a function to print first N odd natural numbers. Call this function from main() function. Pass the value of N as an argument to this function. Function need not to return anything. It should simply print all the first N odd natural numbers.

#include <stdio.h>
void Nno(int n);
int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d", &n);
    Nno(n);
}
void Nno(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}