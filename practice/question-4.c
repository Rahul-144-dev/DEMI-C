/* Write a c program to calculate the area and perimeter of a circle */
#include <stdio.h>
#include <math.h>
int main()
{
    float r, pi = 3.14;
    printf("enter radius of cicle : ");
    scanf("%f", &r);
    printf("the area of a circle %f\n", pi * (r * r));
    printf("the perimeter of a circle %f\n", (2 * r) * pi);

    return 0;
}