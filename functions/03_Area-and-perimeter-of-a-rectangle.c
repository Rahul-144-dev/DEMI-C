// Area and perimeter of a rectangle using functions
#include <stdio.h>
#include <math.h>
void area(int l, int b);
void perimeter(int l, int b);
int main()
{
  int length, breadth;
  printf("enter length of the circle : ", length);
  scanf("%d", &length);
  printf("enter breadth of the circle : ", breadth);
  scanf("%d", &breadth);
  area(length, breadth);
  perimeter(length, breadth);
  return 0;
}
void area(int l, int b)
{
  int rec_area = l * b;
  printf("the area of a rectangle is %d\n", rec_area);
}
void perimeter(int l, int b)
{
  int peri_meter = 2 * (l + b);
  printf("the perimeter of a rectangle is %d", peri_meter);
}
