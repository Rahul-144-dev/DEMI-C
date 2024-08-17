#include <stdio.h>
#include <math.h>
int main()
{
  int a, b;
  printf("enter number 1 : ");
  scanf("%d", &a);
  printf("enter number 2 : ");
  scanf("%d", &b);
  void sum()
  {
    int sum = a + b;
    printf("sum of %d and %d is %d\n", a, b, sum);
  }
  sum();
  return 0;
}