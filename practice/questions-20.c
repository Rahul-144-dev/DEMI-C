/* Write a c program to print the fibbonacci series in a given range */
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 0, b = 1, num, next = 0;
    printf("enter range for fibbonaci series : ");
    scanf("%d", &num);
    printf("fibbonacci series\n");
    for (int i = 0; i <= num; i++)
    {
        if (i == 0) /*1!=0*/
        {
            printf("%d\n", a);
        }
        else if (i == 1) /*2!=0*/
        {
            printf("%d\n", b);
        }
        else
        {
            next = a + b;         /*(1+2=3)*/
            printf("%d\n", next); /*next=3*/
            a = b;                /*a=1=b*/
            b = next;             /*b=2=next*/
        }
    }
    return 0;
}