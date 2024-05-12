// Write a function to print first N natural numbers. Call this function from main() function. Pass the value of N as an argument to this function. Function need not to return anything. It should simply print all the first N natural numbers.

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
        printf("%d\n", i);
    }
}