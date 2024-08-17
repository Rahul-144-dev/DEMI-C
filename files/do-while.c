#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    do
    {
        printf("enter your number : ");
        scanf("%d", &n);
        if (n < 0)
            printf("negative number is %d \n", n);
        else if (n > 0)
            printf("positive number is %d \n", n);
        else
            printf("number is %d \n", n);
    } while (1);
    return 0;
}