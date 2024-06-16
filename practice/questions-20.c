/* Write a c program to print the fibbonacci series in a given range */
#include <stdio.h>
#include <math.h>
int main()
{
    int t1 = 0, t2 = 1, next, i, n;
    printf("enter range for fibbonaci series : ");
    scanf("%d", &n);
    printf("fibbonacci series\n");
    for (i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            printf("%d\n", t1);
        }
        else if (i == 1)
        {
            printf("%d\n", t2);
        }
        else
        {
            next = t1 + t2;
            printf("%d\n", next);
            t1 = t2;
            t2 = next;
        }
    }
    return 0;
}