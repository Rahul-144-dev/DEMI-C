/* Write a c program to add first n numbers using while loop */
#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0;
    printf("enter number : ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d\n", sum);

    return 0;
}