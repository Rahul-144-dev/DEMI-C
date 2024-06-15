/* Write a c program to find the factorial(5 =5×4×3×2×1= 120) of a given number */
#include <stdio.h>
#include <math.h>
int main()
{
    int n, fact = 1;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);

    return 0;
}