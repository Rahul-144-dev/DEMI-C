/* Write a c program to add even numbers in a given range */
#include <stdio.h>
#include <math.h>
int main()
{
    int r1, r2, sum = 0;
    printf("enter range 1 : ");
    scanf("%d", &r1);
    printf("enter range 2 : ");
    scanf("%d", &r2);
    for (int i = r1; i <= r2; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}