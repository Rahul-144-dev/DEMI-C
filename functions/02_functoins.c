// find the largest number among 2
#include <stdio.h>
#include <math.h>
void max(int a, int b);
int main()
{
  int a, b;
  printf("enter number a : ");
  scanf("%d", &a);
  printf("enter number b : ");
  scanf("%d", &b);
  max(a, b);
  return 0;
}
void max(int a, int b)
{
  if (a > b)
    printf("the lagest is : %d", a);
  else
    printf("the lagest is : %d", b);
}