#include <stdio.h>

int main()
{
  int i, n, sum = 0;
  printf("enter number : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    sum += i;
  }
  printf("sum of  numbers from 1 to %d is %d\n", n, sum);

  return 0;
}
