/* Write a c program to find whether a number is prime or not */
#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % 1 == 0 && n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime\n");
    }
    else
    {
        printf("not prime\n");
    }
    return 0;
}