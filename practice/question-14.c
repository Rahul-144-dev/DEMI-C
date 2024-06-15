/* Write a c program to print all numbers divisible by 3 or 5 in a given range */
#include <stdio.h>
#include <math.h>
int main()
{
    int r1, r2, count = 0;
    printf("enter range 1: ");
    scanf("%d", &r1);
    printf("enter range 2: ");
    scanf("%d", &r2);
    for (int i = r1; i <= r2; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("no divisible number has found");
    }

    return 0;
}