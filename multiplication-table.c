#include <stdio.h>

int main()
{
  int num, i;
  printf("enter number");
  scanf("%d", &num);
  printf("multiplication table of number : %d\n", num);
  for (i = 1; i <= 10; i++)
  {
    printf("%d*%d=%d\n", num, i, num * i);
  }
  return 0;
}
