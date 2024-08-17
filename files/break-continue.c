#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
            break;
        printf("%d ", i);
    }
    printf("\n");
    for (int j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {
            continue;
        }
        printf("%d ", j);
    }
    return 0;
}