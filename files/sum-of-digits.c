/* sum of digits of the number like 1234 means 10 */
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, sum = 0;
    printf("enter number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("the sum of digit is %d", sum);
    return 0;
}