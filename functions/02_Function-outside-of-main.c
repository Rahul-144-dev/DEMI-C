#include <stdio.h>
#include <math.h>
void area(int r);
int main()
{
  int radius;
  printf("enter radius of the circle : ", radius);
  scanf("%d", &radius);
  area(radius);
  return 0;
}
void area(int r)
{
  int c_area = 3.14 * r * r;
  printf("the area of a circle is %d", c_area);
}