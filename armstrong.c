#include <stdio.h>
#include <math.h>
int main()
{
    int num, org, rem, sum = 0;
    printf("enter number : ");
    scanf("%d", &num);
    org = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num /= 10;
    }
    if (org == sum)
        printf("ArmStrong");
    else
        printf("Not ArmStrong");
    return 0;
}