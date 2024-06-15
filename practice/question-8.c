/* Write a C program to check whether a year is leap year or not */
#include <stdio.h>
#include <math.h>
int main()
{
    int y;
    printf("enter year : ");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("this is leap year");
    }
    else{
        printf("this is not leap year");
    }

    return 0;
}