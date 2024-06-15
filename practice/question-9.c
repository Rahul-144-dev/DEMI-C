/*Write a C program to input basic salary o an employee and calculate its Gross salary according to following:*/
/*Basic salary <= 10000 : HRA = 20 %, DA = 80 % ;
Basic salary <= 20000 : HRA = 25 %, DA = 90 % ;
Basic salary > 20000 : HRA = 30 %, DA = 95 % ;*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, gs, bs, hra, da;
    printf("enter basic salary : ");
    scanf("%f", &bs);
    printf("enter HRA  : %%");
    scanf("%f", &hra);
    printf("enter DA : %%");
    scanf("%f", &da);
    a = bs * (hra / 100);
    b = bs * (da / 100);
    gs = bs + a + b;
    printf("Gross Salary %f ", gs);
    return 0;
}