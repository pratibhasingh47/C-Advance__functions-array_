// Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. Write the function as pass the ‘number’ as an argument. In the function definition, receive this value in function parameters. Find all the prime factors and print them inside the function. Function need not to return anything.

#include <stdio.h>
int main()
{
    int i, k, n;
    printf("Enter the value :");
    scanf("%d", &n);
    i = 2;
    while (i > 0)
    {
        k = n % i;
        if (k == 0)
        {
            n = n / i;
            printf("%d* ", i);
        }
        else if (k != 0)
        {
            i++;
        }
    }
}