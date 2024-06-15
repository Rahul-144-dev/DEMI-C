/* Write a C program to input angles of a triangle and check whether triangle is valid or not */
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter first  angle : ");
    scanf("%d", &a);
    printf("enter second  angle : ");
    scanf("%d", &b);
    printf("enter third  angle : ");
    scanf("%d", &c);
    if (a + b + c == 180 && a, b, c >= 0)
    {
        printf("this a triangle");
    }
    else
    {
        printf("not a triangle");
    }
    return 0;
}