//Write a function to check whether a given number contains a given digit or not. Write a function and pass the ‘number’ and the ‘digit’ as function arguments. In the function definition, receive the value of arguments in formal parameters. Now in the function, check whether a given number contains a digit or not. Return the result. For example, the function will return ‘1’ if the digit is present, otherwise it will return 0. Now in main() function receive this result and print message accordingly. If function return ‘1’ then it should print the message DIGIT IS PRESENT IN THE NUMBER. Otherwise it should print DIGIT IS NOT PRESENT IN THE NUMBER.


#include <stdio.h>
int digit(int b, int y);
int main()
{
    int a;
    int y;
    int z;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the digit\n");
    scanf("%d", &y);
    z = digit(a, y);
    if (z == 1)
    {
        printf("\nDIGIT IS PRESENT");
    }
    else
    {
        printf("\nDIGIT IS NOT PRESENT");
    }
}
int digit(int b, int y)
{
    int c = 0;
    int k = 1;
    int d;
    while (b > 0)
    {
        c = b % (10 * k) - c;
        d = c / k;
        k = k * 10;
        if (d == y)
        {
            return 1;
            break;
        }
        if (c < 0)
        {
            break;
        }
        return 0;
    }
}