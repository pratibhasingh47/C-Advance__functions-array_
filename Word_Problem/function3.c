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
