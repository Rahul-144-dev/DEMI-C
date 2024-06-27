/* prime number in different way */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = n; i <= n; i++)
    {
        if (n % 2 != 0 && n % (n - 1) != 0)
        {
            printf("prime");
        }
        else
        {
            printf("not-prime");
        }
    }
    return 0;
}