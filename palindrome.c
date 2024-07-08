#include <stdio.h>
int main()
{
    int num, org, rem, rev = 0;
    printf("enter number : ");
    scanf("%d", &num);
    org = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = 10 * rev + rem;
        num /= 10;
    }
    if (org == rev)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}