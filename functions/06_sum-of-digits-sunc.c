// sum of digits using function
#include <stdio.h>
#include <math.h>
void sod(int n);
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  sod(n);
  return 0;
}
void sod(int n)
{
  int rem, sum = 0;
  while (n != 0)
  {
    rem = n % 10;
    sum += rem;
    n /= 10;
  }
  printf("sum  of digits %d is : %d ", n, sum);
}
