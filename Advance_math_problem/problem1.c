// Write a program to calculate sum of first N natural numbers

#include <stdio.h>
int main()
{
   int i, n;
   int k = 0;
   printf("Enter the value :");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      k = (k + i);
      if (i == n)
      {
         printf("%d", k);
      }
   }
}