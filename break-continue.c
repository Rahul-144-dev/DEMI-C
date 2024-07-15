#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
            break;
        printf("%d\n", i);
    }
    for (int j = 1; j <= 10; j++)
    {
        if (j == 8)
        {
            continue;
        }
        printf("%d\n", j);
    }
    return 0;
}