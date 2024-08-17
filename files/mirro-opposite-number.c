/* how to mirror or opposite a number like 123456 to 654321 */
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, rev = 0;
    printf("enter number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("the sum of digit is %d", rev);
    return 0;
}