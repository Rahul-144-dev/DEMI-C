/* Write a c program to print the reverse of a number */
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}