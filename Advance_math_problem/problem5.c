// Write a program to calculate sum of cubes of first N natural numbers

#include <stdio.h>
int main()
{
   int i, n, a;
   int k = 0;
   printf("Enter the value :");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      a = i * i * i;
      k = (k + a);
      if (i == n)
      {
         printf("%d", k);
      }
   }
}


