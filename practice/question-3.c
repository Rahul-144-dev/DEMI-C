/* Write a c program to add 2 numbers entered by the user and display the result */
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);

    printf("enter second number : ");
    scanf("%d", &b);

    int c = a + b;
    printf("answer is %d\n", c);
    return 0;
}