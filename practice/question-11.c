/* Write a c program to print first n natural numbers using while loop */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        printf("%d,", i);
        i++;
    }

    return 0;
}