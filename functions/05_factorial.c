// factorial using function
#include <stdio.h>
#include <math.h>
int factorial(int n);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  factorial(n);
  printf("factorial number of %d is %d", n, factorial(n));
  return 0;
}
int factorial(int n)
{
  int sum = 1;
  for (int i = 1; i <= n; i++)
  {
    sum *= i;
  }
  return sum;
}