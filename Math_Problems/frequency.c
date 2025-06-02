#include<stdio.h>
int frequency(int *arr);
int main()
{
    int arr[5];int i;
    printf("Enter the value:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    frequency(arr);
}
int frequency(int *arr)
{
    int j,i;
    for ( j = 0; j < 5; j++)
    {
        int f=0;
        for ( i = 0; i < 5; i++)
        {
            if (arr[j]==arr[i])
            {
                f++;
            }
        }
        printf("Frequency of %d is %d\n",arr[j],f);
    }
}