/* Write a C program to check whether a number is divisible by 5 and 11 or not */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
    {
        printf("divisible");
    }
    else
    {
        printf("not-divisible");
    }
    return 0;
}