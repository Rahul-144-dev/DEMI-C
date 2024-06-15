/*Write a C program to find maximum between two numbers.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    if (a < b)
    {
        printf("this is max %d", b);
    }
    else if (a > b)
    {
        printf("this is max %d", a);
    }
    return 0;
}