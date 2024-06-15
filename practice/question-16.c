/* Write a c program to find the factorial of a given number */
#include <stdio.h>
#include <math.h>
int main()
{
    int n, factor = 1;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factor = factor * i;
        }
    printf("%d\n", factor);

    return 0;
}