#include <stdio.h>
#include <math.h>
int main()
{
    int r1, r2, i;
    printf("enter range 1 : ");
    scanf("%d", &r1);
    printf("enter range 2 : ");
    scanf("%d", &r2);

    for (i = r1; i <= r2; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            printf("%d\n", i);
    }
    return 0;
}