#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, i, gcd;
    printf("enter number : ");
    scanf("%d", &a);
    printf("enter number : ");
    scanf("%d", &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("%d", gcd);

    return 0;
}